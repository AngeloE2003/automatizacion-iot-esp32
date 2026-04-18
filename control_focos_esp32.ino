#include <WiFi.h>

// Credenciales de la red Wi-Fi
const char* ssid = "Roger"; 
const char* password = "123456788";

// Iniciar el servidor web en el puerto 80
WiFiServer server(80);

void setup() {
  Serial.begin(115200); // Inicializa la comunicación serial

  // Configuración de pines como salidas (7 focos)
  pinMode(21, OUTPUT);
  pinMode(19, OUTPUT);
  pinMode(18, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(17, OUTPUT);
  pinMode(16, OUTPUT);
  pinMode(15, OUTPUT);

  // Estado inicial: Todos los relés apagados (HIGH por la lógica del módulo)
  digitalWrite(21, HIGH);
  digitalWrite(19, HIGH);
  digitalWrite(18, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(17, HIGH);
  digitalWrite(16, HIGH);
  digitalWrite(15, HIGH);
  delay(10);

  // Conexión a la red WiFi
  Serial.println();
  Serial.print("Conectando a ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);
  
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println("");
  Serial.println("Conectado a la red WiFi.");
  Serial.print("Dirección IP: ");
  Serial.println(WiFi.localIP());
  
  server.begin();
}

void loop() {
  WiFiClient client = server.available(); // Escucha a los clientes entrantes
  
  if (client) {
    String currentLine = "";
    
    while (client.connected()) {
      if (client.available()) {
        char c = client.read();
        
        if (c == '\n') {
          // Si la línea actual está vacía, la solicitud HTTP ha terminado
          if (currentLine.length() == 0) {
            // Enviar respuesta HTTP
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println();
            
            // Interfaz HTML Básica
            client.println("<!DOCTYPE html><html>");
            client.println("<head><meta name=\"viewport\" content=\"width=device-width, initial-scale=1\">");
            client.println("<title>Control de Iluminación</title></head>");
            client.println("<body><h1>Sistema Domotico ESP32</h1>");
            
            // Botones de ejemplo para el Foco del Pin 21
            client.println("<p>Foco Principal (Pin 21)</p>");
            client.println("<p><a href=\"/E21\"><button>Encender</button></a></p>");
            client.println("<p><a href=\"/A21\"><button>Apagar</button></a></p>");
            
            client.println("</body></html>");
            client.println();
            break;
          } else {
            currentLine = "";
          }
        } else if (c != '\r') {
          currentLine += c;
        }

        // Lógica de encendido y apagado (Comandos GET)
        if (currentLine.endsWith("GET /A21")) {
          digitalWrite(21, HIGH); // Apagar
        }
        if (currentLine.endsWith("GET /E21")) {
          digitalWrite(21, LOW);  // Encender
        }
        // (La misma lógica se repite para los demás pines: 19, 18, 5, 17, 16, 15)
      }
    }
    client.stop(); // Cerrar la conexión
    Serial.println("Cliente desconectado");
  }
}

# 🏠 Sistema de Automatización IoT con Servidor Web (ESP32)

Este proyecto consiste en un sistema de domótica diseñado para el control remoto de iluminación (7 focos) a través de una red Wi-Fi local. Utiliza un microcontrolador ESP32 configurado como servidor web, permitiendo gestionar el encendido y apagado de dispositivos desde cualquier navegador web sin necesidad de aplicaciones externas.

## 🚀 Funcionalidades
* **Servidor Web Embebido:** Interfaz interactiva alojada en el microcontrolador.
* **Control Remoto:** Gestión de 7 canales independientes mediante protocolo HTTP.
* **Acceso Multiplataforma:** Compatible con smartphones, tablets y laptops conectados a la misma red.
* **Seguridad Eléctrica:** Aislamiento mediante módulos relé para el manejo de cargas de potencia.

## 🛠️ Hardware y Tecnologías
* **Microcontrolador:** ESP32-WROOM-32D.
* **Actuadores:** Módulo Relé de 8 canales.
* **Lenguajes:** C++ (Arduino IDE) para la lógica y HTML/CSS para la interfaz.
* **Conectividad:** Protocolo TCP/IP y Wi-Fi (802.11 b/g/n).

## 🧠 Lógica de Operación
El sistema establece una conexión a la red local y asigna una dirección IP fija o dinámica. Al recibir solicitudes HTTP de tipo GET (por ejemplo, `/E21` para encender o `/A21` para apagar), el procesador conmuta el estado de los pines GPIO conectados al módulo de relés, cerrando o abriendo el circuito de los focos.

## 📸 Demostración
A continuación, puedes ver el prototipo en pleno funcionamiento, donde se demuestra el control remoto de las luces mediante la interfaz web alojada en el ESP32:

* 🎥 **[Ver Video de Demostración 1](https://drive.google.com/file/d/1jZPhiB8Mj2rIf4XZ-k83-jTs6EZS31K5/view?usp=sharing)**


---
**Curso:** Arquitectura del Computador  
**Institución:** Universidad Privada del Norte

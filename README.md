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

### 🏗️ Diseño y Arquitectura (UML)
Se realizó el modelado previo del sistema para asegurar una estructura lógica y eficiente:
* 📊 **[Ver Diagrama UML del Sistema](https://www.plantuml.com/plantuml/png/hLJDQXin4BxhAOQSR30qBhW_taCJd6riS4eWXXvA3ueqJWIoj4XQf-tRz05owYFunJhQLKL45-D3TB3C-9ll-_Hvf0iVk0ljJhFk2sFpbL52SQr-SQ4EVmn8r727ZaeLco-isQg7rkNVe546FOpUJYVJZnEOVfZ0ZBRta-cxoNGsffQQYEyr2dG9YmQMg-ibZDRrbGVUy0SkhITeHu-2V027h-gpgfZ31dbW06eBerW2qKEa_JI6y8W6HlxmF6P0QtvZVN3KBPL3qJjStLOC0BL761cRSBLlCE9cv-UmyrLVN9c09ced1Q91C2tkRSTWfDecE_3qg3GcFyP2jZJEyJdmwFPAMWTFU5-nr5dA2wsGH7lzUC15No3_lh56KMh_7x9Z-19jWVW7nz3hLon3ibvQIU6A1-jVyFjXWIoqHYIVt1r-Yu0naS9qNla06Oc-ouw3FZmRv4TbSlkTrHHUQ2KiDvjRodNNQAI3dT3U1slsCNg7lcdH1quqD-jg45_C2nhD1NfekECGftAufvoYeHK7E2ZJ4gV6dsYa1Kc93_EbcJgjweDjsF7CqCFPTRs1D_KtEiFtioEPvRm4gQ43mbFQBWPdZSn_y6iRkppLs6Ly55xNLWahBdA-To_U5bOGbGIvD5-WS-d5-16Vc-A2b1f3Tvin8cKNzD7kqgR_0W00)**

## 👥 Equipo de Desarrollo
Este proyecto fue realizado de manera colaborativa por:
* Cántaro Ramírez, Rogelio Alfredo
* **Echenique Quispe, Angelo Gabriel**
* Loayza Alan, Jair Miguel
* Pereda Alvarado, Yair Gabriel
* Huaynates Valencia, Luis Fernando

## 📸 Demostración
A continuación, puedes ver el prototipo en pleno funcionamiento, donde se demuestra el control remoto de las luces mediante la interfaz web alojada en el ESP32:

* 🎥 **[Ver Video de Demostración 1](https://drive.google.com/file/d/1jZPhiB8Mj2rIf4XZ-k83-jTs6EZS31K5/view?usp=sharing)**


---
**Curso:** Arquitectura del Computador  
**Institución:** Universidad Privada del Norte

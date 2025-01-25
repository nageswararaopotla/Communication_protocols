// Define TX and RX pins for UART communication (optional, as Serial uses default pins)
#define TXD1 1  // Default TX pin for ESP8266
#define RXD1 3  // Default RX pin for ESP8266

void setup() {
  Serial.begin(115200);  // Initialize Serial (default hardware UART for ESP8266)
  
  // Print to serial monitor
  Serial.println("ESP8266 UART Transmitter");
}

void loop() {
  static int counter = 0;  // Counter to send over UART
  
  // Send counter value over UART
  Serial.println(String(counter));
  
  // Print sent message to the Serial Monitor
  Serial.println("Sent: " + String(counter));
  
  // Increment the counter
  counter++;
  
  delay(1000);  // Wait 1 second before sending the next value
}

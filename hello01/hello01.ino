int LED = 2;

void setup() {
  // put your setup code here, to run once:
  
   //Initialize serial and wait for port to open:
  Serial.begin(115200);
  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }
  Serial.println("hello ini varrat");
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("ini di dalam loop");
  delay(100);
  digitalWrite(LED, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);
  digitalWrite(LED, LOW);   // turn the LED on (HIGH is the voltage level)

}

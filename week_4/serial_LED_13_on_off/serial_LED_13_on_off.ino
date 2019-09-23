char incoming_char = '0';
void setup() 
{  pinMode(LED_BUILTIN, OUTPUT);  Serial.begin(9600); 
}



void loop()    
{if (Serial.available() > 0) {    incoming_char = Serial.read();     }          if (incoming_char == '1') {          digitalWrite(LED_BUILTIN, HIGH);      }          if (incoming_char == '0') {            digitalWrite(LED_BUILTIN, LOW);         }}

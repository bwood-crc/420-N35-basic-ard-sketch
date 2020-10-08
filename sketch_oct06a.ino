int sensorPin = A1;
int Analog = 0;

int red_light_pin= 11;
int green_light_pin = 10;
int blue_light_pin = 9;
void setup() {
  pinMode(red_light_pin, OUTPUT);
  pinMode(green_light_pin, OUTPUT);
  pinMode(blue_light_pin, OUTPUT);

  String a = "R3";
  String b = a.substring(2, 1);

  Serial.begin(9600);
}
void loop() {

  Analog = analogRead (sensorPin) * (5.0 / 1023.0);

  //Serial.print("Analog voltage value:"); Serial.print (Analog, 4);  Serial.println ("V, ");

  Serial.println(Analog);
  delay(10);
  //RGB_color(10, 0, 0); // Red
  //delay(150);
  //RGB_color(0, 10, 0); // Green
  //delay(150);
  //RGB_color(0, 0, 10); // Blue
  //delay(150);
  //RGB_color(10, 10, 5); // Raspberry
  //delay(150);
  //RGB_color(0, 10, 10); // Cyan
  //delay(150);
  //RGB_color(10, 0, 10); // Magenta
  //delay(150);
  //RGB_color(10, 10, 0); // Yellow
  //delay(150);
  //RGB_color(10, 10, 10); // White
  //delay(150);
}
void RGB_color(int red_light_value, int green_light_value, int blue_light_value)
 {
  analogWrite(red_light_pin, red_light_value);
  analogWrite(green_light_pin, green_light_value);
  analogWrite(blue_light_pin, blue_light_value);
}

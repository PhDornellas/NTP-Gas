int Pinbuzzer = 8;
int Pinled = 7;
int PinA0 = A0;
int leitura_sensor = 300;


void setup() 
{
  pinMode(PinA0, INPUT);
  pinMode(Pinbuzzer, OUTPUT);
  pinMode(Pinled, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  int valor_analogico = analogRead(PinA0);
  Serial.print("Leitura: ");
  Serial.println(valor_analogico);
  if (valor_analogico > leitura_sensor)
  {
    tone(Pinbuzzer, 10000);
    delay(1000);
    noTone(Pinbuzzer);
    delay(1000);
    digitalWrite(Pinled, HIGH);
  }
  else
  {
    noTone(Pinbuzzer);
    digitalWrite(Pinled, LOW);
  }
  delay(100);
}

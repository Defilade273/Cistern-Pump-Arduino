void setup() {
  // put your setup code here, to run once:
  /*  Ultrasonic sensor Pins:
   * Trig: Trigger (OUTPUT) - Pin1
   * Echo: Echo (INPUT) - Pin2 
   * 
   *  Relay Pins:
   *  Trig: Trigger (Input) - Pin 3
   */
  int Fill_Line = 9;
  int Ultra_Trig_Pin = 1;
  int Ultra_Echo_Pin = 2;
  int Relay_Trig_Pin = 3;
  long duration, cm;

  pinMode(Ultra_Trig_Pin, OUTPUT);
  pinMode(Ultra_Echo_Pin, INPUT);
  pinMode(Relay_Trig_Pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while (True){
  
  digitalWrite(Ultra_Trig_Pin, HIGH);
  duration = pulseIn(Ultra_Echo_Pin, HIGH);
  cm = (duration/2) / 29.1;
  
  if (cm > Fill_Line){

    digitalWrite(Relay_Trig_Pin, HIGH);
  }
  else (){

    digitalWrite(Relay_Trig_Pin, LOW);
  }

  delay(1000);
}

}

void setup() {

}

void loop() {

  
// Declaring Variables
  int Fill_Line = 9;        // Fixed variable relative to my setup
  int Ultra_Trig_Pin = 2;   // Ultrasonic Sensor trigger pin
  int Ultra_Echo_Pin = 6;   // Ultrasonic Sensor echo pin
  int Relay_Trig_Pin = 10;   // Relay trigger pin
  long duration, cm;
  
// Setting pin modes
  pinMode(Ultra_Trig_Pin, OUTPUT);
  pinMode(Ultra_Echo_Pin, INPUT);
  pinMode(Relay_Trig_Pin, OUTPUT);

  while (1){
  // Clears the trigger pin of the Ultrasonic Sensor
  digitalWrite(Ultra_Trig_Pin, LOW);
  delayMicroseconds(10);

  // Sets the trigger pin on HIGH state for 10 micro seconds
  digitalWrite(Ultra_Trig_Pin, HIGH);
  delayMicroseconds(10);
  digitalWrite(Ultra_Trig_Pin, LOW);

  // Reads the Echo pin, stores to long duration
  long duration = pulseIn(Ultra_Echo_Pin, HIGH);

  // Calculation to turn duration into cm
  long cm = (duration/2) / 29.1;

  // Logic for activating relay relative to cistern curent capacity
  // if the current water level's distance is greater than the fill line, activate relay
  if (cm > Fill_Line){
    digitalWrite(Relay_Trig_Pin, LOW);
  }
  // else turn off relay
  else{              
    digitalWrite(Relay_Trig_Pin, HIGH);
  }

  // Delay 10 seconds
  delayMicroseconds(10000);   
}

}

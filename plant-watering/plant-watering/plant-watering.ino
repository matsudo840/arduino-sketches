int soil_moisture;
 
void setup(){ 
  Serial.begin(9600); 
}
 
void loop(){
  soil_moisture = analogRead(0);
  Serial.println(soil_moisture);
}

const int air_valve= 2;
const int chem_valve= 3;
const int water_valve= 4;
const int blower= 5;

const int push_button=6;
const int red_ledPin = 11;
const int green_ledPin = 7;
int buttonState = 0; 

void setup() {
  Serial.begin(115200);
  pinMode(push_button, INPUT_PULLUP);
  pinMode(air_valve, OUTPUT);
  pinMode(chem_valve, OUTPUT);
  pinMode(water_valve, OUTPUT);
  pinMode(blower, OUTPUT);
  pinMode(red_ledPin, OUTPUT);
  pinMode(green_ledPin, OUTPUT);
}
void loop()
{
   buttonState = digitalRead(push_button);
   //Serial.println(buttonState);
   if (buttonState==1){
   delay(100);
   digitalWrite(green_ledPin, LOW);
   digitalWrite(red_ledPin, HIGH);
   delay(100);
   digitalWrite(air_valve, HIGH);
   Serial.println("air_valve__on");
   delay(5000);
   
   digitalWrite(chem_valve, HIGH);
   Serial.println("chem_valve_on");
   delay(15000);

   digitalWrite(air_valve, LOW);
   delay(100);
   digitalWrite(chem_valve, LOW);
   Serial.println("air_chem_valve_off");
   delay(100);
   
   digitalWrite(water_valve, HIGH);
   Serial.println("water_valve_on");
   delay(5000);
   digitalWrite(water_valve,LOW);
   Serial.println("water_valve_off");
   delay(100);
   
   digitalWrite(blower, HIGH);
   Serial.println("blower_on");
   delay(5000);
   digitalWrite(blower, LOW);
   Serial.println("blower_off");
   delay(100);
   
   digitalWrite(green_ledPin, HIGH);
   digitalWrite(red_ledPin, LOW);
   delay(100);
  }
//  else{
//    digitalWrite(green_ledPin, HIGH);
//    delay(2);
//    }
   
}

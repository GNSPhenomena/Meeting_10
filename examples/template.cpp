/* USEFUL COMMANDS
      Serial.begin(9600);
      pinMode();
      digitalWrite();
      Serial.print();
      Serial.println();
*/

//define ur pins here
const int trigPin = ;
const int echoPin = ;

void setup()
{

}

int distance()
{
  int duration,distance;
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = (double)(duration/2) / 29.1;
  //Serial.print("Distance: ");
  //Serial.println(distance);
  return distance;
}

void loop()
{  
  
}
void setup ()
{
pinMode (7, OUTPUT);
pinMode (6, INPUT);
}
void loop ()
{
if (digitalRead (6) == HIGH)
digitalWrite(7, HIGH);
else
digitalWrite(7, LOW);
}
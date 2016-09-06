#include <Color.h>

/***************************************************
 * This library is free to use!
 * - Padmal
 ***************************************************/
// Constructors are as follows
// Color((unsigned int[]){S0, S1, S2, S3, LED}, SENSOR_OUT);
// Color((unsigned int[]){S0, S1, S2, S3, LED}, SENSOR_OUT, Frequency);

Color color((unsigned int[]) {40, 41, 42, 43, 44}, 45);

void setup() {
  Serial.begin(9600);
  delay(100);
  Serial.println("Printing raw values...");
}

void loop() {
  int Blue = color.blue();
  int Red = color.red();
  int Green = color.green();
  int White = color.white();

  String disp = String("Blue :\t" + String(Blue) + "\tRed :\t" + String(Red) + "\tGreen :\t" + String(Green));
  Serial.print(disp);
  Serial.print("\tWhite :\t");
  Serial.println(White);
  delay(250);
}

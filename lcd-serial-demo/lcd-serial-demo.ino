/* YourDuino.com Example Software Sketch
   Serial LCD Display
   terry@yourduino.com */

/*-----( Declare Constants, Pin Numbers )-----*/

/*-----( Declare Variables )-----*/


void setup()   /*----( SETUP: RUNS ONCE )----*/
{
  Serial.begin(115200); // Will be sent to both Serial Monitor and this LCD
}/*--(end setup )---*/


void loop()   /*----( LOOP: RUNS CONSTANTLY )----*/
{

    Serial.print("$CLEAR\n");
    delay(2000);
    Serial.print("$GO 1 1\n");
    Serial.print("$PRINT Flamingo EDA\n");
    Serial.print("$GO 2 4\n");
    Serial.print("$PRINT Hello World!\n");
    Serial.print("$CURSOR 1 1\n");

}/* --(end main loop )-- */

/* ( THE END ) */

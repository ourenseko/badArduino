 #include <Keyboard.h>
 // #include <HID.h>

void setup() {
  // put your setup code here, to run once:
   Keyboard.begin();
    // This delay is mandatory. If you want to understand why, delete it.
    // Wait 1350 ms = 1,35 seconds
    delay(1350);


int intTimeDownload = 5; // seconds, (Mb Size * 4 ; min. 250Kb/s)  

Keyboard.press(KEY_LEFT_GUI);
    delay(300);
    Keyboard.releaseAll();
    delay(300);
    Keyboard.print( "powershell -command \" &{ echo 'Configurando, espera " );
    Keyboard.print( int(intTimeDownload) );
    Keyboard.print( " segundos' ; start-sleep );
    Keyboard.print( int(intTimeDownload) );
    Keyboard.println( ; echo 'Por el culo te la inco' }\" " );
    // powershell -command "&{ echo 'Hola, espera 5 segundos' ; start-sleep 5 ; echo 'Por el culo te la inco jajajaja' }"
    delay(500);
    // Press ENTER key
    typeKey(KEY_RETURN);
    typeKey(KEY_RETURN);
    Keyboard.releaseAll();


  Keyboard.end();
}

void loop() {
  // put your main code here, to run repeatedly:

}



void typeKey(int key){
  // Press key
  Keyboard.press(key);
  // Wait 300 ms
  delay(300);
  // Release key
  Keyboard.release(key);
}

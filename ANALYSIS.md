# Dissection and Analysis

After obfuscating the files and gathering the exe files for both c and c++ files, we used IDA Pro to try to dissect them. This proved to be difficult, since everything meaningful in both programs had been turned into complete gibberish. As seen in the two photos below, there were no strings found in either of these files, other than the message that "This program cannot be run in DOS mode", which is a basic header that every Windows executable has. 

In the first photo below, we did find that it found the strings "Hello World" and "Goodbye World".

<img src = "https://raw.githubusercontent.com/whoward3/C-Code-Obfuscator/master/assets/attackhello.png" width = "1400"> <br>

<img src = "https://raw.githubusercontent.com/whoward3/C-Code-Obfuscator/master/assets/attack2.png" width = "1400"> <br>

<img src = "https://raw.githubusercontent.com/whoward3/C-Code-Obfuscator/master/assets/attack1.png" width = "1400"> <br>


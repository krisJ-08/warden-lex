# Warden Programming Language

## How to Install Warden
__1. Install Flex and GNUWin C Compiler__

http://gnuwin32.sourceforge.net/packages/flex.htm

https://sourceforge.net/projects/mingw/

http://gnuwin32.sourceforge.net/packages/bison.htm

*Install also the Bison compiler for the semantics in the future*

*Install the Flex in the root folder or the C: folder directly*

    After installation, locate the installation folder called "GnuWin32" and open "bin" folder.

    Then copy the path in the file explorer. As shown in the image:

![image](https://user-images.githubusercontent.com/77821151/151989936-e5210c83-8c81-483c-b2f3-672b22a15d0f.png)

    Open start menu and search "environment" then select the top result.

    Click "Environment Variables"

    Select Path in the System Variables box/section, then click Edit

    Click New and paste the directory of flex

    Tapos OK niyo na lang.

    Do it the same with the Gnu C Compiler.

    Locate the MinGW folder on the C: and open the bin folder

    Do the same process on copying the path and pasting it the Environment Variables
    

__2. Download the project in a ZIP folder__

Click the green button "Code" and select "Download ZIP"

Then extract the folder and open it

__3. Click the path in the File Explorer like in the Image:__

![image](https://user-images.githubusercontent.com/77821151/151991528-04fd7671-b18a-4228-8141-780b428a7d46.png)

    Then type "cmd" to open the command prompt
    
    
__4. Run the Lex file__
```
flex wardenlex.l \\ It will generate the lex.yy.c file
gcc lex.yy.c \\ This will generate the exe program of the language
a.exe \\ This is the execuatable program
```
__5. Try typing the keywords or operations__

    default if else yield dotimes
    
![image](https://user-images.githubusercontent.com/77821151/151992676-21d8070e-06e7-442f-92a0-61d515a45cfb.png)

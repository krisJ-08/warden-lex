# Warden Programming Language

## How to Install Warden
__1. Install Flex, GNUWin C Compiler and Bison__

http://gnuwin32.sourceforge.net/packages/flex.htm

https://sourceforge.net/projects/mingw/

http://gnuwin32.sourceforge.net/packages/bison.htm

*Install the Flex, C Compiler and Bison in the root folder or the C: folder directly*

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

![image](https://user-images.githubusercontent.com/77821151/152737546-655998a7-5f0a-4712-9a3b-d58159964b7c.png)

    Then type "cmd" to open the command prompt
    
    
__4. Run the Lex file__
```
flex wardenlex.l    \\ It will generate the lex.yy.c file
gcc lex.yy.c        \\ This will generate the exe program of the language
a.exe               \\ This is the execuatable program
sample              \\ The sample Warden source code
                    \\ You can change the source code with different keywords etc.
```
__5. Run the a.exe file__

    It will prompt you to type the filename of the source code which is "sample"
    
    Then it will display the lexemes and tokens of the source code
    
    A text file named "Symbol Table.txt" will be generated which the symbol table is located.
 

    
![image](https://user-images.githubusercontent.com/77821151/152737743-bc83c0b9-2826-4ba1-8e4d-e5cf3f4efa59.png)

![image](https://user-images.githubusercontent.com/77821151/152737777-9564c663-7506-4ae7-8385-e8e10c17301d.png)


__6. Edit the Warden source file__

    There's a sample.wd file in the folder which you can edit the source file
    
    Use the checked.txt to check if the operators, and keywords are used in the source file
    
    Test your code in the C file first before putting it in the warden source file named "test.c".

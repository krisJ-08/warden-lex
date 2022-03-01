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

![image](https://user-images.githubusercontent.com/77821151/156102703-062978d0-5e02-4c05-9210-db429ff73e6f.png)

    Then type "cmd" to open the command prompt
    
    
__4. Run the Lex and Syntax Warden EXE file in CMD__
```
asd    \\ It will run the pre configure commands to run Flex and Bison

```
__5. Run the asd.bat script file__

    It will prompt you to type the filename of the source code which is "sample"
    
    Then it will display the syntax analyzer messages
    
    A text file named "symtab_dump.out" will be generated which the symbol table is located.
 

    
![image](https://user-images.githubusercontent.com/77821151/156102524-095e9375-392e-4c43-b4b2-51657046eb86.png)

![image](https://user-images.githubusercontent.com/77821151/156102580-8bbb3564-a7fb-4c92-86a3-a59074d063af.png)

![image](https://user-images.githubusercontent.com/77821151/156102618-1a452430-b082-4943-b905-b70dacb6dda1.png)



__6. Edit the Warden source file__

    There's a sample.wd file in the folder which you can edit the source file
    

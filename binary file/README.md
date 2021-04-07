# README

## In this folder
This is the homework 3 for postgresql source code reading class from xiaotong li. This folder contains files as follows:
- main.cpp :source code of this homework
- a.out :the executive document of main.cpp
- README.md :this file
- student_list.txt :code will load data into this file
- test: some test input
- output: the output of the code

## Explaination to the code
There is a huge loop never end unless you type ``` ctrl + c ```. In this loop the user need to type in the flag which can only be '1', '2','3','4' and '5', all of them have their own meaning. When you type in '2' you will see the explaination in case the user get lost.
```
this is help page >>>
         type 1: type in 4 students information
         type 2: show this page
         type 3: load data into student_list.txt
         type 4: delete the student_list
         type 5: traverse the student_list
```

When type in 1 as flag, you need to input 4 students' information. These 4 piece of information will be added into the student_list, which is a global variable. When 3 is typed in as a flag, user will load the data in student_list into the file student_list.txt. You can check for that later yourself. 

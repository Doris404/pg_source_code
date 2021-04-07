# README

## In this folder
This is the homework 3 for postgresql source code reading class from xiaotong li. This folder contains files as follows:
- main.cpp :source code of this homework
- a.out :the executive document of main.cpp
- README.md :this file
- student_list.txt :code will load data into this file
- test: some test input
- output: the output of the code

## How to use this code
There is a huge loop never end unless you type ``` ctrl + c ```. In this loop the user need to type in the flag which can only be '1', '2','3','4' and '5', all of them have their own meaning. When you type in '2' you will see the explaination in case the user get lost.
```
this is help page >>>
         type 1: type in 4 students information
         type 2: show this page
         type 3: load data into student_list.txt
         type 4: delete the student_list
         type 5: traverse the student_list
```

When type in 1 as flag, you need to input 4 students' information. These 4 piece of information will be added into the student_list, which is a global variable. When 3 is typed in as a flag, user will load the data in student_list into the file student_list.txt. You can check for that later yourself. Be careful when you type in 4 as input flag, for it will delete all students in the student_list. To check how many students and who are they in the student_list, please type in 5 as input flag.

## Introduction to source code

There are only 5 functions here in the main.cpp, making it rather easy to understand.
```
vector<Student> push_student4(vector<Student> student_list); // write in 4 student into student_list
int traverse_student_list(vector<Student> student_list); // traverse all students in student_list
int write_in_file(vector<Student> student_list); // write student_list into the file
vector<Student> delete_student_list(vector<Student> student_list); // delete the student_list
int main(); // the main function
```


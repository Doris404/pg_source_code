#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

struct Student
{
    int64_t s_id;
    char s_name[20];
    char s_sex[2];
    char s_dorm[20];
    char s_college[100];
};
vector <Student> student_list;

vector<Student> push_student4(vector<Student> student_list); // write in 4 student into student_list
int traverse_student_list(vector<Student> student_list); // traverse all students in student_list
int write_in_file(vector<Student> student_list); // write student_list into the file
vector<Student> delete_student_list(vector<Student> student_list); // delete the student_list

int main() {;
    char flag;
    while (1) {
        cout << "type in the flag >>> ";
        cin >> flag;
        switch (flag)
        {
        case '1':
            cout << "type in 4 students information >>>" << endl;
            student_list = push_student4(student_list);
            break;
        case '2':
            cout << "this is help page >>>" << endl;
            cout << "\t type 1: type in 4 students information" << endl;
            cout << "\t type 2: show this page" << endl;
            cout << "\t type 3: load data into student_list.txt" << endl;
            cout << "\t type 4: delete the student_list" << endl;
            cout << "\t type 5: traverse the student_list" << endl;
            break;
        case '3':
            cout << "load data into student_list.txt" << endl;
            write_in_file(student_list);
            break;
        case '4':
            cout << "delete the student_list" << endl;
            student_list = delete_student_list(student_list);
            break;
        case '5':
            cout << "traverse the student_list" << endl;
            traverse_student_list(student_list);
            cout << "length of student_list:" << student_list.size() << endl;
            break;
        default:
            break;
        }
    }
    return 0;
}


vector<Student> push_student4(vector<Student> student_list) {
    for (int i = 0; i < 4; i++) {
        Student tmp;
        // printf("Type in the information >>>\n");
        cin >> tmp.s_id >> tmp.s_name >> tmp.s_sex >> tmp.s_dorm >> tmp.s_college;
        student_list.push_back(tmp);
    }
    return student_list;
} // write in 4 student into student_list

int traverse_student_list(vector<Student> student_list) {
    for (int i = 0; i < student_list.size(); i++) {
        cout << "The student " << student_list[i].s_id << " " << student_list[i].s_name << " " << student_list[i].s_sex << " " << student_list[i].s_dorm << " " << student_list[i].s_college << endl;
    }
    return student_list.size();
} // traverse all students in student_list

int write_in_file(vector<Student> student_list) {
    FILE *fp;
    if((fp=fopen("student_list.txt","wb"))==NULL) {
        cout << "Error: open file" << endl;
        getchar();
        exit(1);
    }
    else {
        for (int i = 0; i < student_list.size(); i++) {
            char tmp[20];
            char split[] = ",";
            sprintf(tmp, "%lld", student_list[i].s_id);
            fputs(tmp,fp);
            fputs(split,fp);
            fputs(student_list[i].s_name,fp);
            fputs(split,fp);
            fputs(student_list[i].s_sex,fp);
            fputs(split,fp);
            fputs(student_list[i].s_dorm,fp);
            fputs(split,fp);
            fputs(student_list[i].s_college,fp);
            fputs("\n",fp);
        }
        fclose(fp);
        return 0;
    }
} // write student_list into the file

vector<Student> delete_student_list(vector<Student> student_list) {
    for (vector<Student>::iterator it = student_list.begin(); it != student_list.end();) {
        student_list.erase(it);
    }
    cout << student_list.size() << endl;
    return student_list;
} // delete the student_list

#include<stdio.h>

typedef struct
{
    char Code[100];
    char Title[100];
    float Credit;
    float Marks;

}Subject;

typedef struct 
{
    int Semester_num;
    int Num_of_subjects;
    float sem_credit;
    char Subjects[10];

}Semester;

typedef struct 
{
    int id;
    char name[30];
    Semester semesterinfo[8];
    float cgpa;
    
}Student;

Student student[100];

void findAPlusSubjects(Student student, int semesternum)
{

    float  mark = 
    

}


int main()
{
   

   return 0;
}
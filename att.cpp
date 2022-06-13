#include<iostream>
using namespace std;


class Student{
public:

int id;
char section;
string name;
Student(int pk,char sec,string Name){
id = pk;
section = sec;
name = Name;

}
void Intro(){

cout << "name : "<< name<<endl;
cout << "ID : "<< id<<endl;
cout <<"Section : "<<section<<endl;

}




};

main()
{
   Student stu[10] = {Student(100,'A',"sima"),Student(678,'D',"roy")};
}

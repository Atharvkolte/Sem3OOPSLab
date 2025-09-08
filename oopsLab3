#include<iostream>
#include<string>
using namespace std;

class Person{
    protected:
        string name;
        int age;
    public:
        Person(){
            cout<<"Name:";
            getline(cin,name);
            cout<<"age:";
            cin>>age;
        }
};
class Academic{
    protected:
        int rollNo;
        int marks[3];
    public:
        Academic(){
            cout<<"Enter RollNo:-";
            cin>>rollNo;
            cout<<"Enter 3 subjects marks"<<endl;
            for(int i=0;i<3;i++){
                cout<<"Sub "<<i<<" marks:";
                cin>>marks[i];
            }
        }
};

class Student:public Person,public Academic{
    protected:
        int totalMarks;
        float percent;
    public:
        void calcmarks(){
            for(int i=0;i<3;i++){
                totalMarks+=marks[i];
            }
            percent=totalMarks/3;
        }
        void showdetails(){
            cout<<"-------------------------"<<endl;
            cout<<"Name:"<<name<<endl;
            cout<<"Roll no.:"<<rollNo<<endl;
            cout<<"Total Marks:"<<totalMarks<<endl;
            cout<<"Percentage:"<<percent<<"%"<<endl;
        }
};

int main(){
    Student obj;
    obj.calcmarks();
    obj.showdetails();
    return 0;
}

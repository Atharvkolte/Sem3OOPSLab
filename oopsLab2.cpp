#include<iostream>
#include<string>
using namespace std;


class Rectangle{
    private:
        int length;
        int width;
    public:
        Rectangle(){  //Default Constructor
            length=1;
            width=1;
        }
        Rectangle(int l,int w){ //parameterized constructor
            length=l;
            width=w;
        }
        int area(){
            return length*width;
        }
};
int main(){
    Rectangle r1(5,5);
    int rectArea=r1.area();
    cout<<"Rectangle Area:"<<rectArea<<endl;

    return 0;
}

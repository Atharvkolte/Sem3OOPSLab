#include<iostream>
#include<iomanip>
using namespace std;

class Time{
    private:
        int hour;
        int min;
    public:
        Time(int h=0,int m=0){
            hour=h;
            min=m;
        }
        friend istream&operator >>(istream &in,Time &t);
        friend ostream&operator <<(ostream &out,Time &t); 
};

istream&operator >>(istream &in,Time &t){
    cout<<"Enter hours:";
    in>>t.hour;
    cout<<"Enter minuted:";
    in>>t.min;
    if(t.min>=0){
        t.hour+=t.min/60;
        t.min%=60;
    }
    return in;
}

ostream&operator <<(ostream &out,Time &t){
    out<<setw(2)<<setfill('0')<<t.hour<<":"<<setw(2)<<setfill('0')<<t.min<<endl;
    return out;
} 

int main(){
    Time t1;
    cin>>t1;
    cout<<t1;
    return 0;
}

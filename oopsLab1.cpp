#include<iostream>
#include<string>
using namespace std;


class BankAccount{
    private:
        string name;
        int Acc_No;
        string type_Acc;
        int amount;
    public:
        BankAccount(string nav,int Accno,string Acctype,int amt){
            name=nav;
            Acc_No=Accno;
            type_Acc=Acctype;
            amount=amt;
        }
        void deposite(int amt){
            if(amt>=0){
                amount+=amt;
                cout<<"Total Amount Now:"<<amount<<endl;
            }
            cout<<"Total Amount Now:"<<amount<<endl;
        }
        void withdraw(int amt){
            if(amount>=amt){
                amount-=amt;
                cout<<"Amount left:"<<amount<<endl;
            }
            else cout<<"Insufficient Funds"<<endl;
        }
        void display(){
            cout<<"Name:"<<name<<endl;
            cout<<"Balance:"<<amount<<endl;
        }
};

int main(){
    BankAccount obj("Atharva",123321,"Saving",50000);
    obj.deposite(10000);
    obj.withdraw(5000);
    obj.display();
    return 0;
}
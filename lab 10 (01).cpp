#include<iostream>
using namespace std;
void attemptwithdraw(int &balance,int amount) {
    cout<<"enter amount to withdraw: "<<endl;
    cin>>amount;
    if(amount<= balance) {
        balance -=amount;
        cout<<"returning balance: "<<balance<<endl;
    }
    else {
        cout<<"----invalid balance-----"<<endl;
    }

}
int main () {
    int balance;
    int amount;
    cout<<"enter balance: "<<endl;
    cin>> balance;
    attemptwithdraw( balance,amount);
    cout<<"balance after function call: "<<balance<<endl;
    return 0;
}


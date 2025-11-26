#include<iostream>
using namespace std;
int gettotalsteps() {
    int i,steps,total=0;
    for ( i = 1; i <= 7 ; i++ ) {
        cout<<"enter number of steps "<<i<<":";
        cin>>steps;
        total+=steps;
    }
    return total;
}
int main() {
    int days=7,steps;
    float average;
    steps=gettotalsteps();
    average= steps/days;
    cout<<"total number of steps: "<<steps<<endl;
    cout<<"average steps per week: " <<average<<endl;

    return 0;
}

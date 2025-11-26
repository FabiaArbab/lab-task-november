#include<iostream>
using namespace std;
int restock(int currentstock,int addedstock) {
    return currentstock+addedstock;
}
int main() {
    int currentstock;
    cout<<"enter current stock: ";
    cin>>currentstock;

    for (int day=1; day<=7; day++) {
        int addedstock;
        cout<<"enter stock added: ";
        cin>>addedstock;
        int total = restock(currentstock,addedstock);
        cout<<"stock at the end of the "<< day <<"day"<<": "<<total<<endl;
    }
    return 0;

}
#include<iostream>
using namespace std;
int main() {
    int books;

    cout<<"Enter number of books: ";
    cin>>books;

    int grandtotal=0;
    int bookcount=1;

    while(bookcount<=books) {
        cout<<"book"<<bookcount<<endl<<"Fine"<<endl;
      int days;
        cout<<"Enter the number of days: ";
        cin>>days;

        int day=1;
        int fine=5;
        int totalfine=0;

        while(day<=days && fine<=1000) {
            cout<<"day:"<<day<<endl<<"fine:"<<fine<<endl;
            totalfine+=fine;
            fine*=2;
            day++;
        }
        cout<<"total fine: "<<bookcount<<endl<<totalfine<<endl;
        grandtotal+=grandtotal;
        bookcount++;
    }
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int ct = 0;
    int even = 0, odd = 0; 
    cout << "Enter an integer: ";
    cin >> ct;
    while(ct != 0){
        if(ct%2 == 0){
            even++;
        }else{
            odd++;
        }
        cout << "Enter an integer: ";
        cin >> ct;
    }
    cout << "#Even numbers = " << even << endl;
    cout << "#Odd numbers = "<< odd << endl;
    return 0;
}

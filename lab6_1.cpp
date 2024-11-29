#include<iostream>
using namespace std;

int main(){

    int x ; // input 
    int a = 0 ; // Even number
    int b = 0 ; // Odd number

while( x != 0){
    cout << "Enter an integer: ";
    cin >> x ;
    if(x != 0 ){
        if( x%2 == 0){
            a++ ;
        }else{
            b++ ;
        }
    }
    
        
    }
    cout << "#Even numbers = "<< a << endl;
    cout << "#Odd numbers = " << b << endl;
    return 0;
}

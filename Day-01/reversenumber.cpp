#include<iostream>
using namespace std;
int reverse(int n){
    int reverseNumber=0;
    while(n>0){
        int lastdig= n%10;
        n=n/10;
        reverseNumber=(reverseNumber*10)+lastdig;
    }
    return reverseNumber;
}
int main(){
    int number;
    cout<<"enter a number to do the number reverse"<<endl;
    cin>>number;
    int result=reverse(number);
    cout<<result<<endl;
    return 0;
}
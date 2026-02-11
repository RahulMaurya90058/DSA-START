#include<iostream>
using namespace std;
int prime(int n){

    if(n<=1) return 1;
    if(n==2) return 0;

    int temp=0;
   for(int i=2;i*i<=n;i++){
      if(n%i==0){
          temp=1;
          break;
      }
      else{
        temp=0;
      }
   }
   return 0;
}

int main(){
    int number;
    cout<<"enter a number"<<endl;
    cin>>number;
    int result= prime(number);
    if(result==0){
        cout<<"It is a prime number"<<endl;
    }
    else{
        cout<<"It is not a prime number"<<endl;
    }
    return 0;
}
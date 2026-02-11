#include <iostream>
using namespace std;
int factorial(int n){
    int fact=1;
   for(int i=1;i<=n;i++){
    fact=fact*i;
}
return fact;
}
int main(){
 int number;
 cout<<"enter a number to calculate their factorial"<<endl;
 cin>>number;
 int result=factorial(number);
 cout<<"factorial of the number is "<<result<<endl;
 return 0;
}
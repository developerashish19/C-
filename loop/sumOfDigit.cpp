#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n";
    cin>>n;
    int sum=0;
    int ld=0;
    while(n!=0){
        ld=n%10;
        sum=sum+ld;
        n/=10;
    }
    cout<<sum;
}
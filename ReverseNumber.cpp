#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    cout<<"Reversed Number is : ";
    while(n > 0){
        cout<<n%10<<" ";
        n /= 10;
    }
    return 0;
}
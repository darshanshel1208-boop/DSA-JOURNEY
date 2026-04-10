/*
012345
01234
0123
012
01
0

*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=0;i<=n;i++){
        for(int j=0;j<n-i+1;j++){
            cout<<"i";
        }
            cout<<endl;
    }
}

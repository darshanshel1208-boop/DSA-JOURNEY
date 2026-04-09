/*
*
**
***
****
*/
#include<iostream>
using namespace std;
void print(int t){
    for(int i=0;i<=t;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    print(t);

}
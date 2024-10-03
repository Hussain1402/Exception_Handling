#include<iostream>
using namespace std;
int main(){
    float n1,n2,ans;
    cout<<"Enter the numbers 1 and 2:";
    cin>>n1>>n2;
    try{
        if(n2==0){
            throw n2;
        }
        else{
            ans=n1/n2;
            cout<<"Answer is:"<<ans<<endl;
        }
    }
    catch(float num){
        cout<<"\nERROR: Division by "<<num<<endl;
    }
}

/*
Enter the numbers 1 and 2:9
0

ERROR: Division by 0



Enter the numbers 1 and 2:4
2
Answer is:2
*/

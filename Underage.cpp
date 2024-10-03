#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter age:";
    cin>>age;
    try{
        if(age<18){
            throw age;
        }
        else{
            cout<<"Age is:"<<age<<"\nAPPROVED"<<endl;
        }
    }
    catch(int a){
        cout<<"\nERROR: UNDERAGE!("<<a<<")"<<endl;
    }
}

/*
Enter age:12

ERROR: UNDERAGE!(12)


Enter age:24
Age is:24
APPROVED
*/

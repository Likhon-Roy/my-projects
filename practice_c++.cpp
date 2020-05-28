#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    try{
        if(b==0)
            throw"sjdfkljsdkf skdfjlksdj";
        int c=a/b;
        cout<<c<<endl;
    }
    catch(const char* s){
            cout<<"Math error"<<endl<<endl;
        }
}

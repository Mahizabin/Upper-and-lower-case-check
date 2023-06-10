#include<iostream>
using namespace std;

int main(){
    
    char s;
    cout<<"Enter the character: "<<endl;
    cin>>s;
    if(s>='a'&&s<='z'){
        cout<<"The character entered is a lower case "<<endl;
    }
    else if(s>='A'&&s<='Z'){
        cout<<"The character entered is a upper case "<<endl;
    }
    else{
        cout<<"The character entered is not an alphabet "<<endl;
    }
    return 0;
    
}

#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "Enter string:";
    cin >> str;
    int x=1,a=0, b=0;
    for(int i=0;i<str.length();i++){
        if (str[i]=='a'){
            a++;
        }
        else if (str[i]=='b'){
            b++;
        }
        else{
            x=0;
            break;
        }
    }
    if(a%2==0 && b%2==0 && x!=0){
        cout << "String accepted";
    }
    else if(x==0)
    {
        cout<<"Invalid Token";
    }
    else{
    
        cout << "String not accepted";
    }
    

    return 0;
}

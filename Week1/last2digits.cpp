#include <iostream>
using namespace std;

int main()
{
  string s;
  cout<<"Enter String: ";
  cin>>s;
  int flag=1;
  //Here considering only a and b's as input
  for(int i=0;i<s.length();i++)
  {
      if(s[i]== 'a' || s[i]=='b')
      {
        flag=1; 
      }
      else
      {
          flag=0;
          break;
      }
      
  }
  if(s[s.length()-2]==s[s.length()-1] && flag==1)
  {
    cout<<"String Accepted";
  }
  else if(flag==0)
  {
      cout<<"Invalid Token";
  }
  else
  {
      cout<<"String Rejected";
  }
    return 0;
}

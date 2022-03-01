#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
    string s1="fam",s2="ily";
    cout<<endl;
    //concatinating strings
    //m1
    cout<<s1+s2<<endl;
    //m2
    s1.append(s2);
    cout<<s1<<endl<<endl;
    
    //accessing a character
    
    cout<<s1[1]<<endl<<endl;;

    //clear function
    string str="loreas epsum";
    str.clear();
    cout<<str;

    //comparing strings
    string str1="abc",str2="xyz";
    cout<<str2.compare(str1)<<endl<<endl;

    //FIND func
      string s11="nincompoop";
      cout<<s11.find("com")<<endl<<endl;
      
      //ERASE FUNC
      s11.erase(3,3);//FIRST INDEX THEN NO OF ELEMENTS TO BE ERASED
      cout<<s11<<endl<<endl;
      
      //insert func

      cout<<s11.insert(3,"com") <<endl<<endl;;
      
      //length
      cout<<s11.length()<<endl;

      //substring
      cout<<s11.substr(6,4)<<endl;
      
      //string to integer
      string s21="786";
      int x=stoi(s21);
      cout<<x+2<<endl;

      //int to string
      cout<<to_string(x)+"2"<<endl;

      //sorting string
      string S="casfsaasassa";
      sort(S.begin(), S.end());
      cout<<S<<endl;
    return 0;
}
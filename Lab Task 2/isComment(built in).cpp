/*Write a program to determine whether the Given Input is Comment line(s) or Not.
e.g.
//single line comment

/* multiple line   
Comment */

//----------------
#include<bits/stdc++.h>
using namespace std;
    char x[]={};
    int Xlength=0;


bool isComment(string s) {
   for (int i = 0; i < s.length(); i++){
      if(s[i] == '/' && s[i+1] == '/'  ){
        return true;
      }
      else if(s[i] == '/' && s[i+1] == '*'){
            //cout<<"fdsf"<<endl;
            //cout<<i<<endl;;
        for(int j=i+2;j<s.length()-1;j++){
                //cout<<j<<s[j]<<endl;
                //cout<<j+1<<s[j+1]<<endl;
            if(s[j] == '*' && s[j+1] == '/' ){
              // cout<<"dfdsfdfsdf";

            return true;
            }
        }
      }
   }

   return false;
}
int main() {

   string s;

   cout << "String: ";
   cin >> s;
   if (isComment(s))
      cout << "Comment" << endl;
   else
      cout << "not Comment";
}


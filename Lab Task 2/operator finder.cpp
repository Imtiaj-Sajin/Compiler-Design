/*Write a program to determine whether the Given Input is Operators or Not.
(Arithmetic Operators +, -, *, /, %, =)
e.g., 2+3=5
Ans: 
operator1:  + 
operator2:  = 
*/

#include<bits/stdc++.h>
using namespace std;
    char x[]={};
    int Xlength=0;


void findOperators(string s) {
    char c;
   for (int i = 0; i < s.length(); i++){
     c=s[i];
      if(c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '='|| c == '%'  ){
        x[Xlength]=c;
        Xlength++;

      }
   }
}
int main() {

   string s;

   cout << "String: ";
   cin >> s;
   findOperators(s);
   for(int i=0;i<Xlength;i++)
   {
       cout<<"Operator"<<i<<" = "<<x[i]<<endl;
   }
}


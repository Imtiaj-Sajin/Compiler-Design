/*Problem 1: Write a program to determine whether the Given Input is Numeric Constant or Not.
e.g. (if 100, 991, 1810 etc are given as an input , then the program says “numeric constant”,
      or if we take input as “ABCD”, “A1B2”, then the program will say that this is “not numeric”).*/

#include<bits/stdc++.h>
using namespace std;


bool isNumeric(string s) {
   for (int i = 0; i < s.length(); i++)
      if (s[i] != '0'&&s[i] != '1'&&s[i] != '2'&&s[i] != '3'&&s[i] != '4'&&s[i] != '5'&&s[i] != '6'&&s[i] != '7'&&s[i] != '8'&&s[i] != '9')
        {
           return false;
        }
      return true;
}
int main() {

   string s;

   cout << "String: ";
   cin >> s;
   if (isNumeric(s))
      cout << "numeric constant" << endl;
   else
      cout << "not numeric";
}

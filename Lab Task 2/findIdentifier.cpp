/*identifier*/
//---------
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
    char x[]={};
    int Xlength=0;
    string r;


bool findIdentifier(string s) {
    char c;
    int d;
    bool flag=0;

   for (int i = 0; i < s.length(); i++){
     c=s[i];
     d=int(s[i]);
     if(i==0){
            if((d>=65 && d<=90)||(d>=97 && d<=122)||d==95||d==35){
                flag=1;

            }
            else{
                flag=0;
                cout<<"not valid\n";
                cout<<c<<" can't be in the first";

                break;
            }
     }
     if(i>0){
            if((d>=65 && d<=90)||(d>=97 && d<=122)||(d>=48 && d<=57)||d==95){
                flag=1;
        }
            else{
                flag=0;
                cout<<"not valid\n";
                cout<<c<<" can't use in identifier";
            }
        }

     }

   return flag;
}
int main() {

   string s;

   cout << "String: ";
   cin >> s;
   if(findIdentifier(s)){
       cout<<"valid";
   }
   

}

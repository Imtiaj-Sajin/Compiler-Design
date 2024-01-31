/*Lab Task-1a:
1.	Find the average value of the elements of an array.
2.	Find the minimum and maximum value of the elements of an array.
3.	Take two strings as your first and last name, then concatenate the two strings together so that you can find your full name:
e.g. First name = “XX” and Lastname = “YY”
output: full name = “XX YY”
4.	Write a program to calculate the factorial of a given numbers (using loop):

*/


#include<iostream>
#include<stack>
using namespace std;

float avg(float t, int n){
    return t/n;
}

int factorial(int x){
      if(x>1)
        return x*factorial(x-1);
      else
        return 1;
    }

int main(){
    int n;

    cout<<"Size of array:";
    cin>>n;
    float arr[n];
    cout<<"Enter the Elements:";
    for(int i=0;i<n;i++)
        cin>>arr[i];

    float sum=0;
    for(int i=0;i<n;i++)
        sum=sum+arr[i];
    cout<<"Avarage:"<<avg(sum,n)<<endl;
    cout<<"-------------------------------"<<endl;

    float min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i])
            min=arr[i];
    }
    cout<<"Min:"<<min<<endl;
    cout<<"-------------------------------"<<endl;

    float max=arr[0];
    for(int i=0;i<n;i++){
        if(max<arr[i])
            max=arr[i];
    }
    cout<<"Max:"<<max<<endl;
    cout<<"-------------------------------"<<endl;

    cout<<"Factorial for what?:"<<endl;
    cin>>n;
    cout<<"Factorial of "<<n<<":"<<factorial(n)<<endl;

    cout<<"-------------------------------"<<endl<<endl;
    cout<<"String Problem"<<endl;
    char first[]={'X','X'};
    char last[]={'Y','Y'};
    int f1 = sizeof(first)/sizeof(first[0]);
    int l1 = sizeof(last)/sizeof(last[0]);

    for(int i=0;i<f1;i++)
        cout<<first[i];
    cout<<" ";
    for(int i=0;i<l1;i++)
        cout<<last[i];

cout<<endl;
    cout<<"-------------------------------"<<endl<<endl;
        cout<<"Using Stack"<<endl;

    sum=0;
    stack<float> st;
        st.push(1);
        st.push(2);
        st.push(6);
        st.push(4);
        st.push(5);
    n=st.size();


    while (!st.empty()) {
        sum = sum + st.top();
        st.pop();
    }

    cout<<"Avarage Using Stack:"<<avg(sum,n)<<endl;





}

#include<iostream> 
using namespace std; 
template<class T> 
class big{ 
 T a,b; 
 public: 
  big(T x, T y){ 
   a=x; 
   b=y; 
  } 
  void display(){ 
   if(a>b) 
    cout<<"the maximum value is: "<<a<<endl; 
   else if(a<b) 
    cout<<"The maximum value is: "<<b<<endl; 
   else 
    cout<<"Both are equal"<<endl; 
   } 
   ~big(){ 
    cout<<"Destructor called."<<endl; 
   } 
}; 
int main() 
{ 
 big<int> m1(5,10); 
big<string> m2("Planet","Earth"); 
m1.display(); 
m2.display(); 
return 0; 
}

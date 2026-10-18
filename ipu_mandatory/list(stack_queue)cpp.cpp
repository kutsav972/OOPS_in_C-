#include<iostream> 
using namespace std;
class list{ 
protected: 
int arr[10]; 
int last = 0; 
public: 
list():last(-1){\cout<<"list class has been constructed !"<<endl;} 
virtual void store(int ele) = 0; 
virtual int retrieve() = 0; 
virtual  ~list()
{cout<<"List class has been destructed!"<<endl;} 
}; 
class Stack : public list{ 
public: 
void store(int ele){ 
if(last>=9){ 
std::cout<<"Stack overflow :"<<endl; 
return; 
} 
arr[++last]=ele; 
} 
int retrieve(){ 
if(last==-1){ 
cout<<"Stack underflow :("<<endl; 
return -1;  
} 
return arr[last]; 
} 
}; 
class Queue : public list{ 
public: 
void store(int ele){ 
if(last>=9){ 
cout<<"Queue overflow :<<endl; 
return; 
} 
arr[++last]=ele; 
} 
int retrieve(){ 
if(last==-1){ 
cout<<"Queue underflow :<<endl; 
return -1; 
} 
int front=arr[0]; 
for(int i=1; i<=last; i++){ 
arr[i-1]=arr[i]; 
} 
last--; 
return front; 
} 
}; 
int main(){ 
Stack stack; 
stack.store(20); 
stack.store(45); 
stack.store(7); 
std::cout<<"Stack top: "<<stack.retrieve()<<std::endl; 
Queue queue; 
queue.store(20); 
queue.store(45); 
queue.store(7); 
cout<<"Queue front: "<<queue.retrieve()<<endl; 
cout<<"Queue front: "<<queue.retrieve()<<endl; 
cout<<"Queue front: "<<queue.retrieve()<<endl; 
cout<<"Queue after empty: "<<queue.retrieve()<<endl; 
return 0; 
} 


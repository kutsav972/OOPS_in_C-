#include<iostream> 
class list{ 
protected: 
int arr[10]; 
int last = 0; 
public: 
list():last(-1){std::cout<<"list class has been constructed !"<<std::endl;} 
virtual void store(int ele) = 0; 
virtual int retrieve() = 0; 
virtual  ~list() {std::cout<<"List class has been destructed!"<<std::endl;} 
}; 
class Stack : public list{ 
public: 
void store(int ele){ 
if(last>=9){ 
std::cout<<"Stack overflow :("<<std::endl; 
return; 
} 
arr[++last]=ele; 
} 
int retrieve(){ 
if(last==-1){ 
std::cout<<"Stack underflow :("<<std::endl; 
return -1;  
} 
return arr[last]; 
} 
}; 
class Queue : public list{ 
// Arr[0] is the front, and last is the rear.  
public: 
void store(int ele){ 
if(last>=9){ 
std::cout<<"Queue overflow :("<<std::endl; 
return; 
} 
arr[++last]=ele; 
} 
int retrieve(){ 
if(last==-1){ 
std::cout<<"Queue underflow :("<<std::endl; 
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
std::cout<<"Queue front: "<<queue.retrieve()<<std::endl; 
std::cout<<"Queue front: "<<queue.retrieve()<<std::endl; 
std::cout<<"Queue front: "<<queue.retrieve()<<std::endl; 
std::cout<<"Queue after empty: "<<queue.retrieve()<<std::endl; 
return 0; 
} 


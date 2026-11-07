#include<iostream> 
#include<string> 
#include<fstream> 
using namespace std; 
class student{ 
    string name; 
    int age; 
    string gender; 
    float height; 
    float weight; 
    public: 
    void readdata(){ 
        cout<<"Enter name: "<<endl; 
        cin>>name; 
        cout<<"Enter age: "<<endl; 
        cin>>age; 
        cout<<"Enter gender: "<<endl; 
        cin>>gender; 
        cout<<"Enter height: "<<endl; 
        cin>>height; 
        cout<<"Enter weight: "<<endl; 
        cin>>weight; 
    } 
    void show(){ 
        cout<<"Name: "<<name<<endl; 
        cout<<"Age: "<<age<<endl; 
cout<<"Gender: "<<endl; 
cout<<"Height: "<<endl; 
cout<<"Weight: "<<endl; 
} 
}; 
int main(){ 
student s; 
s.readdata(); 
ofstream fout("student.dat", ios::binary); 
fout.write((char*)&s, sizeof(s)); 
fout.close(); 
ifstream fin("student.dat", ios::binary); 
student t; 
fin.read((char*)&t, sizeof(t)); 
t.show(); 
fin.close(); 
return 0; 
}

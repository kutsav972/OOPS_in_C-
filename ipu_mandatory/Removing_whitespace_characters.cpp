#include<iostream> 
#include<fstream> 
#include<cctype> 
using namespace std; 
int main(){ 
ifstream fin("apple.txt"); 
ofstream fout("output.txt"); 
if(!fin){ 
} 
cout<<"Error!"<<endl; 
return 1; 
if(!fout){ 
cout<<"Error!"<<endl; 
return 1; 
} 
char letter; 
while(fin.get(letter)){ 
if(!isspace((unsigned char)letter)){ 
fout.put(letter); 
} 
} 
cout<<"Whitespace chracters removed!"<<endl; 
fin.close(); 
fout.close(); 
return 0; 
}

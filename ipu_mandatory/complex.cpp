#include<iostream> 
class Complex{ 
float real; 
float imag; 
public: 
Complex(){ 
real = 0; 
imag = 0; 
} 
Complex (float r, float i){ 
Real = r; 
imag = I; 
} 
Complex add(Complex c){ 
Complex  temp; 
temp.real = real + c.real; 
temp.imag = imag + c.imag; 
retrun temp; 
} 
void show(){ 
std::cout<<real<<” i “<<imag<<std::endl; 
} 
}; 
int main(){ 
Complex c1; 
c1.show(); 
Complex c2.(3,4); 
Complex c3(2,7); 
Complex c4= c2.add(c3) 
c4.show(); 
return 0; 
}

#include<iostream>
using namespace std;

double roundOff(double var)
{
    double value = int(var * 100 + .5);
    return (double)value / 100;
}

double pow(double x,double y){
    double result = 1;
    for (double i = 0; i < y; i++)
    {
        result = result * x;
    }
    return result;
}


long factorial(long n){
    long fResult = 1;
    for (long fLoopVar = 1; fLoopVar <= n; fLoopVar++)
    {
        fResult = fResult*fLoopVar;
    }
    return fResult;
}


double sine(double p){
        double sin = 0;
    for (int a=1, b=1 ; a < 16; a+=2, b++)
    {
        sin = sin + pow(-1,b+1)*(pow(p,a)/factorial(a));
    }
    return sin;
}


double cosine(double q){
        double cos = 0;
    for (int a=0, b=1 ; a < 16; a+=2, b++)
    {
        cos = cos + pow(-1,b+1)*(pow(q,a)/factorial(a));
    }
    return cos;
}


double tangent(double r){
        double tan = sine(r)/cosine(r);
        return tan;
}


double cotangent(double s){
        double cot = 1/tangent(s);
        return cot;
}

double secant(double t){
        double sec = 1/cosine(t);
        return sec;
}

double cosecant(double u){
        double cosec = 1/sine(u);
        return cosec;
}


int main(){
cout<<"\n"<<"                          -->CALCULATOR<--                           \n";

int op;
double a;
double b;
cout<<"1) addition\n";
cout<<"2) subtraction\n";
cout<<"3) multiplication\n";
cout<<"4) division\n";
cout<<"5) exponentiation\n";
cout<<"6) sin()\n";
cout<<"7) cos()\n";
cout<<"8) tan()\n";
cout<<"9) cot()\n";
cout<<"10) sec()\n";
cout<<"11) cosec()\n";
cout<<"chose the operation u want to proceed with (type the number and press enter): ";
cin>>op;
cout<<endl;
switch (op)
{
    case 1:
        cout<<"please enter two numbers(one at time)\n";
        cout<<"enter the value of first number: ";
        cin>>a;
        cout<<"\nenter the value of second number: ";
        cin>>b;
        cout<<"\nThe sum of these two numbers is: "<<a+b<<endl;
    break;
    case 2:
        cout<<"please enter two numbers(one at time)\n";
        cout<<"enter the value of first number: ";
        cin>>a;
        cout<<"\nenter the value of second number: ";
        cin>>b;
        cout<<"\nThe difference of these two numbers is: "<<a-b<<endl;
    break;
    case 3:
        cout<<"please enter two numbers(one at time)\n";
        cout<<"enter the value of first number: ";
        cin>>a;
        cout<<"\nenter the value of second number: ";
        cin>>b;
        cout<<"\nThe product of these two numbers is: "<<a*b<<endl;
    break;
    case 4:
        cout<<"please enter two numbers(one at time)\n";
        cout<<"enter the value of first number: ";
        cin>>a;
        cout<<"\nenter the value of second number: ";
        cin>>b;
        cout<<"\nThe division of these two numbers is: "<<a/b<<endl;
    break;
    case 5:
        cout<<"This operation is going to give you answer for x^y\n";
        cout<<"enter the value of first number(x): ";
        cin>>a;
        cout<<"\nenter the value of second number(y): ";
        cin>>b;
        cout<<"\nThe exponential of x to the power of y is: "<<roundOff(pow(a,b))<<endl;
    break;
    case 6:
        cout<<"enter the value of a number(in radians): ";
        cin>>a;
        cout<<"\nThe sin of this number is: "<<roundOff(sine(a));
    break;
    case 7:
        cout<<"enter the value of a number(in radians): ";
        cin>>a;
        cout<<"\nThe cos of this number is: "<<roundOff(cosine(a));
    break;
    case 8:
        cout<<"enter the value of a number(in radians): ";
        cin>>a;
        cout<<"\nThe tan of this number is: "<<roundOff(tangent(a));
    break;
    case 9:
        cout<<"enter the value of a number(in radians): ";
        cin>>a;
        cout<<"\nThe cot of this number is: "<<roundOff(cotangent(a));
    break;
    case 10:
        cout<<"enter the value of a number(in radians): ";
        cin>>a;
        cout<<"\nThe sec of this number is: "<<roundOff(secant(a));
    break;
    case 11:
        cout<<"enter the value of a number(in radians): ";
        cin>>a;
        cout<<"\nThe cosec of this number is: "<<roundOff(cosecant(a));
    break;
default:
    cout<<"There is no operation related to that number\n";
    cout<<"Please try again";
    return main();
    break;
}
return 0;
}

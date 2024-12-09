#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
clrscr();
double num1,num2,result;
char operation;
cout << "Enter First Number : ";
cin >> num1;
cout<<"Enter Second Number : ";
cin >> num2;
cout << "Select an Opertaion (+,-,*,/) : ";
cin >> operation;
switch(operation)
{
case '+': result=num1+num2;
	  cout << "Result:" << num1 <<"+" <<num2 << "="<< result;
	  break;
case '-': result=num1-num2;
	  cout << "Result:" << num1 <<"-" <<num2 << "="<< result;
	  break;
case '*': result=num1*num2;
	  cout << "Result:" << num1 <<"*" <<num2 << "="<< result;
	  break;
case '/': if(num2!=0){
	  result=num1/num2;
	  cout << "Result:" << num1 <<"/" <<num2 << "="<< result;
	  }
	  else{
	  cout <<"Error Division by zero not allowed" << endl;
	  }
	  break;
default : cout <<"Invalid Operator Selected!"<<endl;
}
}
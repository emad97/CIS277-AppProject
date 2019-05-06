//Name: Imad Abdulelah
// The calculator App C++ code.
#include <iostream>
#include <ctype.h>
using namespace std;
//creating the functions prototypes
double add (double x, double y);   //addition function prototype
double sub (double x, double y);   //subtraction function prototype
double multi(double x, double y);  // mutiplication function prototype
double divid(double x, double y);  //division function prototype

int main(){                   // the main function
  double x,y, result;           // declaring the variables
  char selection, again;
  again = 'y';
  again = toupper(again);
cout<<"             << Welcome to the simple calculator >>\n\n";
  while (again =='Y'){

cout<<"Enter the first number :";    //asking for first user input
cin>>x;                             //getting the value of x
cout<<"Enter the second number:";   //asking for second user input
cin>>y;                             //getting the value of y
cout << "\nEnter a letter for the function\n\n A = Addition\n S = Subtraction\n M = Multiplication\n D = Division\n";
  cin>> selection;
selection = toupper(selection);

  while (selection != 'A'&& selection != 'M'&& selection !='S'&& selection !='D')
{ 
    cout<<"Please insert a valid selection: ";
    cin>> selection;
      selection = toupper(selection);
}

  if (selection == 'A'){
result = add(x,y);           //sending the values to the function
cout<<"The addition result is:"<<result<<endl; //displaying the results 
}
  if (selection == 'S'){
result = sub(x,y);           //sending the values to the function
cout<<"The subtraction result is:"<<result<<endl; //displaying the results
}
  if (selection == 'M'){
result = multi(x,y);           //sending the values to the function
cout<<"The Multiplication result is:"<<result<<endl; //displaying the results
}
  if (selection == 'D'){
result = divid(x,y);           //sending the values to the function
cout<<"The Division result is:"<<result<<endl; //displaying the results
}
cout<<"give it another try? enter(y)\nor press any key to exit ";
cin>>again;
}
cout<<"Thank you for using the simple calculator App";
return 0;
}

//defining the functions

double add (double x, double y){    //addition function
  return x+y;}

double sub (double x, double y){    //subtraction function
  return x-y;}

double multi (double x, double y){  //multiplication function
  return x*y;}

double divid (double x, double y){  //division function
  return x/y;}

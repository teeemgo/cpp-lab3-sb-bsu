#include <iostream> 
using namespace std; 
int main()

{
int number = 0;
cout << "Enter a number from 1 to 5 : "; 
cin >> number; //initialize number
switch(number) 
/* contains expression we check. Can be an integer or character */
{ // starting switch code block
/* when matched with case, the statements below are executed until the end of switch block or until break statement is met */
case 1:
cout << "one";
break;
case 2:
cout << "two"; 
break;
case 3:
cout << "three"; 
break;
case 4:
cout << "four"; 
break;
case 5:
cout << "five"; 
break;
/* default statements are executed when no other conditions are met */
default :
cout << "The number is not within 1 to 5 range";
}
return 0;
}

#include<iostream> 
#include<limits>
using namespace std; 

int main()
{
int k, i = 1, sum_k = 0, number;
cout << " Enter the amount of integers to sum = "; cin >> k;
if(k==0)
{
    cout<<"0";
}
else{
do {
cout << "Enter integer nr. " << i << ": "; 
cin >> number;
while(1)
{
    if(cin.fail())
    {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout<<"You have entered wrong input"<<endl;
        cin>>number;
    }
    if(!cin.fail())
    break;
}
sum_k += number; i++;
} while (i <= k);
cout << " The total sum of " << k << " integers is: "  << sum_k;
}
return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
int main(){
	
	cout<<"\n\t ----------------------------------------------\n";
	cout<<"\t           scientific calculator                \n";
	cout<<"\n\t ---------------------------------------------\n";
	
	cout<<"\t1:Addition\t\t"<<" 8:sin"<<endl;
	cout<<"\t2:Subtraction\t\t"<<" 9:cos"<<endl;
	cout<<"\t3:Multiplication\t"<<" 10:tan"<<endl;
	cout<<"\t4:Division\t\t"<<" 11:inverse of sin"<<endl;
	cout<<"\t5:Exponent\t\t"<<" 12:inverse of cos"<<endl;
	cout<<"\t6:Square\t\t"<<" 13:inverse of tan"<<endl;
	cout<<"\t7:log\t\t\t"<<" 14:exit"<<endl;
	
	float x,y;
	float PI=3.1459265;
	int choice;
	
	do{
		cout<<"\n\tEnter the function that you want to perfrom : ";
		cin>>choice;
		switch(choice){
		
			case 1:
				cout<<"\nEnter  the 1st number : ";
				cin>>x;
				cout<<"\nEnter the 2nd number : ";
				cin>>y;
				cout<<"\nResult = "<<x+y<<endl;
				break;
			case 2:
				cout<<"\nEnter the 1st number : ";
				cin>>x;
				cout<<"\nEnter the 2nd number : ";
				cin>>y;
				cout<<"\nResult = "<<x-y<<endl;
				break;
			case 3:
					cout<<"\nEnter the 1st number : ";
				cin>>x;
				cout<<"\nEnter the 2nd number : ";
				cin>>y;
				cout<<"\nResult = "<<x*y<<endl;
				break;
			case 4:
					cout<<"\nEnter the t 1st number : ";
				cin>>x;
				cout<<"\nEnter the 2nd number : ";
				cin>>y;
				cout<<"\nResult = "<<x/y<<endl;
				break;
			case 5:
				cout<<"\nEnter the number : ";
				cin>>x;
				cout<<"\nEnter the exponent : ";
				cin>>y;
				cout<<"\nResult = "<<pow(x,y)<<endl;
				break;
			case 6:	
				cout<<"\nEnter the number : ";
				cin>>x;
				cout<<"\nResult = "<<x*x<<endl;
				break;
			case 7:
    			cout<<"\nEnter The Number : ";
    			cin>>x;
    			if(x <= 0) {
        			cout << "\nLogarithm is Undefined for Zero or Negative Numbers.\n";
    			} 
				else {
       				 cout<<"\nResult = "<<log10(x)<<endl;
    				}
    			break;
			case 8:	
				cout<<"\nEnter the number : ";
				cin>>x;
				cout<<"\nResult = "<<sin(x)<<endl;
				break;
			case 9:
				cout<<"\nEnter the number : ";
				cin>>x;
				cout<<"\nResult = "<<cos(x)<<endl;
				break;
			case 10:
				cout<<"\nEnter the number : ";
				cin>>x;
				cout<<"\nResult = "<<tan(x)<<endl;
				break;
			case 11:
				cout<<"\nEnter the number : ";
				cin>>x;
				cout<<"\nResult = "<<asin(x)*180.9/PI<<endl;
				break;
			case 12:
				cout<<"\nEnter the number : ";
				cin>>x;
				cout<<"\nResult = "<<acos(x)*180.9/PI<<endl;
				break;
			case 13:
				cout<<"\nEnter the number : ";
				cin>>x;
				cout<<"\nResult = "<<atan(x)*180.9/PI<<endl;
				break;
			case 14:
				break;
			default:
			cout<<"\n\t\tError! Please Select Correct Option.\n";
			break;	
		}
	}while(choice != 14 );
		
	return 0;
}

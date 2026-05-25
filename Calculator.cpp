#include<iostream>
#include<cmath>
//#include<math.h>
using namespace std;

double toRadians(double degrees){
    const double PI = 3.14159265359;
	return degrees * PI / 180;
	}


int main(){
	
	cout<<"\n\t ----------------------------------------------\n";
	cout<<"\t |        scientific calculator               |";
	cout<<"\n\t ---------------------------------------------\n";
	
	cout<<"\t|1  : Addition\t\t"<<" 10 : log             |"<<endl;
	cout<<"\t|2  : Subtraction\t"<<" 11 : sin             |"<<endl;
	cout<<"\t|3  : Multiplication\t"<<" 12 : cos             |"<<endl;
	cout<<"\t|4  : Division\t\t"<<" 13 : tan             |"<<endl;
	cout<<"\t|5  : Exponent\t\t"<<" 14 : inverse of sin  |"<<endl;
	cout<<"\t|6  : Square\t\t"<<" 15 : inverse of cos  |"<<endl;
	cout<<"\t|7  : Cube\t\t"<<" 16 : inverse of tan  |"<<endl;
	cout<<"\t|8  : Modulus\t\t"<<" 17 : Log with base   |"<<endl;
	cout<<"\t|9  : Square Root\t"<<" 18 : Exit            |"<<endl;
	cout<<"\t-----------------------------------------------"<<endl;
	
	float x,y;
	double Result;
	int choice;
	const double PI = 3.14159265359;
	do{
		cout<<"\n\tSelect the function : ";
		cin>>choice;
		switch(choice){
		
			case 1:
				cout<<"\n\tEnter  the 1st number : ";
				cin>>x;
				cout<<"\n\tEnter the 2nd number : ";
				cin>>y;
				Result = x+y;
				cout<<"\n\tResult = "<<Result<<endl;
				break;
			case 2:
				cout<<"\n\tEnter the 1st number : ";
				cin>>x;
				cout<<"\n\tEnter the 2nd number : ";
				cin>>y;
				Result = x-y;
				cout<<"\n\tResult = "<<Result<<endl;
				break;
			case 3:
					cout<<"\n\tEnter the 1st number : ";
				cin>>x;
				cout<<"\n\tEnter the 2nd number : ";
				cin>>y;
				Result = x*y;
				cout<<"\n\tResult = "<<Result<<endl;
				break;
			case 4:
					cout<<"\n\tEnter the 1st number : ";
				cin>>x;
				cout<<"\n\tEnter the 2nd number : ";
				cin>>y;
				if(y == 0) {
        			cout << "\n\t In Division Denominator Zero is Undefined.";
    			} 
    			else{
				Result = x/y;
				cout<<"\n\tResult = "<<Result<<endl;
				}
				break;
			case 5:
				cout<<"\n\tEnter the number : ";
				cin>>x;
				cout<<"\n\tEnter the exponent : ";
				cin>>y;
				Result = pow(x,y);
				cout<<"\n\tResult = "<<Result<<endl;
				break;
			case 6:	
				cout<<"\n\tEnter the number : ";
				cin>>x;
				Result = x*x;
				cout<<"\n\tResult = "<<Result<<endl;
				break;
			case 7:
				cout<<"\n\tEnter the number : ";
				cin>>x;
				Result = x*x*x;
				cout<<"\n\tResult = "<<Result<<endl;
				break;
				case 8:
    			int a , b;
    			cout<<"\n\tEnter two integers : ";
    			cin>>a>>b;
    			if(b != 0) {
    			Result = (a % b);
        		cout<<"\n\tResult = "<<Result<<endl;
    			} 
				else{
        		cout<<"\n\tDivision by zero is undefined.\n";
    			}
    			break;
			case 9:
    			cout<< "\n\tEnter the number: ";
    			cin >> x;
    			if(x < 0){
        			cout<<"\nSquare root of negative numbers is undefined for real numbers.\n";
    			}
				else{
        			Result = sqrt(x);
        			cout<<"\n\tResult = " <<Result<<endl;
    			}
			    break;				
			case 10:
    			cout<<"\n\tEnter The Number : ";
    			cin>>x;
    			if(x <= 0) {
        			cout << "\nLogarithm is undefined for zero or negative numbers.\n";
    			} 
				else {
					Result = log10(x);
       				 cout<<"\n\tResult = "<<Result<<endl;
    				}
    			break;
			case 11:
    			cout<< "\n\tEnter the angle in degrees (d) or radians (r): ";
    			char mode;
    			cin>>mode;
    			cout<< "\n\tEnter the angle: ";
    			cin>>x;
    			if(mode == 'd') x = toRadians(x);
    			Result = sin(x);
    			cout<<"\n\tResult = "<<Result<<endl;
    			break;
			case 12:
    			cout<< "\n\tEnter the angle in degrees (d) or radians (r): ";
    			cin>>mode;
    			cout<<"\n\tEnter the angle: ";
    			cin>>x;
    			if(mode == 'd') x = toRadians(x);
    			Result = cos(x);
    			cout<<"\n\tResult = "<<Result<<endl;
   				break;
			case 13:
    			cout<< "\n\tEnter the angle in degrees (d) or radians (r): ";
    			cin>>mode;
    			cout<< "\n\tEnter the angle: ";
    			cin>>x;
    			if(mode == 'd') x = toRadians(x);
    			Result = tan(x);
    			cout<<"\n\tResult = "<<Result<<endl;
    			break;
			case 14:
    			cout<<"\n\tEnter the number (-1 to 1) : ";
    			cin >> x;
    			if(x < -1 || x > 1) {
        			cout<<"\nError: Input out of range for inverse sine function.\n";
   					} 			
				else{
        			Result = asin(x) * 180 / PI;
        			cout << "\n\tResult = " << Result << " degrees\n";
    			}
			    break;
			case 15:
				cout<<"\n\tEnter the number (-1 to 1) : ";
				cin>>x;
				if(x < -1 || x > 1) {
        			cout<<"\nError: Input out of range for inverse cosine function.\n";
   					}		
				else{
					Result = acos(x)*180/PI;
        			cout<<"\n\tResult = " << Result << " degrees\n";
    			}
				break;
			case 16:
				cout<<"\n\tEnter the number : ";
				cin>>x;
				Result = atan(x)*180/PI;
				cout<<"\n\tResult = "<<Result<<endl;
				break;
			case 17:
				cout<<"\n\tEnter the number: ";
    			cin>>x;
    			cout<< "\n\tEnter the base: ";
    			cin>> y;
    			if(x > 0 && y > 0 && y != 1) {
        		Result = log(x) / log(y);
        		cout<< "\n\tResult = " <<Result<<endl;
    			}
				else{
        		cout<<"\n\tInvalid input for logarithm.\n";
    			}
    			break;

			case 18:
				break;

			default:
				cout<<"\nError! Please Select Correct Option.\n";
				break;
		}
	} 
	while(choice != 18);

		
	return 0;
}

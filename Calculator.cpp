#include <iostream>


using namespace std;
	int num1, num2, total;
	int add,sub,multiply,divide;
	int ch;
	
	
int main(int argc, char** argv) {
	
	
	do{
	
	cout<<"Enter 1st Number: ";
	cin>>num1;
	cout<<"Enter 2nd Number: ";
	cin>>num2;
	cout<<"choose\n 1. Addition\n 2.Subtraction\n 3.Multiplication\n 4.Divition\n 5.Exit\n";
	cout<<"Enter: ";
	cin>>ch;
	switch(ch){
		case 1:
	total=	num1+num2;
		cout<<"The Addition is: "<<total;
		cout<<"\n";
		system("cls");
		break;

		case 2:
		total= num1-num2;
			cout<<"The Subtraction is: "<<total;
			cout<<"\n";
		
			break;
			
			case 3:
			total = num1*num2;
				cout<<"The Multiplication is: "<<total;
			cout<<"\n";
			break;
			
			case 4:
			total = num1/num2;
		cout<<"The Divition is: "<<total;
		cout<<"\n";
				break;
				
				case 5:
					
					break;
					
					default:
						cout<<" Not Found!!!"<<"\n";
			break;
	}
}	while(ch!=5);

}



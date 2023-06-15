#include<iostream>
#include<conio.h>
using namespace std;
main()
{

	
	int p_p=0, p_b=0, p_s=0, p_i=0, p_c=0 ; 
	int s_p=0, s_b=0, s_s=0, s_i=0, s_c=0 ; 
	int p=0, b=0, s=0, i=0, c=0 ; 
	int choice,q;
	
	cout<<"\n\t\t\tPurchase Items";
	cout<<"\n\n Number of Pizza : ";
	cin>>p_p;
	cout<<"\n\n Number of Burger : ";
	cin>>p_b;
	cout<<"\n\n Number of Sandwich : ";
	cin>>p_s;
	cout<<"\n\n Number of Ice-Cream : ";
	cin>>p_i;
	cout<<"\n\n Number of Cake : ";
	cin>>p_c;
	p:
	system("cls");

	cout<<"\n\t\t\tControl Panel";
	cout<<"\n\n 1. Pizza";
	cout<<"\n 2. Burger";
	cout<<"\n 3. Sandwich";
	cout<<"\n 4. Ice-Cream";
	cout<<"\n 5. Cake";
	cout<<"\n 6. Details";
	cout<<"\n 7. Exit";
	cout<<"\n\n Enter Your Choice : ";
	cin>>choice;

	switch(choice)
	{
		case 1:
			cout<<"\n\n Enter Pizza Quantity (RS 500) : ";
			cin>>q;
			if(p_p-s_p >= q)
			{
				s_p += q;
				p += q*500;
				cout<<"\n\n\n\t\t\t"<<q<<" Pizza Sold, Thank You!!!";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry only "<<p_p-s_p<<" Pizza Remaining in Resturent...";
			break;
		case 2:
			cout<<"\n\n Enter Burger Quantity (RS 120) : ";
			cin>>q;
			if(p_b-s_b >= q)
			{
				s_b += q;
				b += q*120;
				cout<<"\n\n\n\t\t\t"<<q<<" Burger Sold, Thank You!!!";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry only "<<p_b-s_b<<" Burger Remaining in Resturent...";
			break;
		case 3:
			cout<<"\n\n Enter Sandwich Quantity (RS 100) : ";
			cin>>q;
			if(p_s-s_s >= q)
			{
				s_s += q;
				s += q*100;
				cout<<"\n\n\n\t\t\t"<<q<<" Sandwich Sold, Thank You!!!";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry only "<<p_s-s_s<<" Sandwich Remaining in Resturent...";
			break;
		case 4:
			cout<<"\n\n Enter Ice-Cream Quantity (RS 75) : ";
			cin>>q;
			if(p_i-s_i >= q)
			{
				s_i += q;
				i += q*75;
				cout<<"\n\n\n\t\t\t"<<q<<" Ice-Cream Sold, Thank You!!!";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry only "<<p_i-s_i<<" Ice-Cream Remaining in Resturent...";
			break;
		case 5:
			cout<<"\n\n Enter Cake Quantity (RS 500) : ";
			cin>>q;
			if(p_c-s_c >= q)
			{
				s_c += q;
				c += q*500;
				cout<<"\n\n\n\t\t\t"<<q<<" Cake Sold, Thank You!!!";	
			}
			else
			cout<<"\n\n\n\t\t\tSorry only "<<p_c-s_c<<" Cake Remaining in Resturent...";
			break;
		case 6:
			system("cls");
			cout<<"\n\t\t\tDetails Panel";
			cout<<"\n\n\n Purchase Pizza Quantity : "<<p_p;
			cout<<"\n Sales Pizza Quantity : "<<s_p;
			cout<<"\n Remaining Pizza Quantity : "<<p_p-s_p;
			cout<<"\n Total Pizza Price in a Day : "<<p;
			cout<<"\n\n\n Purchase Burger Quantity : "<<p_b;
			cout<<"\n Sales Burger Quantity : "<<s_b;
			cout<<"\n Remaining Burger Quantity : "<<p_b-s_b;
			cout<<"\n Total Burger Price in a Day : "<<b;
			cout<<"\n\n\n Purchase Sandwich Quantity : "<<p_s;
			cout<<"\n Sales Sandwich Quantity : "<<s_s;
			cout<<"\n Remaining Sandwich Quantity : "<<p_s-s_s;
			cout<<"\n Total Sandwich Price in a Day : "<<s;
			cout<<"\n\n\n Purchase Ice-Cream Quantity : "<<p_i;
			cout<<"\n Sales Ice-Cream Quantity : "<<s_i;
			cout<<"\n Remaining Ice-Cream Quantity : "<<p_i-s_i;
			cout<<"\n Total Ice-Cream Price in a Day : "<<i;
			cout<<"\n\n\n Purchase Cake Quantity : "<<p_c;
			cout<<"\n Sales Cake Quantity : "<<s_c;
			cout<<"\n Remaining Cake Quantity : "<<p_c-s_c;
			cout<<"\n Total Cake Price in a Day : "<<c;
			cout<<"\n\n\n Total Day Price : "<<p+b+s+i+c;
			break;
		case 7:
			exit(0);

		default:
			cout<<"\n\n Invalid Value ... Please Try Again!!";				
	}
	getch();   // if we press any key it will re direct to p tag
	goto p;
} 

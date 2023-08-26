#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int returntotalbill();
string name;
class orderpizza{
	public:
	char c;
    char drinklist;
    char item;
    char vegitem;
    char nonvegitem;
    int billamount=0;
    char selectagain;
    char cheese;
    
    int returntotalbill(){
    cout<<"----------WELCOME TO PIZZA-LOVERS----------"<<endl;
    cout<<"Are you hungry ??"<<endl;
	cout<<"Try our amazing pizzas !!! If u wanna try press Y."<<endl;
    cout<<"------------------------------------------------"<<endl;
    start:
    cin>>c;
    try{
    	if(c!='y'&& c!='Y')
    	   throw(c);
	   }
	catch(...){
		cout<<"Please Enter Y or y to start the order process!!!"<<endl;
		goto start;
	}   
    cout<<"Enter your name:"<<endl;
    cin>>name;
    if(c=='y'||c=='Y')
  {
    items:
    cout<<"Please select your choice : "<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"(a)veg pizza      (b)non-veg pizza      (c)cold drinks"<<endl;
    cin>>item;
    if(item=='a'||item=='A')
    {
        vegItemlist:
        cout<<"VEG PIZZAS"<<endl;
        cout<<"1.Margerita         : 150"<<endl;
        cout<<"2.Tomato            : 100"<<endl;
        cout<<"3.Golden Corn       : 140"<<endl;
        cout<<"4.Capsicum          : 100"<<endl;
        cout<<"5.Paneer Special    : 160"<<endl;
        cout<<"6.Loaded Veg        : 140"<<endl;
        cout<<"------------------------------------------------"<<endl;
        cin>>vegitem;
        if(vegitem=='1'){
            billamount=billamount+150; 
            }
        else if(vegitem=='2'){
            billamount=billamount+100;
        }
        else if(vegitem=='3'){
            billamount=billamount+140;
        }
        else if(vegitem=='4'){
           billamount=billamount+100;
        }
        else if(vegitem=='5'){
            billamount=billamount+160;
        }
        else if(vegitem=='6'){
            billamount=billamount+140;
        }
        else {
            cout<<"You have entered the Wrong Value!"<<endl;
            cout<<"Please enter the Item Number Correctly!"<<endl;
            cout<<"------------------------------------------------"<<endl;
			goto vegItemlist;
        }
        cout<<"DO YOU WANT TO ADD SOME EXTRA CHEESE?? Y OR N"<<endl;
        cin>>cheese;
        try{
        	if(cheese!='y'&& cheese!='Y')
        		throw(cheese);
				
		}
		catch(...){
			cout<<"Extra Cheese is Not Added!!!"<<endl;
			cout<<"------------------------------------------------"<<endl;
		}
        if(cheese=='y'|| cheese=='Y'){
        	billamount=billamount+30;
		}
        cout<<"DO YOU WANT TO ADD MORE ITEMS?? Y OR N "<<endl;
        cin>>selectagain;
        if(selectagain=='y'|| selectagain=='Y')
        {
            goto items;
        }
        else{
            return billamount;
        }

    }
    else if(item=='b'||item=='B')
    {
    nonvegItemlist:
        cout<<"NON-VEG PIZZAS"<<endl;
        cout<<"1.Chicken sausage           : 160"<<endl;
        cout<<"2.Pepper Barbecue Chicken   : 180"<<endl;
        cout<<"3.Chicken Fiesta            : 250"<<endl;
        cout<<"4.Chicken Golden Delight    : 250"<<endl;
        cout<<"------------------------------------------------"<<endl;
        cin>>nonvegitem;
        if(nonvegitem=='1'){
            billamount=billamount+160; 
            }
        else if(nonvegitem=='2'){
            billamount=billamount+180;
        }
        else if(nonvegitem=='3'){
            billamount=billamount+250;
        }
        else if(nonvegitem=='4'){
            billamount=billamount+250;
        }
        else {
            cout<<"You have entered the Wrong Value!"<<endl;
            cout<<"please enter the Item Number Correctly!"<<endl;
            goto nonvegItemlist;
        }
         cout<<"DO YOU WANT TO ADD SOME EXTRA CHEESE??"<<endl;
        cin>>cheese;
        try{
        	if(cheese!='y'&& cheese!='Y')
        		throw(cheese);
				
		}
		catch(...){
			cout<<"Extra Cheese is Not Added!!!"<<endl;
			cout<<"------------------------------------------------"<<endl;
		}
        if(cheese=='y'|| cheese=='Y'){
        	billamount=billamount+30;
		}
        cout<<"DO YOU WANT TO ADD MORE ITEMS?? Y OR N "<<endl;
        cin>>selectagain;
        if(selectagain=='y'|| selectagain=='Y')
        {
            goto items;
        }
        else{
            return billamount;
        }
    }
    else if(item=='c'||item=='C')
    {
    drink:
        cout<<"COLD DRINKS"<<endl;
        cout<<"1.Pepsi           : 60"<<endl;
        cout<<"2.7Up             : 60"<<endl;
        cout<<"3.Mirinda         : 50"<<endl;
        cout<<"4.Slice           : 50"<<endl;
        cout<<"------------------------------------------------"<<endl;
        cin>>drinklist;
        if(drinklist=='1'){
            billamount=billamount+60; 
            }
        else if(drinklist=='2'){
            billamount=billamount+60;
        }
        else if(drinklist=='3'){
            billamount=billamount+50;
        }
        else if(drinklist=='4'){
            billamount=billamount+50;
        }
        else {
            cout<<"You have entered the Wrong Value!"<<endl;
            cout<<"please enter the Item Number Correctly!"<<endl;
            cout<<"------------------------------------------------"<<endl;
		    goto drink;
        }
        cout<<"DO YOU WANT TO ADD MORE ITEMS?? Y OR N "<<endl;
        cin>>selectagain;
        if(selectagain=='y'||selectagain=='Y')
        {
            goto items;
        }
        else{
            return billamount;
        }
    }
    else{
    cout<<"You've Entered Wrong Value!!!"<<endl;
    cout<<"------------------------------------------------"<<endl;
    goto items;
    }
 }
else
{
    cout<<"You Have Entered Wrong Value. Press y!!!";
    cout<<"------------------------------------------------"<<endl;
}
return billamount;
}
};
class showbill:public orderpizza{
	public:
		int TB;
		void show(int bill){
		if(bill>=500){
    	cout<<"------------------------------------------------"<<endl;
    	cout<<"CONGRATULATIONSS!!!!"<<name<<endl;
    	cout<<"YOU'VE WON 20% DISCOUNT COUPON!!!!"<<endl;
    	cout<<"------------------------------------------------"<<endl;
    	int TB=bill*0.2;
    	cout<<"Your Total Bill is :"<<bill-TB<<endl;
    	cout<<"------------------------------------------------"<<endl;
        cout<<"THNAK YOU FOR ORDER!!!! "<<name<<endl;
	}
	else{
	cout<<"------------------------------------------------"<<endl;
    cout<<"Your Total Bill is :"<<bill<<endl;
    cout<<"------------------------------------------------"<<endl;
    cout<<"Thank you! "<<name<<endl;
	
	   }
		}
};
int main()
{ showbill Order1;
   int Bill=Order1.returntotalbill();
   Order1.show(Bill);
    
  return 0;
 }
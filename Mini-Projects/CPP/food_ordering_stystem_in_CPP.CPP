#include<conio.h>
#include<bits/stdc++.h>
#include<time.h>
#include<windows.h>
int total=0;
int again=0;
using namespace std;
void aboutus()
{
	system("cls");

	//cout<<"This Project Created By:   -->  SANDEEP SHARMA\n\n";
	cout<<"                             <<**>>ABOUT US<<**>>\n\n";
	cout<<"                  Feeling HUNGRY ? Call or Walk-In SnackBar Express\n";
	cout<<"         We  Are  Provide  Fast  Food   Home  Delivery  Service  (On  Demand) !!";
	cout<<"\n\n\n\n";
	cout<<"         Press Any Key To Go Further....";
	if(getch());
system("CLS");
}
int printRandoms(int lower, int upper=10000)
{
      srand(time(0));
        int num = (rand() %
           (upper - lower + 1)) + lower;
        return num;

}
 void print(int total)
{


    cout<<"\n           Your Total Order : "<<total <<"\n\nOrder Placed Successfully !!"<<"\nYour Order Will be delivered in 40 Minutes";
    cout<<"\n\nThank you For Ordering From SnackBar Fast Food Express\n\n";
}
void addrs()
{
    string name;
	long long int phone;
	string address;
	string landmark;
	cout<<"\nPlease Give Your Contact Details :";
	cout<<"\nFull Name  : ";
	//fflush(stdout);
	fflush(stdin);
	getline(cin,name);
    //fflush(stdin);
	cout<<"\nPhone      : ";
	fflush(stdin);
	cin>>phone;
	//fflush(stdin);
	cout<<"\nAddress    : ";
	fflush(stdin);
	getline(cin,address);

	cout<<"\nLandmark   : ";
	fflush(stdin);//
   getline(cin,landmark);
    int orID=printRandoms(total);
	cout<<"\n\n";
	cout<<"********Your Order Details Are*********\n";
	cout<<"           Order I'd  :  "<<orID<<endl;
	cout<<"           Name       :  "<<name<<endl;
	cout<<"           Phone      :  "<<phone<<endl;
	cout<<"           Address    :  "<<address<<endl;
	cout<<"           Landmark   :  "<<landmark<<endl;


}
/*void ccolor(int clr){

	HANDLE  hConsole;
	hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hConsole, clr);

//the above code displays colorful background. if you want colorful then you can remove the above comment but not the code, only comment//
} */
void pwellcome(){
	//ccolor(26);

	char welcome[] =" Welcome";
	char welcome2[]=" To";
	char welcome3[]=" SnackBar Fast Food Express";
	char welcome4[]=" Ordering System";
	cout<<"\n\n\n\n\n\t\t\t";
	for(int wlc=0; wlc<strlen(welcome);wlc++){

		cout<<welcome[wlc];
		Sleep(100);
	}
	//ccolor(26);
	cout<<"\n\n\t\t\t\t ";
	for(int wlc2=0; wlc2<strlen(welcome2) ;wlc2++){

		cout<<welcome2[wlc2];
		Sleep(100);
	}
	//ccolor(26);
	cout<<"\n\n\n\t\t\t ";
	for(int wlc3=0; wlc3<strlen(welcome3) ;wlc3++){
		if(welcome3[wlc3]!='D'){

			cout<<welcome3[wlc3];
		}
		else{

			cout<<welcome3[wlc3];
		}

		Sleep(100);
	}
	//ccolor(26);
	cout<<"\n\n\n\t\t\t\t ";
	for(int wlc3=0; wlc3<strlen(welcome4) ;wlc3++){
		if(welcome4[wlc3]!='A' && welcome4[wlc3]!='E'){

			cout<<welcome4[wlc3];
		}
		else{

			cout<<welcome4[wlc3];
		}
		Sleep(100);
	}
	//ccolor(26);

}
void mainmenu();
int main()
{
     pwellcome();
     aboutus();
	 mainmenu();
	 char gotostart;
	cout<<"Forget something?? Would you like to order again? Y / N:";
			cin>>gotostart;
			system("CLS");
			if(gotostart=='Y' || gotostart=='y')
			{
			  mainmenu();
			  //return 0;
			}
			else return 0;
}


void mainmenu()
{   char name[30], pizza1[]="Chicken Fazita" ,pizza2[]="Chicken Bar BQ" ,pizza3[]="Peri Peri" ,pizza4[]="Creamy Max", roll1[]="Chicken Chatni Roll", roll2[]="Chicken Mayo Roll", roll3[]="Veg Roll With Fries",bur1[]="Zinger Burger",bur2[]="Chicken Burger",bur3[]="Beef Burger";
	char sand1[]="Club Sandwich", sand2[]="Chicken Crispy Sandwich", sand3[]="Extream Veg Sandwich";
	char bir1[]="Chicken Biryani", bir2[]="Prawn Biryani", bir3[]="Beef Biryani",cok1[]="Diet Coke(500 ML)",cok2[]="Coke Zero(750 ML)", cok3[]="Coke Original(1 Lt)";
	int choice=0,pchoice,pchoice1, quantity;// time=40;
	beginning:
	//system("CLS");
	cout<<"\t\t\t--------------SnackBar Fast Food Express--------------\n\n";
	cout<<"\nWhat would you like to order?\n\n";
    cout<<"\t\t\t\t\t---------Menu---------\n\n";

	cout<<"\t\t\t\t\t  1) Pizzas\n";
	cout<<"\t\t\t\t\t  2) Burgers\n";
	cout<<"\t\t\t\t\t  3) Sandwich\n";
	cout<<"\t\t\t\t\t  4) Rolls\n";
	cout<<"\t\t\t\t\t  5) Biryani\n";
	cout<<"\t\t\t\t\t  6) Soft drink\n";
	cout<<"\t\t\t\t\t  0) Exit\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)
	 {  cout<<"\n1) "<<pizza1<<"\n";
		cout<<"2) "<<pizza2<<"\n";
		cout<<"3) "<<pizza3<<"\n";
		cout<<"4) "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Flavour would you like to have?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=5)
		{
			cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: total=total+ 250*quantity;
                break;

			case 2: total=total+ 500*quantity;
			break;

			case 3: total=total+ 900*quantity;
			break;
            }
           // system("CLS");
            printf("\n1) To Order Anything Else :\n2) To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);
		printf("\n");
		if(again==1)
		{
			printf("\n\n");
			//vegetarian();
			mainmenu();
		}
			else if( again==2)
            {//system("CLS");
			switch (pchoice)
			{
			 case 1:addrs();
			// cout<<"    -->"<<quantity<<" "<<pizza1;
			 print(total);
			 break;

			 case 2: addrs();
			// cout<<"    -->"<<quantity<<"  "<<pizza2;
			 print(total);
			 break;

			 case 3: addrs();
			 //cout<<"    -->"<<quantity<<" "<<pizza3;
			 print(total);
			 break;
			 case 4:addrs();
			// cout<<"    -->"<<quantity<<" "<<pizza4;
			 print(total);
			 break;
			 }
		}} }

    else if(choice==2)
	 {
		cout<<"\n1 "<<bur1<<" Rs.180"<<"\n";
		cout<<"2 "<<bur2<<" Rs.150"<<"\n";
		cout<<"3 "<<bur3<<" Rs.160"<<"\n";
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: total=total+ 180*quantity;
			break;

			case 2: total=total+ 150*quantity;
			break;

			case 3: total=total+ 160*quantity;
			break;

			}
			//system("CLS");
			  printf("\n1) To Order Anything Else :\n2) To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);
		printf("\n");
		if(again==1)
		{
			printf("\n\n");
			//vegetarian();
			mainmenu();
		}
			else if( again==2)
            {
			switch (pchoice1)
			{
			 case 1:addrs();
			 //cout<<"    -->"<<quantity<<" "<<bur1;
			 print(total);
			 break;
			 case 2:addrs();
			 //cout<<"    -->"<<quantity<<"  "<<bur2;
			 print(total);
			 break;
			 case 3: addrs();
			// cout<<"    -->"<<quantity<<" "<<bur3;
			 print(total);
			 break;
           }
			}} }
	else if(choice==3)
	 {
		cout<<"\n1  "<<sand1<<" Rs.240"<<"\n";
		cout<<"2  "<<sand2<<" Rs.160"<<"\n";
		cout<<"3  "<<sand3<<" Rs.100"<<"\n";
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: total=total+ 240*quantity;
			break;
            case 2: total=total+ 160*quantity;
			break;
            case 3: total=total+ 100*quantity;
			break;
			}
			//system("CLS");
			  printf("\n1) To Order Anything Else :\n2) To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);
		printf("\n");
		if(again==1)
		{
			printf("\n\n");
			//vegetarian();
			mainmenu();
		}
			else if( again==2)
            {switch (pchoice1)
			{
			 case 1:   addrs();
			// cout<<"    -->"<<quantity<<" "<<sand1;
			 print(total);
			 break;
			 case 2:addrs();
			 //cout<<"    -->"<<quantity<<"  "<<sand2;
			 print(total);
			 break;
			 case 3:addrs();
			 //cout<<"    -->"<<quantity<<" "<<sand2;
			 print(total);
			 break;
           }
			}
			}}


	 else if(choice==4)
	 {
		cout<<"\n1 "<<roll1<<" Rs.150"<<"\n";
		cout<<"2 "<<roll2<<" Rs.100"<<"\n";
		cout<<"3 "<<roll3<<" Rs.120"<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nHow Much Rolls Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: total=total+ 150*quantity;
			break;
            case 2: total=total+ 100*quantity;
			break;
            case 3: total=total+ 120*quantity;
			break;

			}
			//system("CLS");
			  printf("\n1) To Order Anything Else :\n2) To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);
		printf("\n");
		if(again==1)
		{
			printf("\n\n");
			//vegetarian();
			mainmenu();
		}
			else if( again==2)
            {switch (pchoice1)
			{
			 case 1: addrs();
            // cout<<"    -->"<<quantity<<" "<<roll1;
			 print(total);
             break;
             case 2:addrs();
			 //cout<<"    -->"<<quantity<<"  "<<roll2;
			 print(total); break;
			 case 3:addrs();
			 //cout<<"    -->"<<quantity<<" "<<roll3;
			 print(total);
			 break;
			 }
			 } }}
	else if(choice==5)
	 {
		cout<<"\n1 "<<bir1<<" Rs.160"<<"\n";
		cout<<"2 "<<bir2<<" Rs.220"<<"\n";
		cout<<"3 "<<bir3<<" Rs.140"<<"\n";
		cout<<"\nPlease Enter which Biryani you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{case 1: total=total+ 160*quantity;
			break;
            case 2: total=total+ 220*quantity;
			break;
			case 3: total=total+ 140*quantity;
			break;
            }
			//system("CLS");
			  printf("\n1) To Order Anything Else :\n2) To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);
		printf("\n");
		if(again==1)
		{
			printf("\n\n");
			//vegetarian();
			mainmenu();
		}
			else if( again==2)
            {switch (pchoice1)
			{
			 case 1:addrs();
			// cout<<"    -->"<<quantity<<" "<<bir1;
			print(total);
			 break;
			 case 2:
			addrs();
			// cout<<"    -->"<<quantity<<"  "<<bir2;
			 print(total);
			 break;
			 case 3:addrs();
			// cout<<"    -->"<<quantity<<" "<<bir3;
			print(total);
			 break;
            }
            }
			}
			}
else if(choice==6)
	 {
		cout<<"\n1 "<<cok1<<" Rs.80"<<"\n";
		cout<<"2 "<<cok2<<" Rs.95"<<"\n";
		cout<<"3 "<<cok3<<" Rs.120"<<"\n";
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=3)
		{
			cout<<"\nHow Much Drink Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: total=total+ 80*quantity;
			break;
            case 2: total=total+ 95*quantity;
			break;
			case 3: total=total+ 120*quantity;
			break;
}
			//system("CLS");
			  printf("\n1) To Order Anything Else :\n2) To Get Your Total:\n\nEnter Your Choice :");
		scanf("%d",&again);
		printf("\n");
		if(again==1)
		{
			printf("\n\n");
			//vegetarian();
			mainmenu();
		}
			else if( again==2)
            {switch (pchoice1)
			{
			 case 1:addrs();
			// cout<<"    -->"<<quantity<<" "<<cok1;
			 print(total);
			 break;
			 case 2:addrs();
			 //cout<<"    -->"<<quantity<<"  "<<cok2;
			print(total);
			  break;
			 case 3:addrs();
			// cout<<"    -->"<<quantity<<" "<<cok3;
			print(total);
			 break;
}}}}
else if(choice==0)
    return ;
      else
       {        system("CLS");
				cout<<"Please Select Right Option: \n";
      }
}

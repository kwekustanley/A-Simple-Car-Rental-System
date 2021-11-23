#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;


// A struct to keep record of cars
 struct Cars {

  string mark [10] = {"BMW","Mercedes-Benz","Audi","Tesla","Porsche","Lexus","Volvo","Land Rover","Cadillac"};

  string model[10] = {"1 Series","C-Class","A3","Model Y","Macan","CT 200h","XC90","Range Rover"," Escalade"};

  string color[10] = {"Black","White","Red","Yellow","Grey","Blue","Silver","Brown","Black"};

  string max_speed[10] = {"150 Km/h ","180 Km/h","130 Km/h","170 Km/h","130 Km/h","140 Km/h","160 Km/h","120 Km/h","150 Km/h"};

  int rent_fee[10] = {3000,5000,2000,4000,2000,2500,4000,6000,1000};

  int date [10] ={2020,2021,2019,2020,2021,2018,2020,2021,2019};
   };
  //Declaring the struct class.
   Cars car ;

 //First Output after signing in.
   void Menu ()
 {

cout << "\t\t\t Please select from the available options.\n";
   int num=1;
 for(int i=0;i<9;++i)
 {
 	cout <<"\t\t\t";
 	cout << num << ".  "<< car.mark[i]<< endl;
    num++ ;
 }

 }

 //Output after making selection.
 void Details (int choice)
  {

   	system("CLS");
  	 cout<<"\n\n\n\t\t\t-----------------------------\n";
     cout<<"\t\t\tYou Selected - "<<car.mark[choice-1]<<endl;
     cout<<"\t\t\t-----------------------------\n\n\n";
     cout<<"\t\t\tModel : "<<car.model[choice-1]<<endl;
     cout<<"\n\t\t\tColor : "<<car.color[choice-1]<<endl;
     cout<<"\n\t\t\tMaximum Speed : "<<car.max_speed[choice-1]<<endl;
     cout<<"\n\t\t\tRent Fee : "<<"GHC"<<car.rent_fee[choice-1]<<".00"<<endl;
  }

int main()
{

	int login();
    login();

         string decide ="yes" ;
     cout<<"\t\t\t_____________________________________________\n";
     cout<<"\t\t\t\t A SIMPLE CAR RENTAL SYSTEM \n";
     cout<<"\t\t\t\t WELCOME TO KS RENTALS "<<endl;
     cout<<"\t\t\t______________________________________________\n";

     while(decide!="exit")
     {
         Menu();
     cout<<"\n\n\n\t\t\tYour Option: ";

     int days;
     int choice ;
     cin>>choice;
     Details(choice);
     cout<<"\n\t\t\tNumber of days you wish to rent the Car :";
     cin>> days;
     int rental_fee =car.rent_fee[choice-1]*days;
     cout<< "\n\t\t\tYour Total rental fee is "<<"GHC"<< rental_fee <<".00"<< endl;
     cout << "\n\t\t\tDo you want to proceed? Yes/No ";
     cin>> decide;
     string customer_name;
     cout << "\n\t\t\tEnter your name as it appears on the National ID. ";
     getline(cin, customer_name);

     system("CLS");

     if (decide=="yes"||"YES"||"Yes"){
     //system("CLS");
     int payment;
     int balance;
     cout <<"\n\t\t\tEnter your payment amount: ";
     cin>>payment;
     system("CLS");
     if(payment >= rental_fee){
        rental_fee =car.rent_fee[choice-1]*days;
        balance=payment-rental_fee;
    cout << "\n\t\t                       KS RENTALS - Customer Invoice                  "<<endl;
    cout << "\t\t	________________________________________________________"<<endl;
    cout << "\t\t         Invoice No.:"<<"   ----------------- |"<<" #AnQ9751"<<endl;
    cout << "\t\t	  Customer Name:"<<" ----------------- |"<<" " <<customer_name  <<endl;
    cout << "\t\t	  Car Mark:"<<"      ----------------- |"<<" "<<car.mark[choice-1]<<endl;
    cout << "\t\t	  Car Model:"<<"     ----------------- |"<<" "<<car.model[choice-1]<<endl;
    cout << "\t\t	  Number of days:"<<"----------------- |"<<" "<< days<<" "<<endl;
    cout << "\t\t	  Your Rental Amount :"<<"------------ |"<<" GHC"<<rental_fee<<".00"<<endl;
    cout << "\t\t	  Amount Paid     :"<<"----------------|"<<" GHC"<<payment<<".00 "<<endl;
    cout << "\t\t	  Balance    :"<<"---------------------|"<<" GHC"<<balance<<".00"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout <<" "<<endl;
    cout << "\t\t	Thanks for transacting with us."<<endl;
    cout << "\t\t	"<<endl;
    exit(0);
     }
     else{
       cout << "\n\t\t	Sorry Insufficient balance."<<endl;
       exit(0);
     }
     system("CLS");
     }



    else{
    exit(0);}
     }

    return 0;
}

// The login section
  int login(){
   string pass ="";
   string username;

   char ch;
   cout <<"\n\n\n\n\n\n\n\t\t\t\t\tCar Rental System Login\n";
   cout << "\n\t\t\t\t\tEnter Username:";
   getline(cin,username);
   cout << "\n\t\t\t\t\tEnter Password: ";
   ch = _getch();
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }
   if(pass == "pass123"){
      cout << "\n\n\n\n\t\t\t\t\tLogin Successful!.......\n\n";
      system("PAUSE");
      system("CLS");

   }else{
      cout << "\n\n\n\n\t\t\t\t\tIncorrect Password...\n";
      cout << "\n\n\n\n\t\t\t\t\tPlease Try Again!!\n";
      system("PAUSE");
      system("CLS");
      login();
   }


}






//#include <fstream>
//#include <iostream>
//#include <stdio.h>
//#include <string>
//#include <cstring>
//using namespace std;
//#define MONTHLY_CHARGE 200
//
//
//void insertRecord(){
//    char id[50];
//    char name[50];
//    char amount[50];
//    cout << "Enter your custumer ID: "<<endl;
//    cin.getline(id, 50);
//    cout << "Enter your custumer name: "<<endl;
//    cin.getline(name, 50);
//    cout << "Enter your custumer  amount: "<<endl;
//    cin.getline(amount, 50);
//    cout<<endl;
//    ofstream ofile;
//    ofile.open("abc.txt",ios::app);
//    ofile <<id<< ","<<name<<","<<amount<<endl;
//    ofile.close();
//}
//
//
//void readRecord(){
//   long  int record[2]={};
//   string custumer_name;
//    ifstream ifile;
//    ifile.open("abc.txt");
//    string d="";
//    string custumer_id;
//    cout<<"ENter Custumer ID =";cin>>custumer_id;
//    while (getline (ifile, d)) {
//        char*data=new char[d.length()];
//        strcpy (data, d.c_str());
//        char *token = strtok(data, ",");
//        if (token!=custumer_id) continue;
//        else {
//
//        while (token != NULL)
//        {
//            cout<<token<<endl;
//
//            token = strtok(NULL, ",");
//        }
//
//        }
//    }
//    ifile.close();
//}
//int main ()
//{
//    char T;
//    int i=0;
//    int choice;
//    do{
//        cout<<"1 - Add new Customer"<<endl;
//        cout<<"2 - Find Customer\n\n"<<endl;
//        
//        cout<<"Choice Option from above Menu : ";
//        cin>>choice;
//        
//        switch(choice){
//        	case 1:
//        		insertRecord();
//        		break;
//        	case 2:
//        		readRecord();
//        		break;
//        	default:
//        		cout<<"Invlid Choice - Try Again !"<<endl;
//        		break;
//		}
//        
//
//    }while(i==0);
//
//    return 0;
//}


#include <fstream>
#include <iostream>
using namespace std;
int main ()
{
   char name[50];

   ofstream ofile;                               // open a file in write mode.
   ofile.open("abc.txt");

   cout << "Writing to the file" << endl;
   cout << "Enter your name: "<<endl;
   cin.getline(name, 50);
   cout<<endl;
   ofile << name << endl;            // write inputted data into the file.
   ofile.close();                              // close the opened file.

   ifstream ifile;                           // open a file in read mode.
   ifile.open("abc.txt");

   cout << "Reading from the file" << endl;
   ifile >> name;

   cout << name << endl;      // write the data at the screen.
   
   ifile.close();                       // close the opened file.

   return 0;
}

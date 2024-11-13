
#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int i;
int r;
int asgn=100;

void pat_detail();
void pat_record();
void aval_dr();


struct record
    {
    char name[25];
    //father name
    char fname[25];
    char address[40];
    char disease[100];
    char cnic[100];
    int age;
    };
    
    int main()
    {
    system("cls");
	
	cout<<"\n\t\t\t ** Welcome to Medicare Hospital ***\n\n"<<endl;
	main:
		
	cout<<"\t\t\t ** 1.Add New Patients Record **"<<endl;
	cout<<"\t\t\t ** 2.View Available Doctors  **"<<endl;
	cout<<"\t\t\t ** 3.View patient detail     **"<<endl;
    cout<<"\t\t\t ** 4.Exit The Program        **"<<endl;
    cout<<"\t\t\t ** 5.Delete the menu         **"<<endl;
            
    
	int ch,ch1,i;
	cin>>ch;
    if(ch==4)
	goto finish;
	
// menu for patient detail
	switch(ch)
	case 1:
    { 
	system("cls");
	pat_detail();
	cin>>i;
	system("cls");
	if(i==1)
    {
    goto main;
    }
	if(r==1&&i==2)
	{
	pat_record();
    }
	if(i==3)
	{
	goto finish;
	}
    else 
	goto main;
	break;
			 
//available doctor menu
	case 2:
	system("cls");
	aval_dr();
	//asking choice
    int a;
    cin>>a;
    if(a==1)
    {
    goto main;
	}
	if(a==2)
	{
	goto finish;
	}
	break;
	
// pateint record menu
    case 3:
	system("cls");
	pat_record();
	//asking choice
	int b;
	cout<<"\t\t\t 1.Goto Main Menu "<<endl;
	cout<<"\t\t\t 2.Exit "<<endl;
	cin>>b;
	system("cls");
	if(b==1)
	{
	goto main;
    }              
    if(b==2)
    {
    goto finish;
	}
	break;
	default:
	cout<<"wrong input\n\n";	         	
	goto main;
		         			         	
	finish:
		
    return 0;
    }
}

//Entering patient detail function
    void pat_detail()
    {  
    record p1[100];
    r=0;
    ofstream file ("C:\\patient.txt");
	          
	cout<<"Enter The Patient Name"<<endl;
	cin>>p1[i].name;
    file<<"Patient Name :"<<p1[i].name<<endl;
    
	cout<<"Enter The Father's Name "<<endl;
	cin>>p1[i].fname;
	file<<"Father Name :"<<p1[i].fname<<endl;  
	
	cout<<"Enter The Patient Age"<<endl;
	cin>>p1[i].age;
    file<<"Age :"<<p1[i].age<<endl;    
	   
    cout<<"Enter The Patient CNIC No (Containing 13 Words)"<<endl;
	cnic:
	gets(p1[i].cnic);
	if(strlen(p1[i].cnic)!=13)
	     
	goto cnic;
	file<<"CNIC :"<<p1[i].cnic<<endl;      
	
//again type cnic     
	cout<<"Enter The Patient Address "<<endl;
	cin>>p1[i].address;
	file<<"Patient Address :"<<p1[i].address<<endl;  
	
	cout<<"Enter The Disease "<<endl;
	cin>>p1[i].disease;
	file<<"Disease :"<<p1[i].disease<<endl;  
	
	file.close();
	r=1;
	asgn++;
	//asking choice
	system("cls");
	cout<<"press 1 to go main menu"<<endl;
	cout<<"press 2 to view patient save record "<<endl;
	cout<<"press 3 to exit"<<endl;     
	}
	
//displaying patient record function
    void pat_record()
    {  
    if(r==1) 
	{ 

    record p1[100];
	cout<<"\t\t\t PATIENT DETAIL \n\n";
	cout<<"\t\t\t Patient Name is = "<<p1[i].name<<endl;
	cout<<"\n\t\t\t Father Name is = "<<p1[i].fname<<endl;
	cout<<"\n\t\t\t Pateint Age is = "<<p1[i].age<<endl;
	cout<<"\n\t\t\t Cnic no = "<<p1[i].cnic<<endl;
	cout<<"\n\t\t\t Patient Address is = "<<p1[i].address<<endl;
	cout<<"\n\t\t\t Patient Suffering From Disease is "<<p1[i].disease<<endl;
	cout<<"\n\t\t\t Appointment No is  "<<asgn<<endl;
	}
	else
	cout<<"\t\t\t No Record Found\n\t First Enter Your Record Please From Main Menu\n\n"<<endl;
    }
    
//available doctor fuction
    void aval_dr()
    {
	cout<<"\t\t\t Available Doctors Are \n\n"<<endl;
	cout<<"\t\t\t DR.Umer\n\t\t\t DR.Usman\n\t\t\t DR.Ali\n\t\t\t"<<endl;
    cout<<"\t\t\t Press 1 to Go to Main Menu"<<endl;
    cout<<"\t\t\t Press 2 to Exit\n\n"<<endl;
}

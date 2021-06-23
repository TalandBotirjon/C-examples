

#include <iostream>
#include <string.h

using namespace std;

class Mashina   // class is Mashina
{  
	public:
		string name;
		int year, month, day;
		string names()
    {		
      return name;
    }
		int years()
    {		
      return year;	
    }
		int months()
    {
      return month;	
    }
		int days()
    {
      return day;	
    }
		void getmashina()
    {
			cout<<"Model - "<<name<<"\t\t"<<day<<":"<<month<<":"<<year<<endl;
		}
};
int main ()
{	
	int n;
	cout<<"Nechta mashina kirgazasiz-> "; cin>>n;
	Mashina mashina[n], M;
	int Sana[n];
	for (int i=0; i<n; i++)
  {
		cout<<i+1<<"-mashina ma'lumotlarini kiriting:\n";
		cout<<"Mashina nomi - "; cin>>mashina[i].name;
		cout<<"Oxirgi tamirlangan sana - "; cin>>mashina[i].day;
		cout<<"Oxirgi tamirlangan oy - "; cin>>mashina[i].month;
		cout<<"Oxirgi tamirlangan yil - "; cin>>mashina[i].year;
	}
	for (int i=0; i<n; i++)
  {
		Sana[i]=mashina[i].days()+30*mashina[i].months()+365*mashina[i].years();
	}
	for (int i=0; i<n; i++)
  {
		for (int j=0; j<n; j++)
    {
			if (Sana[i]<=Sana[j])
      {
				M=mashina[i]; mashina[i]=mashina[j]; mashina[j]=M;
			}
		}
	}	
	for (int i=0; i<n; i++)
  {
		mashina[i].getmashina();
	}
	return 0;	
}


//   I love Uzbekistan :)

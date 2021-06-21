#include <iostream>
#include <math.h>
#include <set>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <ctime>

using namespace std;

#define aa cout<<"\n************************************************************\n"
#define ab cout<<"\n\n"

int main ()
{ 
	srand(time(0)); 
	float a[20], b[20], c[10], d[40];
	set<float> M ;
	set<float> M2 ;
	set<float> M3 ;
	set<float> SS ;
  set <float>::iterator M1_ ;
  set <float>::iterator M2_ ;
	set <float>::iterator M3_ ;
	set <float>::iterator S1_ ;
	ab ;
	cout<<" 1-to'plam elementlari -> ";
  
	for(int i=0; i<20; i++)
  {
		a[i] = rand()%200-100;
		M.insert( a[i] );
	}
	for (M1_=M.begin(); M1_!=M.end(); ++M1_)
  {
		cout<<setw(5)<<( *M1_ );
	}
	aa ;
	cout<<" 2-to'plam elementlari -> ";
  
	for (int i=0; i<20; i++)
  {
		b[i] = rand()%200-100;
		M2.insert( b[i] );
	}
	for (M2_=M.begin(); M2_!=M.end(); ++M2_)
  {
		cout<<setw(5)<<( *M2_ );
	}
	aa ;
	cout<<" 3-to'plam elemantlari -> ";
  
	for (int i=0, j=0, t=0; i<20, j<20, t<10; i+=2, j+=2, t++)
  {
		c[t] = ( a[i]+a[i+1] ) - ( b[j] + b[j+1] );
		M3.insert( c[t] );
	}
	for (M3_=M3.begin(); M3_!=M3.end(); ++M3_ )
  {
		cout<<setw(10)<<( *M3_ );
	}
	aa ;
	cout<<"Saralangan elementlar -> "; 
	float d[40];
  
	for (int q=0, i=0; q<20, i<20; q++, i++)
  {
		d[q] = a[i];
		SS.insert( d[q] );
	}
	for (int q=20, j=20; q<40, j<20; q++, j++)
  {
		d[q] = b[j];
		SS.insert( d[q] );
	}
	int s = 0;
	for (int q=0; q<40; q++)
  {   
		for (int w=0; w<40; w++)
    {
			if (d[q]==d[w]) s++;
		}
		if (!s) 
    {
			SS.insert(d[q]);
		}
		s=0;
	}
	for ( S1_=SS.begin(); S1_!=SS.end(); ++S1_ )
  {
		cout<<setw(5)<<( *S1_ );
	}
	aa ;
	return 0;
}

// I love Uzbekistan

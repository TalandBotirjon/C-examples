/*
Hello evevybody.
There i probably no one who does not know how to play chess or has never heard of it.
In this file, I wrote a function that allows the console to display a chessboard using ASCII codes.

Привет всем.
Наверное, нет никого, кто не умеет играть в шахматы или никогда о них не слышал.
В этом файле я написал функцию, которая позволяет консоли отображать шахматную доску с использованием кодов ASCII.

Salom hammaga.
Shaxmat o'ynashni bilmaydigan yoki u haqida eshitmagan odam bo'lmasa kerak.
Bu faylda ASCII kodlar orqali shaxmat doskasini ko'rinishini consolga chiqadigan funksiya yozdim.


*/
#include <iostream>  

using namespace std;

void chess_board ()
{
	cout<<"\n\n";
	for (int i=0; i<33; i++)
  {
		if (i==0) cout<<(char)201;
		if (i==32) cout<<(char)187;
		else cout<<(char)205;
	}
	cout<<endl;
	for (int a=0; a<16; a++)
  {
		for(int b=0; b<33; b++)
    {
			if (b==0   ) 
      {
			cout<<(char)186;
			b++;
      }
			if (b!=0 || b!=32)
      {
			if (a%4==0 || a%4==1)
      {
				if (b%8==1 || b%8==3 || b%8==2 || b%8==4 )
        {
					cout<<(char)178;
				}
				if (b%8==5 || b%8==6 || b%8==7 || b%8==0 )
        {
					cout<<" ";
				}
			}
			if (a%4==2 || a%4==3)
      {
				if (b%8==5 || b%8==6 || b%8==7 || b%8==0 )
        {
					cout<<(char)178;
				}
				if (b%8==1 || b%8==3 || b%8==2 || b%8==4 )
        {
					cout<<" ";
				}	
			}
		}
		if (b==32) cout<<(char)186;
		}
		cout<<"\n";
	}
	for (int i=0; i<33; i++)
  {
		if (i==0) cout<<(char)211;
		if (i==32) cout<<(char)189;
		else cout<<(char)205;
	}
}

int main ()
{  //Asosiy funksiya.
	chess_board();  //shaxmat doskasini qaytaruvchi funksiya.
  
  return 0;
}


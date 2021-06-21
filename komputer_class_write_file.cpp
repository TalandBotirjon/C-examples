
#include <iostream>
#include <string>
#include <set>
#include <map>
#include <conio.h>
#include <math.h>
#include <fstream>

using namespace std;

class Komputer 
{
private:
	string nomi, firmasi;
	int xotirasi, yadson, yil;
public:
	Komputer(string nomi, string firmasi, int xotirasi, int yadson, int yil): nomi(nomi), firmasi(firmasi), xotirasi(xotirasi), yadson(yadson), yil(yil) {}
	string getfirmasi ()
  {
		return firmasi;
	}
	int  getyad()
  {
		return yadson;
	}
	void show1 ()
  {
		cout<<" Komputer haqida ma'lumot :\n\t Nomi: "<<nomi<<" | Firmasi: "<<firmasi<<" | Xotirasi: "<<xotirasi<<" | Yad_son: "<<yadson<<" | Yili: "<<yil<<endl;
           ofstream write ("malumot.txt") ;
          write <<" Komputer haqida ma'lumot :\n\t Nomi: "<<nomi<<" | Firmasi: "<<firmasi<<" | Xotirasi: "<<xotirasi<<" | Yad_son: "<<yadson<<" | Yili: "<<yil<<endl;
	}
	friend bool operator<(const Komputer &left, const Komputer &right);
};
bool operator<(const Komputer &left, const Komputer &right)
{
	return left.firmasi < right.firmasi; 
}
void WRITE (set<Komputer> Komp, string fer, int y)
{
	cout<<" ^^^^^^^^"<<fer<<" va "<<y<<" yadrosi bo'lgan ma'lumot qidirilmoqda ^^^^^^^^^^^"<<endl;
	for (auto i : Komp ){
		if (i.getfirmasi()==fer && i.getyad()==y )
    {
			i.show1();
		}
	}
}
int main ()
{
	set<Komputer> Komp;
	Komp.insert(Komputer("acer","ACER",1000,3,2018));
	Komp.insert(Komputer("lenove","LENOVE",1000,3,2017));
	Komp.insert(Komputer("toshiba","TOSHIBA",1500,4,2019));
	Komp.insert(Komputer("acer","ACER",2000,4,2019));
	WRITE(Komp, "ACER",3);
	return 0;
}



// I love Uzbekistan :)

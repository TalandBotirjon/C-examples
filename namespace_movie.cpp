
#include <iostream>
#include <string>
using namespace std;

namespace Movie 
{
	class Kinofilm 
  {
	private:
		string name, rname;
		double time, asoni, narxi;
	public:
		Kinofilm(){};
		Kinofilm  (string nam, string rnam, double tim, double ason): name(nam), rname(rnam), time ( tim), asoni (ason) {}
		virtual double getnarx ()
    {
			narxi= ( time )*20+(asoni)*30;
			if (rname=="Stiven_Spilberg" || rname=="Djeyms_Kemeron")
      {
				narxi*=2;
			}
			return narxi;
		}
		virtual void Axborot  ()
    {
			cout<<" Kinofilm   nomi    -> "<<name<<endl;
			cout<<" Kinofilm  rejjisori->"<<rname<<endl;
			cout<<" Kinofilm davomiyigi->"<<time<<endl;
			cout<<" Kinofilm aktlar soni->"<<asoni<<endl;
			cout<<" Kinofilm narxi      ->"<<narxi<<endl;
		}
	};
	class Multfilm : public Kinofilm
  {
	private:
		string mname, mrname;
		double mtime, masoni, mnarxi;
	public:
		Multfilm(string mnam, string mrnam, double mtim, double mason): mname(mnam), mrname(mrnam), mtime(mtim), masoni(mason) {}
	    double getnarx ()
      {
			mnarxi= ( mtime )*25+(masoni)*10;

			return mnarxi;
		}
		void Axborot  ()
    {
			cout<<" Multfilm   nomi    -> "<<mname<<endl;
			cout<<" Multfilm  rejjisori->"<<mrname<<endl;
			cout<<" Multfilm davomiyigi->"<<mtime<<endl;
			cout<<" Multfilm aktlar soni->"<<masoni<<endl;
			cout<<" Multfilm narxi      ->"<<mnarxi<<endl;
		}
	};
}
using namespace Movie;
int main ()
{
	int a;
	cin>>a;
	Kinofilm kino=Kinofilm ( "3_savdoyi", "Stiven_Spilberg", 150,40 );
	Multfilm mult= Multfilm( "Garry_Potor","Stiven_Spilberg", 100,30);
	Kinofilm kino1=Kinofilm ( "Karib_dengiz_qaroqchilari", "Djeyms_Kemeron", 145,35 );
	Multfilm mult1= Multfilm( "Ov_mavsumi","Djeyms_Kemeron", 100,30);
	if(a==1){
		cout<<"               kinofilm 1        \n"; kino.Axborot();}
	if (a==2){
		cout<<"               kinofilm 2        2\n"; kino1.Axborot();}
	
	cout<<"____________________________________\n";
	if (a==3){
		cout<<"                multfilm 1      \n"; mult.Axborot();}
	if (a==4){
		cout<<"                multfilm 2      \n"; mult1.Axborot();}
  return 0;
}



// I love Uzbekistan :)


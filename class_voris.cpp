


/*
* “Fotoapparat” classini yarating. Maydonlari: Modeli, Optik yaqinlashtirishi 
(Zoom, 1 dan 35 gacha haqiqiy son) va materiali (metall yoki plastmassa). 
Virtual metod yozing: "Narx" metodi – fotoapparat narxini ($ hisobida) qaytaradi, 
narx quyidagicha hisoblanadi: agar material plastmassa bo’lsa (Zoom + 2) • 10, 
agar metall bo’lsa (Zoom + 2) • 15. “Qimmat” nomli mantiqiy metod yozing, 
fotoapparat narxi 200$ dan oshsa rost(true) qiymat aks holda yolg’on(false) qiymat qaytarsin. 
Bundan tashqari, obyekt haqida ma'lumotni ekranga chiqaruvchi “Print” nomli metod yozing: 
Model, Zoom, Narx va fotoapparat qimmat yoki yo’qligi haqida habar chiqarsin.
Bundan tashqari, “Sifrovoy” nomli avlod class yarating. 
Qo’shimcha parametrlari – butun turli o’zgaruvchi megapiksellar soni. 
Qayta yuklangan “Narx” metodi odatiy fotoapparat narxidek hisoblanadi lekin unga 
megapiksellar sonini ko’paytirish kerak bo’ladi. Yangi “Modelni yangilash” nomli metod yozing, 
unda megapiksellar soni 2 ga oshirilsin. Bundan tashqari, obyekt haqida ma'lumotni 
ekranga chiqaruvchi “Print” nomli metod yozing: Model, Zoom, Megapiksellar soni, 
Narx va fotoapparat qimmat yoki yo’qligi haqida habar chiqarsin.
Asosiy dasturda Fotoapparat classidan 4x optik zoomli (Zoom = 4) va plastik meterialli, 
shuningdek, Sifrovoy fotoapparat classidan metall meterialli 8 megapikselli va 3x optik 
zoomli obyektlarni yarating. Fotoapparatlar haqida ma’lumotlarni ekranga chiqarng. 
Sifrovoy fotoapparatni modelini yangilab qaytadan ma’lumotlarni ekranga chiqaring. 
*/

/*
* Create a "Camera" class. Fields: Model, Optical zoom
(Zoom, actual number from 1 to 35) and material (metal or plastic).
Type a virtual method: The "Price" method - returns the price of the camera (in the $ account),
the price is calculated as follows: if the material is plastic (Zoom + 2) • 10,
if metal (Zoom + 2) • 15. Write a logical method called “Expensive”,
If the price of the camera exceeds $ 200, the value will be true, otherwise the value will be false.
Also, type a method called "Print" that displays information about the object:
Let me know if the Model, Zoom, Price, and Camera are expensive.
Also, create a generation class called Sifrovoy.
Additional parameters are the number of different variable megapixels.
The reloaded Price method counts as the price of a regular camera, but to him
the number of megapixels will need to be increased. Write a new method called "Model Update",
then increase the number of megapixels by 2. Also information about the object
Write a method called "Print": Model, Zoom, Megapixels,
Let them know the price and whether the camera is expensive.
In the main program, the camera class has 4x optical zoom (Zoom = 4) and plastic material,
as well as 8-megapixel and 3x optical with metallic material from the Sifrovoy camera class
create zoom objects. Display camera information.
Update your digital camera model and re-display the data.

*/

include <iostream>

using namespace std;

namespace Apparat   //Apparat namespace
{
  class  Fotoapparat        //class Fotoapparat
  {
	private:
		string Model;
		int Zoom ;
		int narx;
		char material;
    
	public:
		Fotoapparat(){};
    
		Fotoapparat (string Model, int Zoom, char material): Model(Model), Zoom (Zoom), material(material) {}

		virtual int Narx ()
    {
			switch (material)
      {
			case 'm' :  narx=static_cast<int> ((Zoom+2) * 15 );  break;
			case 'p' :  narx=static_cast<int> ((Zoom+2) * 10 );  break;
			default: cout<<" materialini hato kiritdingiz:  "<<"\n\n";
		 }
			return narx;
		}
		virtual bool   Qimmat ()
    {
			bool qimmat = false;

			qimmat= (narx >= 200);
			if ( qimmat) cout<<" Bu Fotoapparat qimmat:   \n\n ";
			else cout<<"  Bu Fotoapparat arzon : \n\n  ";
		}
		virtual void Print () 
    {
			cout <<" madeli-> "<< Model << "  Zoomi -> "<< Zoom << "   narxi -> " << narx<<" $ "<<endl ;
			if (narx>=200) cout<<" Bu Fotoapparat 200$ dan qimmat "<<" \n" ;
			else cout<<" Bu Fotoapparat 200$ dan Arzon  "<< "\n";
		}
	};   // class Fotoapparat end.
  
	class Sifrovoy : public Fotoapparat     // Sifrovoy classi Fotoapparat clasidan vorislik olinyabdi.
  {
	private:
		string SifModel;
		int SifZoom, Sifnarx, Megapicsel;
		char Sifmaterial;
    
	public:
		Sifrovoy (string SifModel, int SifZoom, int Megapicsel,  char Sifmaterial) : SifModel(SifModel), SifZoom(SifZoom), Megapicsel(Megapicsel), Sifmaterial(Sifmaterial){}

		int Narx() override
    {
			switch (Sifmaterial) 
      {
			case 'm' : Sifnarx=static_cast<int> (Megapicsel * (SifZoom+2)*15); break;
			case 'p' : Sifnarx=static_cast<int> (Megapicsel * (SifZoom+2)*15); break;
			default: cout<<" Sifrovoy Materialini hato kiritdingiz :) "<< "\n\n ";
			}
				return Sifnarx;
		}
		bool Qimmat() override
    {
			bool qimmat = false;
			qimmat= (Sifnarx >= 200);
			if ( qimmat) cout<<" Bu Fotoapparat qimmat:   \n\n ";
			else cout<<"  Bu Fotoapparat arzon : \n  ";
		}
		void Print() override 
    {
			cout<<" madeli-> "<< SifModel << "  Zoomi -> "<< SifZoom << " Megapicsel->  "<<Megapicsel << "   narxi -> " << Sifnarx<<" $ "<<endl ;
			if (Sifnarx>=200) cout<<" Bu Fotoapparat 200$ dan qimmat "<<" \n" ;
			else cout<<" Bu Fotoapparat 200$ dan Arzon  "<< "\n";
		}
	};   // Sifrovoy class end.
}   // Apparat namespace end.
using namespace Apparat;   // Apparat nomlar fazosidan foydalanishga ruxsat.

int main ()   //asosiy funksiya
{     
	Fotoapparat Foto= Fotoapparat("Acer", 4, 'p');    // Fotoapparat classidan obyekt yaratildi. 
	Foto.Narx();
	Foto.Print();
	Foto.Qimmat();

	Sifrovoy Sif= Sifrovoy("Toshiba", 8,3,'m');       // Sifrovoy classidan obyekt yaratildi.
	Sif.Narx(); 
	Sif.Print();
	Sif.Qimmat();
  return 0;
}



/*
* C++ dasturlash tilida Machine Classi.
*/
/*
* Machine Class in C ++ programming language.
*/

/*
* Машинный класс на языке программирования C ++.
*/


#include <iostream>
#include <string> 
using namespace std;


class Machine 
{
/*
Class Machine.
Values: Machine name,
Machine maker name,
Machine make year,
Machine cost.
*/
  public:
  string name;
  string makername;
  int myear;
  int cost;
  
  Machine(string name, string makername, int myear, int cost): name(name), makername(makername), myear(myear), cost (cost){}
  
  string getname()
  {
      /*Return Machine name. */
    return name;
  }
  string getmaker()
  {
      /*Return Machine maker name. */
    return makername;
  }
  
  int getyear()
  {
      /*Return Machine make year. */
    return myear;
  }
  int getcost()
  {
      /*Return Machine cost.*/
    return cost;
  }
  void get_info()
  {
      /*Get info Machine information.*/
    cout<<name<<", Maker "<< makername<<".\nMake year: "<<myear<<". Cost: "<<cost<<"$\n";
  } 
};

int main (){
  Machine mashina = Machine("BMW M5", "BMW", 2010, 15000);
 
  //cout<<mashina.getname()<<endl;
  //cout<< mashina.getmaker()<<endl;
  //cout<< mashina.getyear()<<endl;
  //cout<<mashina.getcost()<<endl;
  
  mashina.get_info();
  
  return 0;
}


// I love Uzbekistan :)

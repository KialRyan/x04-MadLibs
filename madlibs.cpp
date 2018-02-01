//Authors:Kial Leite Ryan 
#include <iostream>
#include <string>
using namespace std;
int main()
{
  string color;
  string name;
  int number;
  char window ;
  cout<<"Pick a color" <<endl;
  cin>> color;
  cout<<"Choose a name" <<endl;
  cin>> name;
  cout<<"Pick a number"<<endl;
  cin>> number;
  cout<<"Pick a symbol"<<endl;
  cin>> window;
  cout<<"There is a "<< color<< " car. It is owned by "<< name <<endl;
  cout<<"and the license plate number is "<< number; cout<<"."  <<endl;
  cout<<"It had a symbol on the back window of the car that looked like "<< window << endl;
  cout<<"Isn't that neat?"<<endl;
return 0;

}

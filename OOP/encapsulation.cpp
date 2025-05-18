/* DATA HIDEING, BINDING DATA AND MEMBER FUNCTION TOGETHER IN A SINGLE UNIT IS CALLED ENCAPSULATION

THE BENIFIT OF ENCAPSULTAION IS OBJECT STAYS IN VALID STATE.*/

#include<iostream>
using namespace std;

class Bulb
{
private:
int w; // W IS ENCAPSULATED.
public:
void setWattage(int e)
{
if(e>=0&&e<=220)
{
w=e;
}
else
{
cout<<"Invalid Wattage : "<<e<<"Setting to 0"<<endl;
w=0;
}
}
int getWattage()
{
return w;
} 
};

int main()
{
Bulb b1;
b1.setWattage(53);
cout<<"Wattage is "<<b1.getWattage()<<endl;
return 0;
}
#include<iostream>
using namespace std;

namespace Electricals
{
class Bulb
{
private:
int w;
public:
void setWattage(int i)
{
w=i;
}
int getWattage()
{
return w;
}
};
}

int main()
{
Electricals::Bulb b1,b2;
b1.setWattage(50);
b2.setWattage(1000);
cout<<b1.getWattage()<<endl;
cout<<b2.getWattage()<<endl;
return 0;
}
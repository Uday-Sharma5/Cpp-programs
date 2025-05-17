#include<iostream>
using namespace std;

class Bulb
{
private:
int w;

public:
void setWattage(int i)
{
w=i;
}
void printWattage()
{
cout<<"Wattage is "<<w<<endl;
}
};

int main()
{
Bulb b1,b2;
b1.setWattage(100);
b2.setWattage(50);
b1.printWattage();
b2.printWattage();
return 0;
}
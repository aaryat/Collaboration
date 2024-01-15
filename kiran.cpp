#include <iostream>
using namespace std;

void favPet(string name, string fav)
{
    cout << name << "'s favorite pet is " << fav << " 😸";
}
int main()
{
    string name = "Kiran";
    string favourite = "Meow";

    favPet(name, favourite);
    return 0;
}
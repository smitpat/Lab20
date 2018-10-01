#include <iostream>
#include <string>
using namespace std;

struct fruitType
{   
    string name;
    string color;
    int fat;
    int sugar;
    int carbohyderate;
};

int main()
{
    fruitType fruit;

    cout << "Enter the name of the fruit: ";
    cin >> fruit.name;
    cout << endl;

    cout << "Enter the color of the fruit: ";
    cin >> fruit.color;
    cout << endl;

    cout << "Enter the amount of fat in the fruit: ";
    cin >> fruit.fat;
    cout << endl;

    cout << "Enter the amount of sugar in the fruit: ";
    cin >> fruit.sugar;
    cout << endl;

    cout << "Enter the amount of carbohyderate in the fruit: ";
    cin >> fruit.carbohyderate;
    cout << endl;

    cout << "Fruit name: " << fruit.name << endl;
    cout << "Color: " << fruit.color << endl;
    cout << "Fat: " << fruit.fat << endl;
    cout << "Sugar: " << fruit.sugar << endl;
    cout << "Carbohyderate: " << fruit.carbohyderate << endl;

    return 0;
}


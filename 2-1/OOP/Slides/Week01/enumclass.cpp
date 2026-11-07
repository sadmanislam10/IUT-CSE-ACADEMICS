#include <iostream>

using namespace std;

// enum primaryColors{ red, green, blue};
// enum trafficLights{ red,green, blue};

/// will create a compilation error
// becoz red is declared earlier

enum class primaryColors
{
    red,
    green,
    blue
};
enum class trafficLights
{
    red,
    green,
    blue
};

// the enumerators are in scope of each class...not global

int main()
{
    primaryColors color1 = primaryColors::red;
    trafficLights currentSignal = trafficLights::green;

    cout << static_cast<int>(color1) << " " << static_cast<int>(currentSignal) << endl;

    return 0;
}
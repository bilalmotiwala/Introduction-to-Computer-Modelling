#include <iostream>
#include <random>
using namespace std;

int main()
{

    //Defining the Switches and their values on how we shall be setting them up.
    int switch_a = 1; 
    int switch_b = 0;
    int switch_c = 0;

    //Let's consider a single run of this program as one trip.
    //Additionally, let's configure the bulb to randomly choose it's switch value from one of the switches.

    //Setting up our random engine that will generate values for the bulb and switch co-relation of this puzzle.
    default_random_engine generator;
    
    //For the Bulb and it's relation to the switch.
    uniform_int_distribution<int> bulb_to_switch(1,3);
    int bulbstate = bulb_to_switch(generator);

    //For the temperature state of a bulb.
    uniform_int_distribution<int> bulb_temperature(0,1);
    
    if(bulbstate == 2)
    {
        int bulbtemp = bulb_temperature(generator);
    }
    
    cout << "This is the solution to the Switch and Lamp Puzzle using an algorithm which randomly assigns the bulb to a switch and it's state." << endl;
    cout << "Then the switch operation and alongside it's bulb temperature impact is used to see which switch was assinged to which bulb." << endl;
    cout << endl;
    cout << "---------------------------------------------------------------------------------------------------------------------------------" << endl;
    cout << endl;
    
    cout << "The results of this randomly generated run are as follows" << endl;
    
    
    if(switch_a == 1 && switch_b == 0 && bulbstate == 1 )
    {
        cout << "The Bulb is connected to Switch A as this bulb is ON." << endl;
    }

    else if (switch_a == 1 && switch_b == 0 && bulbstate == 0)
    {
        if(bulbtemp == 1)
        {
            cout << "The Bulb is connected to Switch B as this bulb is OFF but WARM." << endl;
        }

        else
        {
            cout << "The Bulb is connected to Switch C as this bulb is OFF and COLD." << endl;
        }
    }
    return 0;
}

#include <iostream>
using namespace std;

void TowerOfHanoi(int n, int a, int b, int c)
{
    static int step_count = 0;
    if (n == 1)
    {
        step_count++;
        cout << "Step " << step_count << ": Move Disk " << n << " from Rod " << a << " to Rod " << c << endl;
        return;
    }

    TowerOfHanoi(n - 1, a, c, b);
    step_count++;
    cout << "Step " << step_count << ": Move Disk " << n << " from Rod " << a << " to Rod " << c << endl;
    TowerOfHanoi(n - 1, b, a, c);
}

int main()
{
    int n;
    cout << "Welcome to Your Tower of Hanoi Puzzle!" << endl;
    cout << "--------------------------------------" << endl;
    cout << endl;

    cout << "Please Enter the Number of Disks you'd like to have in your Tower: " << endl;
    cin >> n;
    cout << endl;

    cout << "Your Tower of Hanoi Solution is as follows:" << endl;
    cout << "-------------------------------------------" << endl;
    cout << endl;

    TowerOfHanoi(n, 1, 2, 3);

    cout << endl;
    cout << "Enjoy Your Solution to the Tower of Hanoi. Exiting...";
    cout << endl;
    cout << endl;
    return 0;
}
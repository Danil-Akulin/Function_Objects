#include <iostream>
using namespace std;

class Printer
{
public:

    void operator()(int value) {
        if (value % 2 == 0)
        {
            Sum += value;
            Amount_of_numbers++;
        }
    }

    void Show_Amount_of_numbers()
    {
        cout << "Amount of numbers - "<< Amount_of_numbers << endl;
    }
    void Show_Sum ()
    {
        cout << "Sum - "<< Sum << endl;
    }
private:
    int Amount_of_numbers = 0;
    int Sum = 0;
};


int main() {
    Printer printer;
    int arr[] = {3,6,6,1};

    for (const auto current: arr) {
        printer(current);
    }
    printer.Show_Amount_of_numbers();
    printer.Show_Sum();
    return 0;
}
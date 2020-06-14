#include <iostream>

using namespace std;
int main()
{
    //variable in brackets must be constant
    char arr[] = "FF";

    for (int i = 0; i < arr[].length(); i++) {
        arr[0] = hexString[0];
    }

    int pow = arr[].length() - 1;
    int s = 1;
    int decimal = 0;


    for (int i = 0; i < len; i++)
    {
        pow--;
        while (pow > 0)
        {
            s *= 16;
        };
        cout << "arr [i]: " << arr[i] << endl;
        cout << "s: " << s << endl;
        //lower case letters
        if (arr[i] >= 97 && arr[i] <= 102) {
            decimal = decimal + arr[i] * s - 87;
        }
        //upper case letters
        else if (arr[i] >= 65 && arr[i] <= 70) {
            decimal = decimal + arr[i] * s - 55;
        }
        //number
        else {
            decimal = decimal + ((arr[i] - 48) * s);
        }
    };
    cout << "dec= " << decimal << endl;
    return 0;
}

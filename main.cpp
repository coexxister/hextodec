#include <iostream>
#include <string.h>

using namespace std;
int main()
{
    //test
    string hexString = "FF";
    int decimal=0;
    int len = hexString.size();
    char arr[len] = hexString.toCharArray();
    int pow = len--;
    int s=1;
    for(int i=0; i<len; i++)
    {
        while(pow--)
        {
            s*=16;
        };
        cout <<"arr [i]: " << arr[i] << endl;
        cout << "s: " << s << endl;
        if(arr[i]>=97&&arr[i]<=102){
            decimal = decimal + arr[i]*s - 87;
        }
        else if(arr[i]>=65&&arr[i]<=70){
            decimal = decimal + arr[i]*s - 55;
        }
        else{
        decimal = decimal +((arr[i]-48)*s);
        }
    };
    cout << "dec= " << decimal << endl;
    return 0;
}

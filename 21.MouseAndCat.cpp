#include <iostream>

using namespace std;

// User Defined Functions....
void catAndMouse(int CatA[], int CatB[], int  MouseC[], int q)
{
    for(int i = 0; i < q; i++)
    {
        if(abs(CatA[i] - MouseC[i]) < abs(CatB[i] - MouseC[i]))
        {
            cout << "Cat A" << endl;
        }
        else if(abs(CatA[i] - MouseC[i]) > abs(CatB[i] - MouseC[i]))
        {
            cout << "Cat B" << endl;
        }
        else
        {
            cout << "Mouse C" << endl;
        }
    }
}
int main()
{
    int q;
    cin>> q;
    if(q < 0 || q > 100)
    {
        cout << "Invalid Input" << endl;
        return 0;
    }
    int CatA[q], CatB[q], MouseC[q];
    for(int i = 0; i < q; i++)
    {
        cin >> CatA[i] >> CatB[i] >> MouseC[i];
        if(CatA[i] < 1 || CatA[i] > 100 || CatB[i] < 1 || CatB[i] > 100 || MouseC[i] < 1 || MouseC[i] > 100)
        {
            cout << "Invalid Input" << endl;
            return 0;
        }
    }

    catAndMouse(CatA, CatB, MouseC, q);
    return 0;
}
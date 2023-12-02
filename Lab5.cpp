#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void zad1()
{
    int elem_count = 0;
    cout << "Podaj ilosc elementow wektora: ";
    cin >> elem_count;

    vector<int> out(elem_count);
    for (int x = 0; x < elem_count; x++)
    {
        cout << "Podaj liczbe [" << x + 1 << "/" << elem_count << "]\n";
        cin >> out[x];
    }

    cout << "Element maksymalny: " << *max_element(out.begin(), out.end())<<"\n";
    cout << "Indeks elementu maksymalnego: " << max_element(out.begin(), out.end()) - out.begin() << "\n";
}

void zad2()
{
    int rozmiar = 0;
    cout << "Wpisz rozmiar tablicy: ";
    cin >> rozmiar;

    int* arr = new int[rozmiar];
    for (int x = 0; x < rozmiar; x++)
    {
        cout << "Podaj liczbe [" << x + 1 << "/" << rozmiar << "]\n";
        cin >> arr[x];
    }

    int mid = rozmiar / 2;

    for (int x = 0; x < mid; x++)
        cout<<arr[x]<<"\t"<<arr[mid + x]<<"\n";

    for (int x = 0; x < mid; x++)
        swap(arr[x], arr[mid + x]);

    cout << "\n\nAfter swap: \n";

    for (int x = 0; x < mid; x++)
        cout << arr[x] << "\t" << arr[mid + x] << "\n";

    delete[] arr;
}

int main()
{
    //zad1();
    zad2();
}
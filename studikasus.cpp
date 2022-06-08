#include <iostream>
using namespace std;

class Data
{
	private:
	    string barang[6] = {"Samsung Evo", "SanDisk 16GB", "Logitech M170", "WD Green 120Gb", "Garmin Venu SQ", "Epson L3210"};
	    int arrayMD[6][2] = {{30, 200000}, {45, 60000}, {55, 120000}, {23, 400000}, {12, 3100000}, {14, 2500000}};
	    int total[10], jual, hasil, ttl;
	
	public:
	    void input();
	    void proses();
	    void output();
} d;
void Data::input()
// {   for(int i=1;i<=2)
{
    cout << " ________________________________________________________\n";
    cout << "|        stok   |      harga     |          barang       |\n";
    cout << "|_______________|________________|_______________________|\n";
    for (int i = 0; i < 6; i++)
    {
        cout << "" << barang[i] << "\t\t" << endl;
        for (int j = 0; j < 2; j++)
        {
            cout << arrayMD[i][j] << "\t\t";
        }
    }
}
void Data::proses()
{
    ttl = 1;
    for (int i = 0; i < 6; i++)
    {
        total[i] = arrayMD[i][0] * arrayMD[i][1];
        hasil += total[i];
    }

    cout << hasil;
}
void Data::output()
{
    {
        cout << " ________________________________________________________\n";
        cout << "|        stok   |      harga     |          barang       |\n";
        cout << "|_______________|________________|_______________________|\n";
        for (int i = 0; i < 6; i++)
        {
            cout << "|" << barang[i] << "\t\t|" << endl;
            for (int j = 0; j < 2; j++)
            {
                cout << arrayMD[i][j] << "\t\t";
            }
        }
        proses();
    }
}
main()
{
    d.input();
    d.output();
}

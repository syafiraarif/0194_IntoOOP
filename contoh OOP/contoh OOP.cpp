

#include <iostream>
using namespace std;

class bangunDatar
{
	private:						//akses modifier
		float panjang, lebar;

	public:
		float luas;

		void input()				// methode input persegi panjang
		{				
			cout << "Masukan Panjangnya : ";
			cin >> panjang;
			cout << "Masukan Lebarnya :";
			cin >> lebar;

		}

		float HitungLuas()
		{
			return panjang * lebar;
		}

		void display()
		{
			cout << "panjangnya = " << panjang << endl;
			cout << "lebarnya = " << lebar << endl;
			cout << "luasnya = " << HitungLuas() << endl;
		}

};
int main()
{
	bangunDatar pp;
	pp.input();
	pp.display();
	return 0;

}


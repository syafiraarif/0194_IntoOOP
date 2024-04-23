

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

		}

};
int main()
{
   
}


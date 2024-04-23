

#include <iostream>
using namespace std;

class Mahasiswa 
{
	public:					//akses modifier
		string nama;
		int umur;
		string jurusan;

		void output() 
		{
			cout << "Nama = " << nama << endl;
			cout << "Umur = " << umur << endl;
			cout << "jurusan = " << jurusan << endl;
		}

};

class Matakuliah
{
	private:
		string kodeMK;
		string namaMK;
		int sks;
	public:
		void input() {
			cout << "kode MK =";
			cin >> kodeMK;
			cout << "Nama MK =";
			cin >> namaMK;
			cout << "SKS =";
			cin >> sks;
		}


};
int main()
{
    
}


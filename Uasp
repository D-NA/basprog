#include <iostream>
#include <vector>

using namespace std;

class Kursus {
private:
    string id;
    string nama;
    string level;
public:
    void setKursus(string i, string n, string l) {
        id = i;
        nama = n;
        level = l;
    }
    string getNama() { return nama; }
    string getLevel() { return level; }
};

class Peserta {
private:
    string id;
    string nama;
    int usia;
public:
    void setPeserta(string i, string n, int u) {
        id = i;
        nama = n;
        usia = u;
    }
    int getUsia() { return usia; }
};

class Jadwal {
private:
    string id;
    string hari;
    string jam;
    Kursus kursus;
    vector<Peserta> pesertaKursus;
public:
    void setJadwalKursus(string i, string h, string j, Kursus k) {
        id = i;
        hari = h;
        jam = j, kursus = k;
    }

    void setPesertaYangAmbil(Peserta p){
        pesertaKursus.push_back(p);
    }

    void print(){
        cout << kursus.getNama() << " (" << kursus.getLevel() << ")" << endl;
        cout << hari << " " << jam << endl;
        int n = pesertaKursus.size();
        double jum = 0;
        int i = 0;
		for(i=0;i<n;i++){
			jum = jum + pesertaKursus[i].getUsia();
		}
       // for(it=pesertaKursus.begin(); it!=pesertaKursus.end(); ++it){
        //    jum = jum + *it.getUsia();
          //  n++;
       // }
        cout << "Rata-rata usia peserta: " << jum/(pesertaKursus.size()*1.0) << endl << endl;
    }
};
int main() {
    Peserta a, b, c;
    Kursus y, z;
    Jadwal m, n;

    a.setPeserta("P1", "Andi", 18);
    b.setPeserta("P2", "Dita", 17);
    c.setPeserta("P3", "Rini", 19);

    y.setKursus("K1", "Pemrogramam C++", "Intermediate");
    z.setKursus("K2", "Pemrograman Java", "Advanced");

    m.setJadwalKursus("J1", "Senin", "13.00-15.00", y);
    m.setPesertaYangAmbil(a);
    m.setPesertaYangAmbil(b);
    m.print();

    n.setJadwalKursus("J1", "Selasa", "15.00-17.00", z);
    n.setPesertaYangAmbil(a);
    n.setPesertaYangAmbil(b);
    n.setPesertaYangAmbil(c);
    n.print();

    return 0;
}

STL LIST
#include <iostream>
#include <cstdio>
#include <list>
#include <iomanip>
 
#define jadiin data.setPerson(nama, umur, tb, bb)
#define pb push_back
#define pf push_front
#define popf pop_front
#define popb pop_back
 
using namespace std;
 class Person {
 private:
      string nama;
      int umur;
      int tinggi;
      double berat;
      double imt;
      string status;
      double IMT() { double t=(double)tinggi/100.0; return (berat/(t*t)); }
      string StatusGizi() {
         double t=IMT();
         if (t<17.0) return "sangat kurus";
         else if (t<18.5) return "kurus";
         else if (t<25.0) return "normal";
         else if (t<28.0) return "gemuk";
         else return "sangat gemuk"; }
 public:
 Person() { nama=""; umur=tinggi=0; berat=0.0; }
 void setPerson(string nm, int u, int t, double b) {
         nama=nm; umur=u; tinggi=t; berat=b;
         imt=IMT(); status=StatusGizi(); }
 string getNama() { return nama; }
 int getUmur() { return umur; }
 int getTinggi() { return tinggi; }
 double getBerat() { return berat; }
 double getIMT() { return imt; }
 string getStatusGizi() { return status; }
 void cetak() {
        cout << nama << " " << umur << " " << tinggi << " ";
         cout << fixed << setprecision(2) << berat << " " << imt << " " << status << endl; }};
 int main(){
  int umur, tb, n, sisip;
  string nama;
  double bb;
  list <Person> p;
  list <Person>::iterator it;
  Person data;
  scanf("%d", &n);
  while(n--)
  {
    cin >> nama;
    scanf("%d %d %lf", &umur, &tb, &bb);
    jadiin;
    p.pb(data); }
 
  while(1) {
    scanf("%d", &n);
    if (n==-9) break;
    else if (n==1) {
      cin >> nama; scanf("%d %d %lf", &umur, &tb, &bb);
      jadiin;
      p.pf(data);}
    else if (n==2) {
      cin >> nama; scanf("%d %d %lf", &umur, &tb, &bb);
      jadiin;
      p.pb(data);  }
    else if (n==3) p.popf();
    else if (n==4) p.popb();
    else if (n==5) {
      scanf("%d", &sisip); cin >> nama;
      scanf("%d %d %lf", &umur, &tb, &bb); jadiin;
      it = p.begin();
      for (int i=0;i<sisip;i++) it++;
      p.insert(it, data);} }
 
  for (it=p.begin();it!=p.end();it++) (*it).cetak();}


ROUSE CLASS
include <iostream>
#include <math.h>
 
using namespace std;
 
class Titik {
      double e,y;
      public:
         void set(double p, double q) { e=p; y=q; }
         double getE() { return e; }
         double getY() { return y; }
         void print() { cout<<"("<<e<<","<<y<<")"; }
   };
 
class Lingkaran {
      Titik p;
      double r;
      public:
         void set(double e, double y, double z){ p.set(e,y); r=z;}
         Titik getPusat(){ return p; }
         double getR(){ return r; }
         double luas(){
            return 3.14*r*r;
             }
        double keliling(){
            return 2*3.14*r;
            }
   };
    
 class Segitiga {
      Titik e,y,z;
      public:
        void set(double a, double b, double c, double d, double u, double f){e.set(a,b); y.set(c,d); z.set(u,f);}
        double euclid(Titik t1, Titik t2) {
            double t = (t1.getE()-t2.getE())*(t1.getE()-t2.getE());
            t += (t1.getY()-t2.getY())*(t1.getY()-t2.getY());
            return sqrt(t);
         }
        double luas(){
            double s,tot;
            s=keliling()/2;
            tot=sqrt(s*(s-euclid(e,y))*(s-euclid(y,z))*(s-euclid(z,e)));
            return tot;
            }
        double keliling(){ 
            double sum=0;
            sum+=euclid(e,y);
            sum+=euclid(y,z);
            sum+=euclid(z,e);
            return sum;
            }
   };
    
 int main(){
     int i,n,m,count[4]={0};
     double a,b,c,d,u,f,sumk=0,suml=0;
     cin>>n>>m;
     Lingkaran l[n];
     for(i=0;i<n;i++){
        cin>>a>>b>>c;
        l[i].set(a,b,c);
        suml+=l[i].luas();
        sumk+=l[i].keliling();
        }
    for(i=0;i<n;i++){
        if(l[i].luas()>(suml/n))count[0]++;
        if(l[i].keliling()>(sumk/n))count[2]++;
        }
         
    sumk=0;suml=0;
         
    Segitiga s[m];
    for(i=0;i<m;i++){
        cin>>a>>b>>c>>d>>u>>f;
        s[i].set(a,b,c,d,u,f);
        suml+=s[i].luas();
        sumk+=s[i].keliling();
    }
    for(i=0;i<m;i++){
        if(s[i].luas()>(suml/m))count[1]++;
        if(s[i].keliling()>(sumk/m))count[3]++;
        }
      
         cout<<count[0]<<" "<<count[1]<<endl;
         cout<<count[2]<<" "<<count[3]<<endl;
      
 }

MENJUMLAH KANDUNGAN BILANGAN
#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

///pilihan menu
class bilangan{
	public:
	float x,y;
	
	float jumlah(float x,float y){
		return(x+y);}
	float kurang(float x,float y){
		return (x-y);}
	float kali(float x,float y){
		return(x*y);}
	float bagi(float x,float y){
		if(y!=0)
		return (x/y);
		else
			return (x/1);}
		};
		
	int main(){
		double menu,c1,c2,hasil;
		bilangan test;
		/*cout << "MENU" << endl;
		 * cout << "1. jumlah" << endl;
		 * cout << "2. kurang" <<endl;
		 * cout << "3. kali" << endl;
		 * cout << "4. bagi" <<endl;*/
		
	cin >> menu;
	while(menu != 9){
		cin >> c1 >>c2;
		if(menu==1)
		hasil=test.jumlah(c1,c2);
		else if(menu==2)
		hasil=test.kurang(c1,c2);
		else if(menu==3)
		hasil=test.kali(c1,c2);
		else if(menu==4)
		hasil=test.bagi(c1,c2);
	printf("%2lf\n", hasil);
	cin >> menu;
}
return 0}

STL MAPP
#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string x;
	int a=0, b=0;
	map <string, int> y;
	map <string, int>::iterator it;
	while(cin >> x)
	{
		if (x!="<TEXT>" && x!="</TEXT>" && x!=":" && x!="." && x!="," && x!="-" && x!="(" && x!=")" && x!=";")
		{
			for(int i=0;i<x.length();i++)
			{
				if (x[i]==':' || x[i]=='.' || x[i]==',' || x[i]=='-' || x[i]=='(' || x[i]==')' || x[i]==';')
				{
					x.erase(x.begin()+i);
					i--;
				}
				x[i]=tolower(x[i]);
			}
			if (x.length()>=3) y[x]++;
		}
	}
	for(it=y.begin(); it!=y.end(); it++)
	{
		if (it->second < 3) a++;
		if (it->second > 3) b++;
	}
	cout << b << " " << a << endl;
}

STL VEKTOR
#include <iostream>
#include <cstdio>
#include <vector>
#include <cstdlib>
 
using namespace std;
 int main(){
    std::ios::sync_with_stdio(false);
    vector <int> v;
    int i, lm;
    int a, c=0;
    double avg1, avg2;
    while(1) {
  cin >> a;
  if (a==-9) break;
  v.push_back(a);}
    
  int sum=0;
  lm = v.size();
  for (i=0;i<v.size();i++) {
        
  sum+=v[i]; }
  avg1=1.0*sum/v.size(); 
  while(1) {
       
        cin >> a;
        if (a==-9) break;
        else{
        v.erase(v.begin()+(a-1-c));
        c++; } }
    
    sum=0;
    for (i=0;i<v.size();i++){
    sum+=v[i]; }
  
    avg2=1.0*sum/v.size();
    printf("%d %d\n", lm, v.size());
    if (v.size()==0) printf("%.2lf -9.99\n", avg1);
    else printf("%.2lf %.2lf\n", avg1, avg2);}

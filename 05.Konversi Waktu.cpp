#include <iostream>
using namespace std;
int main ()
{
    long detik,menit,jam,hari;
    cout<< "Konversi Detik Ke Menit, Jam, Hari\n";
    cout<< "==================================\n";
    cout<< "Input satuan detik :\n";cin>>detik;
    cout<< "\n";
    hari=detik/86400;
    jam=detik/3600;
    menit=detik/60;
    cout<< "Sama Deengan :\n";
    cout<< "====>"<<hari<<"hari\n";
    cout<< "====>"<<jam<<"jam\n";
    cout<< "====>"<<menit<<"menit\n";
     char LG;
    cout<<"\n \n\n Apakah anda ingin mengulang program ini kembali [ Y/T ] ?";cin>>LG;
if (LG=='Y' || LG=='y')main();
else if (LG=='T' || LG=='t') goto x;
x:
    return 0;
}

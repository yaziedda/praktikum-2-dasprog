#include <iostream>

using namespace std;

void task1(){
    cout << "\nKonversi uang dengan kurs\n";

    int kurs, uang, jumlah;
    cout << "Masukan kurs dolar : $ "; cin>>kurs;
    jumlah = uang / kurs;
    cout << "Masukan jumlah uang yang akan di konversi : Rp. ";cin >> uang;
    cout << "\n";
    cout << "Hasil konversi adalah $ "; cout << jumlah;
    cout << "\n";
}

void task2(){
    cout << "\nMenghitung jumlah dan rata rata nilai matakuliah\n";

    // deklarasi
    int mt1, mt2, mt3, mt4, mt5, jumlah_mt, jumlah_hasil_mt, hasil;

    // input jumlah mt
    jumlah_mt = 5;

    cout << "Masukan nilai ke 1 : "; cin >> mt1;
    cout << "Masukan nilai ke 2 : "; cin >> mt2;
    cout << "Masukan nilai ke 3 : "; cin >> mt3;
    cout << "Masukan nilai ke 4 : "; cin >> mt4;
    cout << "Masukan nilai ke 5 : "; cin >> mt5;

    // proses
    jumlah_hasil_mt = mt1+mt2+mt3+mt4+mt5;
    hasil = jumlah_hasil_mt / jumlah_mt;

    cout << "\n";
    cout << "Hasil jumlah nilai : "; cout << jumlah_hasil_mt; cout << "\n";
    cout << "Hasil nilai rata rata adalah : "; cout << hasil;
    cout << "\n";

}

void task3(){
    cout << "\nMenghitung luas segitita\n";
    int alas, tinggi, jumlah;

    cout << "Masukan nilai alas : "; cin >> alas;
    cout << "Masukan nilai tinggi : "; cin >> tinggi;
    jumlah = alas * tinggi / 2;
    cout << "\n";
    cout << "Jumlah luas segitiga adalah : "; cout << jumlah;
    cout << "\n";
}

void task4(){
    cout << "\nMenghitung luas lingkaran\n";
    float phi, luas, jarijari;

    phi = 3.14;


    cout << "Masukan nilai jari jari : "; cin >> jarijari;
    luas = phi * jarijari * jarijari;
    cout << "\n";
    cout << "Jumlah luas lingkaran adalah : "; cout << luas;
    cout << "\n";
}

void task5(){
    cout << "\nMembuat Struk Belanja\n\n";

    int barang1, barang2, barang3, barang4, barang5, barang6;
    string nmbarang1, nmbarang2, nmbarang3, nmbarang4, nmbarang5, nmbarang6;
    nmbarang1 = "Roti Isi";
    nmbarang2 = "Susu Murni";
    nmbarang3 = "Rinso Cair";
    nmbarang4 = "Teh Botol";
    nmbarang5 = "Kopi Susu";
    nmbarang6 = "Nuget";

    barang1 = 10000;
    barang2 = 5000;
    barang3 = 8000;
    barang4 = 5000;
    barang5 = 1000;
    barang6 = 15000;

    cout << "=============== SELAMAT DATANG DI DIZZAY MART ===============\n";
    cout << "=============================================================\n";
    cout << "===============        Barang tersedia :      ===============\n";
    cout << "=============================================================\n";
    cout << "===============  1. ";cout<<nmbarang1;cout<<"     : Rp. ";cout<<barang1;cout<<"  ===============\n";
    cout << "===============  2. ";cout<<nmbarang2;cout<<"   : Rp. ";cout<<barang2;cout<<"   ===============\n";
    cout << "===============  3. ";cout<<nmbarang3;cout<<"   : Rp. ";cout<<barang3;cout<<"   ===============\n";
    cout << "===============  4. ";cout<<nmbarang4;cout<<"    : Rp. ";cout<<barang4;cout<<"   ===============\n";
    cout << "===============  5. ";cout<<nmbarang5;cout<<"    : Rp. ";cout<<barang5;cout<<"   ===============\n";
    cout << "===============  6. ";cout<<nmbarang6;cout<<"        : Rp. ";cout<<barang6;cout<<"  ===============\n";
    cout << "=============================================================\n";
    cout << "=============================================================\n";
    cout << "=============================================================\n";

    int kodebarang, total, qty, totalsementara1, totalsementara2, totalsementara3, totalsementara4, totalsementara5, totalsementara6;
    total = 0;
    totalsementara1 = 0;
    totalsementara2 = 0;
    totalsementara3 = 0;
    totalsementara4 = 0;
    totalsementara5 = 0;
    totalsementara6 = 0;
    string select;
    bool tersedia;
    time_t now = time(0);
    char* dt = ctime(&now);
    do{
        kodebarang = 0;
        qty = 1;
        tersedia = true;

        cout << "Masukan kode barang : "; cin >> kodebarang;
        switch(kodebarang){
        case 1:
            cout << "\n";
            cout << "Nama barang : "; cout<< nmbarang1;cout<<" \nHarga : Rp.";cout<<barang1;
            cout << "\nBerapa banyak : "; cin >> qty;
            totalsementara1 = barang1 * qty;
            total = total + totalsementara1;
            cout << "Total : Rp. "; cout << totalsementara1;
            cout << "\nTotal Belanja : Rp. "; cout << total;
            break;
        case 2:
            cout << "\n";
            cout << "Nama barang : "; cout<< nmbarang2; cout<<" \nHarga : Rp."; cout<<barang2;
            cout << "\nBerapa banyak : "; cin >> qty;
            totalsementara2 = barang2 * qty;
            total = total + totalsementara2;
            cout << "Total : Rp. "; cout << totalsementara2;
            cout << "\nTotal Belanja : Rp. "; cout << total;
            break;
        case 3:
            cout << "\n";
            cout << "Nama barang : "; cout<< nmbarang3;cout<<" \nHarga : Rp.";cout<<barang3;
            cout << "\nBerapa banyak : "; cin >> qty;
            totalsementara3 = barang3 * qty;
            total = total + totalsementara3;
            cout << "Total : Rp. "; cout << totalsementara3;
            cout << "\nTotal Belanja : Rp. "; cout << total;
            break;
        case 4:
            cout << "\n";
            cout << "Nama barang : "; cout<< nmbarang4;cout<<" \nHarga : Rp.";cout<<barang4;
            cout << "\nBerapa banyak : "; cin >> qty;
            totalsementara4 = barang4 * qty;
            total = total + totalsementara4;
            cout << "Total : Rp. "; cout << totalsementara4;
            cout << "\nTotal Belanja : Rp. "; cout << total;
            break;
        case 5:
            cout << "\n";
            cout << "Nama barang : "; cout<< nmbarang5;cout<<" \nHarga : Rp.";cout<<barang5;
            cout << "\nBerapa banyak : "; cin >> qty;
            totalsementara5 = barang5 * qty;
            total = total + totalsementara5;
            cout << "Total : Rp. "; cout << totalsementara5;
            cout << "\nTotal Belanja : Rp. "; cout << total;
            break;
        case 6:
            cout << "\n";
            cout << "Nama barang : "; cout<< nmbarang6;cout<<" \nHarga : Rp.";cout<<barang6;
            cout << "\nBerapa banyak : "; cin >> qty;
            totalsementara6 = barang6 * qty;
            total = total + totalsementara6;
            cout << "Total : Rp. "; cout << totalsementara6;
            cout << "\nTotal Belanja : Rp. "; cout << total;
            break;
        default:
            tersedia = false;
            cout << "Barang tidak terdatar\n";
        }

        if(tersedia){

                cout << "\n\nAda transaksi lagi ? (y/n) : "; cin>>select;
                if(select == "n"){
                    cout << "=============================================================\n";
                    cout << "================= STRUK BELANJA DIZZAY MART =================\n";
                    cout << "=============================================================\n";
                    cout << "==================================== " << dt;
                    cout << "=============================================================\n";
                    cout << "===============        Barang Terbeli :       ===============\n";
                    cout << "=============================================================\n";
                    cout << "===== Nama Barang ====== Jumlah ======= Total \n";
                    if(totalsementara1 != 0){
                            cout << "===== " << nmbarang1 <<"    ======    " << totalsementara1/barang1 <<"   ======= Rp. "<< totalsementara1<<" \n";
                    }
                    if(totalsementara2 != 0){
                            cout << "===== " << nmbarang2 <<"  ======    " << totalsementara2/barang2 <<"   ======= Rp. "<< totalsementara2<<" \n";
                    }
                    if(totalsementara3 != 0){
                            cout << "===== " << nmbarang3 <<"  ======    " << totalsementara3/barang3 <<"   ======= Rp. "<< totalsementara3<<" \n";
                    }
                    if(totalsementara4 != 0){
                            cout << "===== " << nmbarang4 <<"   ======    " << totalsementara4/barang4 <<"   ======= Rp. "<< totalsementara4<<" \n";
                    }

                    if(totalsementara5 != 0){
                            cout << "===== " << nmbarang5 <<"   ======    " << totalsementara5/barang5 <<"   ======= Rp. "<< totalsementara5<<" \n";
                    }
                    if(totalsementara6 != 0){
                            cout << "===== " << nmbarang6 <<"       ======    " << totalsementara6/barang6 <<"   ======= Rp. "<< totalsementara6<<" \n";
                    }
                    cout << "=============================================================\n";
                    cout << "=========================== TOTAL BAYAR : Rp. " << total << "\n";
                    cout << "=============================================================\n";
                    cout << "=============================================================\n";
                    cout << "=============================================================\n";
                    break;
                }

        }

    }while(true);
}

void select(int task){
    switch(task){
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;
    case 4:
        task4();
        break;
    case 5:
        task5();
        break;
    default:
        cout << "Pilihan hanya 1 - 5 : ";cin>> task;
        select(task);
        break;
    }
}

int main()
{
    int task;

    cout << "Tugas Modul Praktikum 2" << endl;
    cout << "1. Konversi uang sesuai kurs" << endl;
    cout << "2. Menghitung jumlah rata-rata dari 5 nilai matakuliah" << endl;
    cout << "3. Menghitung luas segitiga" << endl;
    cout << "4. Menghitung luas lingkaran" << endl;
    cout << "5. Struk belanja barang" << endl;
    cout << "Pilih program yang akan diuji : "; cin >> task;
    select(task);
    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int navigasi;
    int nisn;
    string namalengkap;
    string ttl;
    string namaayah;
    string namaibu;
    string prodi;
    string jeniskelamin;
    string alamat;
    float hasilun;
    char lanjut;
    char ujianopsi;

    home:
    cout << "---------------[Program Penerimaan Mahasiswa Baru]---------------" << endl;
    cout << "UNIVERSITAS MUHAMMADIYAH PURWOREJO" << endl;
    cout << "Purworejo, Kec. Purworejo, Kabupaten Purworejo, Jawa Tengah 54151" << endl;
    cout << "https://www.umpwr.ac.id/" << endl;
    cout << "-----------------------------------------------------------------" << endl;

    cout << "" << endl;
    cout << "Selamat Datang Calon Mahasiswa Baru Universitas Muhammadiyah Purworejo Tahun 2022/2023" << endl;
    cout << "Menu Opsi Yang Tersedia" << endl;
    cout << "1. Pendaftaran Mahasiswa Baru" << endl;
    cout << "2. Ujian Masuk Mahasiswa Baru" << endl;
    cout << "3. Validasi Data Mahasiswa Baru" << endl;
    cout << "Pilih Menu Anda(1/2/3) :";
    cin >> navigasi;

    switch(navigasi){
    case 1:{system("cls");}
        cout << "---------------[Program Penerimaan Mahasiswa Baru]---------------" << endl;
        cout << "UNIVERSITAS MUHAMMADIYAH PURWOREJO" << endl;
        cout << "Purworejo, Kec. Purworejo, Kabupaten Purworejo, Jawa Tengah 54151" << endl;
        cout << "https://www.umpwr.ac.id/" << endl;
        cout << "-----------------------------------------------------------------" << endl;

        cout << "" << endl;
        cout << "Masukkan Nama Lengkap Anda :";
        getline(cin >> ws, namalengkap);
        cout << "Tempat, Tanggal Lahir :";
        getline(cin >> ws, ttl);
        cout << "Masukkan Nama Ayah :";
        getline(cin >> ws, namaayah);
        cout << "Masukkan Nama Ibu :";
        getline(cin >> ws, namaibu);
        cout << "Jenis Kelamin Anda :";
        getline(cin >> ws, jeniskelamin);
        cout << "Masukkan Alamat Anda :";
        getline(cin >> ws, alamat);
        cout << "Tujuan Program Pendidikan :";
        getline(cin >> ws, prodi);
        cout << "Masukkan NISN Anda :";
        cin >> nisn;
        cout << "Masukkan Hasil Ujian Nasional Anda :";
        cin >> hasilun;
        cout << "-----------------------------------------------------------------" << endl;
        cout << "Data Anda Sudah Berhasil Terdaftar, Silahkan Ketik (Y/y) Untuk Lanjut." << endl;
        cout << "-----------------------------------------------------------------" << endl;
        tanya:
        cin >> lanjut;
        if (lanjut=='y' || lanjut=='Y')
        {
            goto home;
        } else {
            cout << "-----------------------------------------------------------------" << endl;
            cout << "Anda Salah Ketik!, Silahkan Ketik (Y/y) Untuk Lanjut." << endl;
            cout << "-----------------------------------------------------------------" << endl;
            goto tanya;
        }
        break;
    case 2:{system("cls");}
        cout << "---------------[Program Penerimaan Mahasiswa Baru]---------------" << endl;
        cout << "UNIVERSITAS MUHAMMADIYAH PURWOREJO" << endl;
        cout << "Purworejo, Kec. Purworejo, Kabupaten Purworejo, Jawa Tengah 54151" << endl;
        cout << "https://www.umpwr.ac.id/" << endl;
        cout << "-----------------------------------------------------------------" << endl;

        cout << "" << endl;
        cout << "Selamat Datang " << namalengkap << " Sebagai Calon Mahasiswa Baru Universitas Muhammadiyah Purworejo." << endl;
        cout << "Sebagai Syarat Pembagian Kelas, Calon Mahasiswa Baru Diwajibkan Untuk Melaksanakan Ujian Masuk." << endl;
        cout << "Apabila Anda Sudah Siap Untuk Mengerjakan Ujian Silhakan Ketik (Y/y) Apabila Ingin Kembali Ke Menu Awal Silahkan Ketik (N/n).";
        tanya2:
        cin >> ujianopsi;

    break;
    }

    return 0;
}

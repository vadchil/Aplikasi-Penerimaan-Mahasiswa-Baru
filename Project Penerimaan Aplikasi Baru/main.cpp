#include <iostream>

using namespace std;

int main()
{
    string namalengkap[100], alamat[100], ttl[100], nisn[100], prodi[100], hasilseleksi[100];
    int larikincrement=0, opsihomepage, verifid, idmahasiswa[100], skorujian=0, verifid_data, finalskor[100];
    float hasilun[100];
    char opsisatu, jawabansatu, jawabandua, jawabantiga, jawabanempat, jawabanlima;

homepage:
    cout << "=================================" << endl;
    cout << "PROGRAM PENERIMAAN MAHASISWA BARU" << endl;
    cout << "=================================" << endl;

    cout << endl;

    cout << "Silahkan pilih opsi dibawah ini menggunakan nomer untuk lanjut." << endl;
    cout << "(1) Pendaftaran Mahasiswa Baru" << endl;
    cout << "(2) Mengerjakan Ujian Mahasiswa Baru" << endl;
    cout << "(3) Pengecekan Data Mahasiswa Baru" << endl;
    cout << "Masukkan opsi anda : ";
    cin >> opsihomepage;

    switch (opsihomepage)
    {
    case 1:
        system("cls");
        larikincrement++;
        idmahasiswa[larikincrement] = larikincrement;
        cout << "==========================" << endl;
        cout << "PENDAFTARAN MAHASISWA BARU" << endl;
        cout << "==========================" << endl;

        cout << endl;

        cout << "Masukkan Nama Lengkap Anda : ";
        getline(cin >> ws, namalengkap[larikincrement]);
        cout << "Masukkan Alamat Anda : ";
        getline(cin >> ws, alamat[larikincrement]);
        cout << "Masukkan Tempat, Tanggal Lahir Anda : ";
        getline(cin >> ws, ttl[larikincrement]);
        cout << "Masukkan NISN Anda : ";
        getline(cin >> ws, nisn[larikincrement]);
        cout << "Masukkan Tujuan Prodi Anda : ";
        getline(cin >> ws, prodi[larikincrement]);
        cout << "Masukkan Hasil Ujian Nasional Anda : ";
        cin >> hasilun[larikincrement];
        if((hasilun[larikincrement] >= 60 ) && (hasilun[larikincrement] <= 100))
        {
            system("cls");
            hasilseleksi[larikincrement] = "Lulus";
            cout << "==================" << endl;
            cout << "CONGRATULATIONS!!!" << endl;
            cout << "==================" << endl;

            cout << endl;

            cout << "Selamat Anda Sudah Diterima Menjadi Mahasiswa Baru Tanpa Mengikuti Ujian Masuk!!!" << endl;
            cout << "Harap Catat ID Pendaftaran Anda Untuk Pengecekan Data Mahasiswa Baru Anda!!!" << endl;

            cout << endl;

            cout << "=======================" << endl;
            cout << "ID Pendaftaran Anda : " << idmahasiswa[larikincrement] << endl;
            cout << "=======================" << endl;

opsisatu:
            cout << "Mohon Ketik (Y/y) Untuk Kembali Ke Halaman Awal : ";
            cin >> opsisatu;

            if(opsisatu == 'y' || opsisatu == 'Y')
            {
                system("cls");
                goto homepage;
            }
            else
            {
                goto opsisatu;
            }
        }
        else
        {
            system("cls");
            cout << "===================================" << endl;
            cout << "SEMANGAT, MASIH ADA KESEMPATAN LAGI" << endl;
            cout << "===================================" << endl;

            cout << endl;

            cout << "Dikarenakan Hasil Ujian Nasional Anda Tidak Memenuhi Persyaratan Masuk, Anda Diharuskan Menempuh Ujian Masuk." << endl;
            cout << "Anda Bisa Mengerjakan Ujian Masuk Di Halaman Awal." << endl;
            cout << "Harap Catat ID Pendaftaran Anda Untuk Mengerjakan Ujian Masuk dan Pengecekan Data Mahasiswa Baru" << endl;

            cout << endl;

            cout << "=======================" << endl;
            cout << "ID Pendaftaran Anda : " << idmahasiswa[larikincrement] << endl;
            cout << "=======================" << endl;

            cout << endl;

opsidua:
            cout << "Mohon Ketik (Y/y) Untuk Kembali Ke Halaman Awal : ";
            cin >> opsisatu;

            if(opsisatu == 'y' || opsisatu == 'Y')
            {
                system("cls");
                goto homepage;
            }
            else
            {
                goto opsidua;
            }
        }
        break;
    case 2:
opsitiga:
        system("cls");
        cout << "==============================================" << endl;
        cout << "SELAMAT DATANG PADA UJIAN MASUK MAHASISWA BARU" << endl;
        cout << "==============================================" << endl;

        cout << endl;

        cout << "Harap Masukkan ID Pendaftaran Anda : ";
        cin >> verifid;
        if(verifid==idmahasiswa[verifid])
        {
            skorujian=skorujian*0;
            system("cls");
            cout << "================================" << endl;
            cout << "UJIAN MASUK CALON MAHASISWA BARU" << endl;
            cout << "================================" << endl;

            cout << endl;

            cout << "Selamat Datang " << namalengkap[verifid] << endl;

            cout << endl;

            cout << "Pada Ujian Masuk Terdapat 5 Soal Dengan Tipe Pilihan Ganda, Harap Pilih Jawaban Yang Tepat. Apabila Nilai Anda Kurang Dari 80 Maka Anda Tidak Lolos Ujian Mahasiswa Baru." << endl;
            cout << "Harap Jawab Pertanyaan Dibawah Ini Hanya Dengan Alphabet Saja, Benar Skor +20 Salah Skor +0." << endl;

            cout << endl;

            cout << "1. Berikut pejuang proklamasi Indonesia kecuali?" << endl;
            cout << "a. Ir. Soekarno        b. Achmad Soebardjo" << endl;
            cout << "c. Moh. Hatta          d. Hasanudin" << endl;
            cout << "Jawaban Anda Adalah : ";
            cin >> jawabansatu;
            if(jawabansatu=='d')
            {
                finalskor[verifid]= skorujian++;
            }

            cout << endl;

            cout << "2. Yang mengetik naskah proklamasi Indonesia adalah?" << endl;
            cout << "a. Sayuti Melik        b. Siti Fatmawati" << endl;
            cout << "c. Irma Wati           d. Sukmawati" << endl;
            cout << "Jawaban Anda Adalah : ";
            cin >> jawabandua;
            if(jawabandua=='a')
            {
                finalskor[verifid]= skorujian++;
            }

            cout << endl;

            cout << "3. Fungsi rongga rantai pada bunga teratai adalah?" << endl;
            cout << "a. membawa oksigen ke daun      b. membawa oksigen ke batang dan akar" << endl;
            cout << "c. membawa oksigen ke batang    d. membawa oksigen ke bunga" << endl;
            cout << "Jawaban Anda Adalah : ";
            cin >> jawabantiga;
            if(jawabantiga=='b')
            {
                finalskor[verifid]= skorujian++;
            }

            cout << endl;

            cout << "4. Makna proklamasi kemerdekaan Indonesia, kecuali?" << endl;
            cout << "a. Sebagai Puncak Perjuangan bangsa Indonesia     b. Pengakuan Kepada Dunia Luar" << endl;
            cout << "c. Menaikkan Martabat Bangsa                      d. persatuan rakyat Indonesia" << endl;
            cout << "Jawaban Anda Adalah : ";
            cin >> jawabanempat;
            if(jawabanempat=='d')
            {
                finalskor[verifid]= skorujian++;
            }

            cout << endl;

            cout << "5. Gerakan persatuan Bangsa Indonesia adalah?" << endl;
            cout << "a. Sumpah Pemuda         b. Kebangkitan Bangsa" << endl;
            cout << "c. Proklamasi nasioal    d. Persatuan Indonesia" << endl;
            cout << "Jawaban Anda Adalah : ";
            cin >> jawabanlima;
            if(jawabanlima=='a')
            {
                finalskor[verifid]= skorujian++;
            }
            finalskor[verifid] = skorujian * 20;

            system("cls");
            cout << "=================" << endl;
            cout << "HASIL UJIAN MASUK" << endl;
            cout << "=================" << endl;

            cout << endl;

            cout << "Skor Ujian Anda Adalah : " << finalskor[verifid] << endl;
            if(finalskor[verifid]<80)
            {
                cout << "Mohon Maaf Anda Belum Lulus Ujian Masuk, Silahkan Mencoba Lagi Tahun Depan Hehe." << endl;
                hasilseleksi[verifid] = "Tidak Lulus";

                cout << endl;

                goto homepage;
            }
            else
            {
                cout << "Selamat, Anda Telah Lulus Ujian Masuk. Silahkan Cek Data Mahasiswa Anda Di Halaman Utama." << endl;
                hasilseleksi[verifid] = "Lulus";

                cout << endl;

                goto homepage;
            }
        }
        else
        {
            cout << "ID Pendaftaran Anda Tidak Ada, Harap Mendaftar Terlebih Dahulu." << endl;

            cout << endl;

            goto homepage;
        }
        break;
    case 3:
opsiempat:
        system("cls");
        cout << "==============================" << endl;
        cout << "PENGECEKAN DATA MAHASISWA BARU" << endl;
        cout << "==============================" << endl;

        cout << endl;

        cout << "Harap Masukkan ID Pendaftaran Anda : ";
        cin >> verifid_data;
        if(verifid_data==idmahasiswa[verifid_data])
        {
            if(hasilseleksi[verifid_data]=="Lulus")
            {
                system("cls");
                cout << "===================" << endl;
                cout << "DATA MAHASISWA BARU" << endl;
                cout << "===================" << endl;

                cout << endl;

                cout << "Nama Lengkap          : " << namalengkap[verifid_data] << endl;
                cout << "Alamat                : " << alamat[verifid_data] << endl;
                cout << "Tempat, Tanggal Lahir : " << ttl[verifid_data] << endl;
                cout << "NISN                  : " << nisn[verifid_data] << endl;
                cout << "Program Pendidikan    : " << prodi[verifid_data] << endl;
                cout << "Hasil Ujian Nasional  : " << hasilun[verifid_data] << endl;
                cout << "Status Seleksi        : " << hasilseleksi[verifid_data] << endl;
                cout << endl;
                goto homepage;
            }
            else
            {
                cout << "Nilai Ujian Anda Tidak Memenuhi Syarat atau Anda Belum Menyelesaikan Ujian Masuk" << endl;

                cout << endl;

                goto homepage;
            }
        }
        else
        {
            cout << "ID Pendaftaran Anda Tidak Ada, Harap Mendaftar Terlebih Dahulu." << endl;

            cout << endl;

            goto homepage;
        }
        break;
    default:
        system("cls");
        goto homepage;

    }
    return 0;
}

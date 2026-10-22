  #include <iostream>
using namespace std;

int main() {
    int pilihan;
    int kembali;

    while (true) {
        cout << "================================================================" << endl;
        cout << "          DAFTAR NARASUMBER WAWANCARA MABA" << endl;
        cout << "================================================================" << endl;
        cout << "1.  Narasumber 1  (Ananda Vektorino Ibrahim) " << endl;
        cout << "2.  Narasumber 2  (Chairil Fikri) " << endl;
        cout << "3.  Narasumber 3  (Younove Dewa Brata) " << endl;
        cout << "4.  Narasumber 4  (Marva) " << endl;
        cout << "5.  Narasumber 5  (Thalita Syifa) " << endl;
        cout << "6.  Narasumber 6  () " << endl;
        cout << "7.  Narasumber 7  () " << endl;
        cout << "8.  Narasumber 8  (Eileen Valescha) " << endl;
        cout << "9.  Narasumber 9  (Salsabila Yufli Ramadhani) " << endl;
        cout << "10.  Narasumber 10  (Pinto Mande Mantofani) " << endl;
        cout << "11.  Narasumber 11  (Krisna Mus'ad Zein) " << endl;
        cout << "12.  Narasumber 12  () " << endl;
        cout << "13.  Narasumber 13  () " << endl;
        cout << "14.  Narasumber 14  () " << endl;
        cout << "15.  Narasumber 15  () " << endl;
        cout << "================================================================" << endl;
        cout << "Pilih nomor narasumber (1-15): ";
        cin >> pilihan;


        switch (pilihan) {
            case 1:
                cout << "\n--- Hasil Wawancara Narasumber 1 ---" << endl;
                cout << "Nama        : Ananda Vektorino Ibrahim" << endl;
                cout << "Kategori    : Akademik" << endl;
                cout << "Bidang      : Lomba" << endl;
                cout << "Insight     : Vektor sangat tertarik pada software development sejak kecil, sehingga memilih lomba di" << endl;
                cout << "              bidang itu. Selama kuliah ia baru mengikuti dua lomba dan belum juara: Beraksi (UI/UX), di" << endl;
                cout << "              mana ia lolos sebagai finalis meski kalah pengalaman dari angkatan 2022 dan 2023, serta" << endl;
                cout << "              Veteranity Beraksi (Web Development), di mana ia gugur di kualifikasi karena terlambat mendaftar." << endl << endl;
                cout << "              Menurut Vektor, lomba menjadi sarana belajar mandiri yang mengajarkan lebih banyak" << endl;
                cout << "              daripada kelas formal, mulai dari struktur folder standar industri hingga framework seperti" << endl;
                cout << "              React dan Laravel. Awalnya ia tidak berniat aktif berorganisasi karena Sistem Informasi" << endl;
                cout << "              adalah pilihan ketiganya, tetapi rasa ingin mencoba hal baru mendorongnya ikut lomba," << endl;
                cout << "              hima, dan komunitas 124. Setelah membantu teman belajar React, ia pun" << endl;
                cout << "              mempertimbangkan menjadi Aslab." << endl << endl;
                cout << "              Vektor menyarankan mahasiswa baru untuk mengenali minat lebih dulu," << endl;
                cout << "              mempertimbangkan tujuan akhir saat berorganisasi, belajar mandiri tanpa hanya" << endl;
                cout << "              mengandalkan kelas formal, dan siap belajar dalam kondisi apa pun, termasuk di bawah tekanan." << endl;
                break;
            case 2:
                cout << "\n--- Hasil Wawancara Narasumber 2 ---" << endl;
                cout << "Nama        : Chairil Fikri" << endl;
                cout << "Kategori    : Improvement" << endl;
                cout << "Bidang      : UKM Fotografi" << endl;
                cout << "Insight     : Fiki sudah akrab dengan kamera sejak SMA dan bergabung dengan UKM Fotografi sejak" << endl;
                cout << "              semester pertama untuk belajar lebih dalam." << endl << endl;
                cout << "              Keaktifannya di expo, pameran, dan berbagai kegiatan membuatnya ditarik menjadi" << endl;
                cout << "              pengurus inti, dan kini ia menjabat Wakil Koordinator Markom Eksternal." << endl << endl;
                cout << "              Karena hanya mengikuti satu UKM dengan kegiatan di akhir pekan, Fiki bisa membagi" << endl;
                cout << "              waktu dengan baik antara kuliah dan organisasi." << endl;
                cout << "              Manfaat terbesar yang ia rasakan adalah relasi lintas prodi dan fakultas yang jauh lebih luas." << endl << endl;
                cout << "              Fiki sempat kaget karena mengira UKM hanya untuk bersenang-senang, padahal ada" << endl;
                cout << "              tanggung jawab kepengurusan yang besar." << endl;
                cout << "              Kamera pribadi dan posisinya sebagai pengurus eksternal memberinya banyak" << endl;
                cout << "              kesempatan berlatih, termasuk di kepanitiaan besar seperti PKKBN." << endl << endl;
                cout << "              Fiki menyarankan mahasiswa baru untuk mencari tahu apa yang benar-benar mereka" << endl;
                cout << "              sukai, lalu memaksimalkan potensinya dan tidak takut mencoba hal baru." << endl;

                break;
            case 3:
                cout << "\n--- Hasil Wawancara Narasumber 3 ---" << endl;
                cout << "Nama        : Younove Dewa Brata" << endl;
                cout << "Kategori    : Organisasi" << endl;
                cout << "Bidang      : HIMASISFO Humas" << endl;
                cout << "Insight     : Younove awalnya ingin masuk BEM Fakultas, tetapi gagal karena bentrok dengan" << endl;
                cout << "              kesibukan berjualan dan belum siap wawancara. Setelah diajak fasilitatornya, ia mencoba" << endl;
                cout << "              HIMASISFO dan memilih Divisi Humas sebagai “wajah utama” organisasi, tempat koordinasi dengan pihak luar bermula." << endl << endl;
                cout << "              Di Humas, Younove mendapat banyak relasi lintas jurusan dan belajar memahami berbagai" << endl;
                cout << "              karakter orang. Tantangan awalnya adalah komunikasi yang kurang rapi, rasa malu" << endl;
                cout << "              bertemu banyak orang, dan kurang tidur, tetapi kemampuan public speaking-nya kini jauh" << endl;
                cout << "              membaik. Ia membagi waktu dengan menempatkan akademik di prioritas pertama, lalu" << endl;
                cout << "              menjadwalkan organisasi setelah tugas kuliah selesai." << endl << endl;
                cout << "              Younove menyarankan mahasiswa baru untuk memprioritaskan akademik dan IPK, serta" << endl;
                cout << "              memilih organisasi secara bijak: BEM Fakultas untuk skala dan relasi yang lebih luas, atau" << endl;
                cout << "              HIMASISFO untuk lebih akrab dengan program studi sendiri." << endl;
                break;
            case 4: 
                cout << "\n--- Hasil Wawancara Narasumber 4 ---" << endl;
                cout << "Nama        : Marva" << endl;
                cout << "Kategori    : Improvement" << endl;
                cout << "Bidang      : UKM Marching Band" << endl;
                cout << "Insight     : Marva sudah tertarik pada marching band sejak TK, dan adanya UKM Marching Band di" << endl;
                cout << "              kampus mendorongnya melanjutkan minat itu. Meski tidak punya latar belakang musik" << endl;
                cout << "              yang mendalam (hanya pernah memainkan snare saat TK), kini ia memegang posisi trompet." << endl << endl;
                cout << "              Membagi waktu terasa susah-susah gampang: latihan rutin berlangsung malam hari" << endl;
                cout << "              setelah maghrib hingga pukul 21.00 WIB, dan meningkat menjadi setiap hari saat persiapan" << endl;
                cout << "              lomba. Manfaat yang ia rasakan adalah relasi yang lebih luas dengan teman dari luar" << endl;
                cout << "              program studi serta berkembangnya keterampilan diri." << endl << endl;
                cout << "              Di semester awal Marva hanya fokus pada latihan rutin, lalu di semester lanjut tanggung" << endl;
                cout << "              jawabnya bertambah dengan menjadi bagian kepanitiaan acara. Ia merekomendasikan" << endl;
                cout << "              bergabung sejak semester pertama karena adaptasi dan pengalaman yang didapat lebih optimal." << endl;   
                break;
            case 5: 
                cout << "\n--- Hasil Wawancara Narasumber 5 ---" << endl;
                cout << "Nama        : Thalita Syifa" << endl;
                cout << "Kategori    : Improvement" << endl;
                cout << "Bidang      : Kepanitiaan" << endl;
                cout << "Insight     : Talitha sudah aktif berkepanitiaan sejak awal kuliah, dimulai sebagai staf kesehatan di" << endl;
                cout << "              panitia Getrik (OSPEK Jurusan FTI) sebanyak dua kali. Ia kemudian semakin aktif di BEM" << endl;
                cout << "              FTI, pernah menjadi Steering Committee (SC) utama di LDKO, menjabat Sekretaris 2" << endl;
                cout << "              sekaligus panitia inti di PKK FTI, dan akan terlibat di event gabungan FKBMI antar-UPN." << endl << endl;
                cout << "              Saat ini Talitha berada di staf kesekretariatan yang mengelola proposal, LPJ, dan surat izin" << endl;
                cout << "              peminjaman tempat. Tantangannya adalah koordinasi dengan semua divisi serta" << endl;
                cout << "              menangani permintaan mendadak dengan cepat dan teliti. Dari kepanitiaan, ia" << endl;
                cout << "              mengembangkan skill komunikasi, koordinasi kerja kelompok, dan pengolahan data di spreadsheet dan Word." << endl << endl;
                cout << "              Talitha menyarankan mahasiswa baru untuk tetap mengutamakan akademik, tidak terlalu" << endl;
                cout << "              banyak mengikuti kepanitiaan sampai IPK turun, dan menjadikan organisasi sebagai" << endl;
                cout << "              tempat latihan manajemen waktu." << endl;
                break;
            case 6: 
                cout << "\n--- Hasil Wawancara Narasumber 6 ---" << endl;
                cout << "Nama        : " << endl;
                cout << "Kategori    : " << endl;
                cout << "Bidang      : " << endl;
                cout << "Insight     : " << endl;
                cout << "             " << endl;
                break;
            case 7: 
                cout << "\n--- Hasil Wawancara Narasumber 7 ---" << endl;
                cout << "Nama        : " << endl;
                cout << "Kategori    : " << endl;
                cout << "Bidang      : " << endl;
                cout << "Insight     : " << endl;
                cout << "             " << endl;
                break;
            case 8: 
                cout << "\n--- Hasil Wawancara Narasumber 8 ---" << endl;
                cout << "Nama        : Eileen Valescha" << endl;
                cout << "Kategori    : Organisasi" << endl;
                cout << "Bidang      : HIMASISFO WAKADEP EKRAF" << endl;
                cout << "Insight     : Eileen memilih Himasisfo karena ingin organisasi yang lingkupnya tidak terlalu besar. Ia" << endl;
                cout << "              memulai dari staf E-Craft demi pengalaman di bidang ekonomi, lalu kini menjabat" << endl;
                cout << "              Wakadep setelah ditunjuk sebagai kandidat pengganti." << endl << endl;
                cout << "              Dari E-Craft, ia menjadi lebih teliti dan terlatih berpikir bisnis, meski tantangannya adalah" << endl;
                cout << "              ketelitian soal uang dan komunikasi dengan bendahara yang tidak selalu lancar. Ia" << endl;
                cout << "              menempatkan akademik di nomor satu dan memimpin staf dengan santai namun tetap serius saat perlu." << endl << endl;
                cout << "              Eileen menyarankan calon anggota menyiapkan mental yang dewasa: tidak membesar-" << endl;
                cout << "              besarkan masalah sepele dan tidak mendiamkan masalah besar." << endl;
                break;
            case 9: 
                cout << "\n--- Hasil Wawancara Narasumber 9 ---" << endl;
                cout << "Nama        : Salsabila Yufli Ramadhani" << endl;
                cout << "Kategori    : Akademik" << endl;
                cout << "Bidang      : Lomba" << endl;
                cout << "Insight     : Salsabila pernah mengikuti tiga lomba: Braksi (HIMASISFO), Business Plan Competition di" << endl;
                cout << "              UIN Jogja, dan BMC di UNY. Ia ikut demi sertifikat, pengalaman, dan hadiah uang tunai," << endl;
                cout << "              serta menyalurkan minatnya ke jalur bisnis karena merasa kurang mahir coding setelah" << endl;
                cout << "              terinspirasi mata kuliah Pengantar Bisnis." << endl << endl;
                cout << "              Dari lomba, ia melatih public speaking, komunikasi, dan penyusunan argumen di depan" << endl;
                cout << "              juri, belajar merumuskan ide bisnis yang menjawab masalah nyata, serta memperluas relasi dan kerja sama tim." << endl << endl;
                cout << "              Salsabila menyarankan mahasiswa baru untuk tidak takut mencoba, segera mendaftar saat" << endl;
                cout << "              ada info lomba demi menambah wawasan dan portofolio, dan memilih bidang yang diminati." << endl;
                break;
            case 10: 
                cout << "\n--- Hasil Wawancara Narasumber 10 ---" << endl;
                cout << "Nama        : Pinto Mande Mantofani" << endl;
                cout << "Kategori    : Akademik" << endl;
                cout << "Bidang      : Lomba" << endl;
                cout << "Insight     : Pinto pernah mengikuti tiga lomba: membuat game di ITB (belum menang), Game mastic" << endl;
                cout << "              secara tim, dan lomba essay secara tim di UNY yang meraih juara 3. Ia awalnya ikut karena" << endl;
                cout << "              penasaran dan menyukai game development, sedangkan lomba essay diikuti karena diajak" << endl;
                cout << "              teman dan topiknya berkaitan dengan sistem informasi." << endl << endl;
                cout << "              Tantangan terbesarnya adalah mengelola anggota tim, terutama saat menentukan ide yang" << endl;
                cout << "              berbeda-beda. Dari lomba, ia belajar mengelola waktu agar selesai sebelum deadline," << endl;
                cout << "              merasakan diuji langsung, dan melatih cara mempertahankan argumen." << endl << endl;
                cout << "              Pinto menyarankan mahasiswa baru untuk mengenali minat lebih dulu, mencari anggota" << endl;
                cout << "              tim yang sepemikiran dan kritis, serta mendalami bidang yang diminati." << endl;
                break;
            case 11:
                cout << "\n--- Hasil Wawancara Narasumber 11 ---" << endl;
                cout << "Nama        : Krisna Mus'ad Zein" << endl;
                cout << "Kategori    : Akademik" << endl;
                cout << "Bidang      : Lomba" << endl;
                cout << "Insight     : Krisna menjelaskan bahwa syarat utama menjadi aslab adalah IPK di atas 3, dengan tiga" << endl;
                cout << "              tahap seleksi: tes tulis berupa pemecahan kasus dalam bentuk kode, mikroteaching dengan" << endl;
                cout << "              materi acak di depan senior, dan wawancara dengan dosen atau ketua koordinasi aslab." << endl;
                cout << "              Asisten jurusan informatika terbagi menjadi dua peran, yaitu aslab yang mengajar" << endl;
                cout << "              praktikum dan admin yang mengecek PC, jaringan, serta hal-hal pendukung lab." << endl << endl;
                cout << "              Menurut Krisna, menjadi aslab tidak berat, hanya terasa capek, dengan benefit berupa" << endl;
                cout << "              uang, akses ke Rasis (Ruang Asisten) untuk salat, nongkrong, dan wifi-an, serta bebas" << endl;
                cout << "              memakai lab. Kelas mengajar ditentukan lewat plottingan dan boleh ditukar, tetapi modul" << endl;
                cout << "              yang belum dikuasai tetap harus dipelajari. Tantangannya hanya harus belajar ulang materi" << endl;
                cout << "              lama untuk mengajari adik tingkat." << endl;
                break;
            case 12: 
                cout << "\n--- Hasil Wawancara Narasumber 12 ---" << endl;
                cout << "Nama        : " << endl;
                cout << "Kategori    : " << endl;
                cout << "Bidang      : " << endl;
                cout << "Insight     : " << endl;
                cout << "             " << endl;
                break;
            case 13: 
                cout << "\n--- Hasil Wawancara Narasumber 13 ---" << endl;
                cout << "Nama        : " << endl;
                cout << "Kategori    : " << endl;
                cout << "Bidang      : " << endl;
                cout << "Insight     : " << endl;
                cout << "             " << endl;
                break;
            case 14: 
                cout << "\n--- Hasil Wawancara Narasumber 14 ---" << endl;
                cout << "Nama        : " << endl;
                cout << "Kategori    : " << endl;
                cout << "Bidang      : " << endl;
                cout << "Insight     : " << endl;
                cout << "             " << endl;
                break;
            case 15: 
                cout << "\n--- Hasil Wawancara Narasumber 15 ---" << endl;
                cout << "Nama        : " << endl;
                cout << "Kategori    : " << endl;
                cout << "Bidang      : " << endl;
                cout << "Insight     : " << endl;
                cout << "             " << endl;
                break;
            default : 
                cout << "Pilihan tidak tersedia! Pilih (1-15)!"<< endl;
                break;

        }

        cout << "\nKetik angka apa saja kecuali 99 untuk kembali ke menu utama, atau 99 untuk keluar program: ";
        cin >> kembali;
        system("cls ");

        if (kembali == 99) {
            break;
        }
        cout << endl;
    }

    return 0;
}

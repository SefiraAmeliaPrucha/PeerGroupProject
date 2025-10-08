#include <iostream>
using namespace std;

void garis() {
    cout << "=====================================" << endl;
}

int main() {
    int skor = 0;
    char jawab;

    garis();
    cout << "    ==== QUIZ BY JECHANAI ====" << endl;
    garis();

    // Soal pertama
    cout << "[1] Fungsi dari #include <iostream> adalah..." << endl;
    cout << "   a. Menyediakan fungsi matematika" << endl;
    cout << "   b. Menyediakan fungsi input/output" << endl;
    cout << "   c. Menyediakan fungsi string" << endl;
    cout << "   d. Gatau males pengen beli truk" << endl;
    cout << "->> Jawaban: ";
    cin >> jawab;

    if (jawab == 'b' || jawab == 'B') {
        cout << "YEYY BENUL, MANTAP CUY!!" << endl;
        skor++;
    } else {
        cout << "Yahh, Salah:(. Jawaban yang benar: B" << endl;
    }
    garis();

    // Soal kedua
    cout << "[2] Perintah untuk menampilkan output ke layar adalah..." << endl;
    cout << "   a. cin" << endl;
    cout << "   b. printf" << endl;
    cout << "   c. cout" << endl;
    cout << "   d. scanf" << endl;
    cout << "->> Jawaban: ";
    cin >> jawab;

    if (jawab == 'c' || jawab == 'C') {
        cout << "WAH BENUL, LANUTKEUN!" << endl;
        skor++;
    } else {
        cout << "Yahh, Salah:(. Jawaban yang benar: C" << endl;
    }
    garis();

    // Soal ketiga
    cout << "[3] Tipe data yang digunakan untuk menyimpan bilangan bulat adalah..." << endl;
    cout << "   a. float" << endl;
    cout << "   b. char" << endl;
    cout << "   c. double" << endl;
    cout << "   d. int" << endl;
    cout << "->> Jawaban: ";
    cin >> jawab;

    if (jawab == 'd' || jawab == 'D') {
        cout << " IH BENUL, UDAH SIP BGT MAU JADI PROGRAMMER WKWK!" << endl;
        skor++;
    } else {
        cout << "Yahh, Salah:(. Jawaban yang benar: D" << endl;
    }
    garis();

    // Soal keempat
    cout << "[4] Apakah anak ILKOMP tidurnya cukup?" << endl;
    cout << "   a. ENDAK!!" << endl;
    cout << "   b. Cuma 4 jam" << endl;
    cout << "   c. Apa itu tidur?" << endl;
    cout << "   d. Cukup dong" << endl;
    cout << "-> Jawaban: ";
    cin >> jawab;

    if (jawab == 'a' || jawab == 'A') {
        cout << "iye bener iye!" << endl;
        skor++;
    } else {
        cout << "Yahh, Salah:(. Jawaban yang benar: A, ngga ya no no, harus tetep bubuk yaw ><" << endl;
    }
    garis();

    // Soal kelima
    cout << "[5] Struktur perulangan yang digunakan jika jumlah perulangan sudah diketahui adalah..." << endl;
    cout << "   a. while" << endl;
    cout << "   b. for" << endl;
    cout << "   c. do while" << endl;
    cout << "   d. yo ndak tau kok tanya saya" << endl;

    cout << "->> Jawaban: ";
    cin >> jawab;

    if (jawab == 'b' || jawab == 'B') {
        cout << "YEYY, KEYEN!" << endl;
        skor++;
    } else {
        cout << "Yahh, Salah:(. Jawaban yang benar: B" << endl;
    }
    garis();

    // Soal keenam
    cout << "[6] Manakah pernyataan berikut yang benar tentang variabel?" << endl;
    cout << "  a. Variabel tidak perlu diberi nama" << endl;
    cout << "  b. Variabel digunakan untuk menyimpan data" << endl;
    cout << "  c. Variabel hanya dapat menyimpan satu tipe data" << endl;
    cout << "  d. Variabel tidak memiliki nilai awal" << endl;

    cout << "->> Jawaban: ";
    cin >> jawab;

    if (jawab == 'b' || jawab == 'B') {
        cout << "WOAHH TEPAT SEKALI, KAMU HEBAT!" << endl;
        skor++;
    } else {
        cout << "Yahh, Salah:(. Jawaban yang benar: B" << endl;
    }
    garis();

    //Soal ketujuh
    cout << "[7] Fungsi dari return 0; pada akhir fungsi main() adalah..." << endl;
    cout << "   a. Menandakan program berakhir dengan sukses" << endl;
    cout << "   b. Menandakan program berakhir dengan error" << endl;
    cout << "   c. Menyimpan nilai 0 ke dalam variabel" << endl;
    cout << "   d. Menghapus semua variable" << endl;

    cout << "->> Jawaban: ";
    cin >> jawab;

    if (jawab == 'a' || jawab == 'A') {
        cout << "BENAR SEKALI! 100 THUMB FOR YOUUU!" << endl;
        skor++;
    } else {
        cout << "Yahh, Salah:(. Jawaban yang benar: A" << endl;
    }
    garis();

    //Soal kedelapan
    cout << "[8] Simbol // dalam bahasa C++ digunakan untuk..." << endl;
    cout << "   a. Mengakhiri program" << endl;
    cout << "   b. Menulis komentar satu baris" << endl;
    cout << "   c. Menyimpan nilai" << endl;
    cout << "   d. Membuat variabel baru" << endl;

    cout << "->> Jawaban: ";
    cin >> jawab;

    if (jawab == 'b' || jawab == 'B') {
        cout << "WOAH, YOU'RE SO CLEVER!" << endl;
        skor++;
    } else {
        cout << "Yahh, Salah:(. Jawaban yang benar: B" << endl;
    }
    garis();

    //Soal kesembilan
    cout << "[9] Dalam array atau list, apa yang disebut dengan angka yang digunakan untuk mengakses elemen tertentu?" << endl;
    cout << "   a. Nilai" << endl;
    cout << "   b. Referensi" << endl;
    cout << "   c. Kunci" << endl;
    cout << "   d. Indeks" << endl;

    cout << "->> Jawaban: ";
    cin >> jawab;

    if (jawab == 'd' || jawab == 'D') {
        cout << "YES, THAT'S RIGHT! 1000 thumb for you!" << endl;
        skor++;
    } else {
        cout << "Yahh, Salah:(. Jawaban yang benar: D" << endl;
    }
    garis();

    //Soal kesepuluh
    cout << "[10] Kata kunci manakah yang digunakan untuk mendeklarasikan sebuah fungsi yang tidak mengembalikan nilai apapun?" << endl;
    cout << "   a. void" << endl;
    cout << "   b. int" << endl;
    cout << "   c. Null" << endl;
    cout << "   d. return" << endl;

    cout << "->> Jawaban: ";
    cin >> jawab;

    if (jawab == 'a' || jawab == 'A') {
        cout << "EXCELLENT! YOU NAILED IT!" << endl;
        skor++;
    } else {
        cout << "Yahh, Salah:(. Jawaban yang benar: A" << endl;
    }
    garis();

    // Penilaian
    cout << "==== HASIL QUIZ ====" << endl;
    cout << "Skor akhir lo: " << skor << "/5" << endl;

    if (skor == 5) {
        cout << "YEYY! Tahun depan langsung wisuda aja deh >.<" << endl;
    } else if (skor >= 3) {
        cout << "Bolehlah bolehlah" << endl;
    } else {
        cout << "Gapapa, belajar lagi yaww ^^" << endl;
        }    garis();
        return 0;
}
#include <iostream>
#include <string>
#include "Store.cpp"
using namespace std;

// fungsi untuk menampilkan tabel
void showTable(Store list[], int count) {
    // cetak header tabel
    printf("\n=================================================================================================================================================\n");
    printf("| %-2s | %-20s | %-10s | %-5s | %-10s | %-10s | %-10s | %-12s | %-10s | %-10s | %-12s |\n",
           "ID", "Name", "Price", "Stock", "Image", "Brand", "Warranty",
           "Category", "Location", "Seller", "Contact");
    printf("=================================================================================================================================================\n");
    
    // looping untuk menampilkan setiap produk
    for (int i = 0; i < count; i++) {
        printf("| %-2d | %-20s | %-10d | %-5d | %-10s | %-10s | %-10s | %-12s | %-10s | %-10s | %-12s |\n",
               list[i].getId(),
               list[i].getName().c_str(),
               list[i].getPrice(),
               list[i].getStock(),
               list[i].getImage().c_str(),
               list[i].getBrand().c_str(),
               list[i].getWarranty().c_str(),
               list[i].getCategory().c_str(),
               list[i].getLocation().c_str(),
               list[i].getSellerName().c_str(),
               list[i].getContact().c_str());
    }
    // cetak footer tabel
    printf("=================================================================================================================================================\n");
}


int main() {
    Store list[100]; // maksimal 100 produk
    int count = 0;   // jumlah produk saat ini

    // 5 data awal dimasukkan secara hardcode
    list[count++] = Store(1, "Laptop Asus ROG", 18000000, 5, "rog.jpg",
                         "Asus", "2 Tahun", "Laptop",
                         "Bandung", "Andi", "081234567890");

    list[count++] = Store(2, "Samsung Smart TV", 7000000, 8, "tv.jpg",
                         "Samsung", "1 Tahun", "Televisi",
                         "Jakarta", "Budi", "082345678901");

    list[count++] = Store(3, "Sony Headphone", 1500000, 20, "sony.jpg",
                         "Sony", "6 Bulan", "Audio",
                         "Surabaya", "Citra", "083456789012");

    list[count++] = Store(4, "iPhone 14", 15000000, 10, "iphone.jpg",
                         "Apple", "1 Tahun", "Smartphone",
                         "Medan", "Dewi", "084567890123");

    list[count++] = Store(5, "Logitech MX Master", 1200000, 15, "logi.jpg",
                         "Logitech", "1 Tahun", "Mouse",
                         "Yogyakarta", "Eko", "085678901234");

    // tampilkan tabel data awal
    showTable(list, count);

    // tanya user apakah ingin menambah data
    char jawab;
    cout << "\nApakah ingin menambahkan data baru? (y/n): ";
    cin >> jawab;
    cin.ignore();

    // jika user menjawab y maka input data baru
    if (jawab == 'y' || jawab == 'Y') {
        int n;
        cout << "Berapa data baru yang ingin ditambahkan? ";
        cin >> n;
        cin.ignore();

        // input data baru sebanyak n
        for (int i = 0; i < n; i++) {
            cout << "\nInput data ke-" << (i+1) << endl;

            int id, price, stock;
            string name, image, brand, warranty, category, location, sellerName, contact;

            cout << "ID: "; cin >> id; cin.ignore();
            cout << "Nama: "; getline(cin, name);
            cout << "Harga: "; cin >> price; cin.ignore();
            cout << "Stock: "; cin >> stock; cin.ignore();
            cout << "Image: "; getline(cin, image);
            cout << "Brand: "; getline(cin, brand);
            cout << "Warranty: "; getline(cin, warranty);
            cout << "Category: "; getline(cin, category);
            cout << "Location: "; getline(cin, location);
            cout << "Seller Name: "; getline(cin, sellerName);
            cout << "Contact: "; getline(cin, contact);

            // tambahkan data ke array list
            list[count++] = Store(id, name, price, stock, image,
                                  brand, warranty, category,
                                  location, sellerName, contact);
        }

        // tampilkan tabel setelah update
        showTable(list, count);
    }

    // program selesai
    cout << "\nProgram selesai.\n";
    return 0;
}

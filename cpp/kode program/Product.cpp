#include <iostream>
#include <string>
using namespace std;

// class product berisi atribut dasar sebuah produk
class Product {
    private:
        int id;         // atribut untuk menyimpan id produk
        string name;    // atribut untuk menyimpan nama produk
        int price;      // atribut untuk menyimpan harga produk
        int stock;      // atribut untuk menyimpan jumlah stok produk
        string image;   // atribut untuk menyimpan path gambar produk

    public:
    // constructor kosong
    Product() {
    }

    // constructor dengan parameter untuk inisialisasi objek
    Product(int id, string name, int price, int stock, string image) {
        this->id = id;
        this->name = name;
        this->price = price;
        this->stock = stock;
        this->image = image;
    }

    // setter dan getter untuk id
    void setId(int id) {
        this->id = id;
    }
    int getId() {
        return this->id;
    }

    // setter dan getter untuk name
    void setName(string name) {
        this->name = name;
    }
    string getName() {
        return this->name;
    }

    // setter dan getter untuk price
    void setPrice(int price) {
        this->price = price;
    }
    int getPrice() {
        return this->price;
    }

    // setter dan getter untuk stock
    void setStock(int stock) {
        this->stock = stock;
    }
    int getStock() {
        return this->stock;
    }

    // setter dan getter untuk image
    void setImage(string image) {
        this->image = image;
    }
    string getImage() {
        return this->image;
    }
};

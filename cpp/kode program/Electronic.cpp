#include <iostream>
#include "Product.cpp"
using namespace std;

// class electronic adalah turunan dari class product
class Electronic : public Product {
    private:
        string brand;     // atribut brand untuk menyimpan merek
        string warranty;  // atribut warranty untuk menyimpan garansi
        string category;  // atribut category untuk menyimpan kategori produk

    public:
    // constructor kosong
    Electronic() {

    }

    // constructor dengan parameter yang memanggil constructor dari product
    Electronic(int id, string name, int price, int stock, string image,
                string brand, string warranty, string category) : Product(id, name, price, stock, image){
                this->brand = brand;
                this->warranty = warranty;
                this->category = category;
            }

    // setter dan getter untuk brand
    void setBrand(string brand) {
        this->brand = brand;
    }
    string getBrand() {
        return this->brand;
    }

    // setter dan getter untuk warranty
    void setWarranty(string warranty) {
        this->warranty = warranty;
    }
    string getWarranty() {
        return this->warranty;
    }

    // setter dan getter untuk category
    void setCategory(string category) {
        this->category = category;
    }
    string getCategory() {
        return this->category;
    }
};

#include <iostream>
#include "Electronic.cpp"
using namespace std;

// class store merupakan turunan dari electronic
// menambahkan atribut khusus seperti lokasi, nama penjual, dan kontak
class Store : public Electronic{
    private:
        string location;    // menyimpan lokasi toko atau produk
        string sellerName;  // menyimpan nama penjual
        string contact;     // menyimpan kontak penjual

    public:
    // constructor kosong
    Store() {

    }

    // constructor dengan parameter, mewarisi atribut dari electronic
    Store(int id, string name, int price, int stock, string image,
                string brand, string warranty, string category,
                string location, string sellerName, string contact) : Electronic(id, name, price, stock, image, brand, warranty, category){
                this->location = location;
                this->sellerName = sellerName;
                this->contact = contact;
            }

    // setter dan getter untuk location
    void setLocation(string location) {
        this->location = location;
    }
    string getLocation() {
        return this->location;
    }

    // setter dan getter untuk sellerName
    void setSellerName(string sellerName) {
        this->sellerName = sellerName;
    }
    string getSellerName() {
        return this->sellerName;
    }

    // setter dan getter untuk contact
    void setContact(string contact) {
        this->contact = contact;
    }
    string getContact() {
        return this->contact;
    }
};

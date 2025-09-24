#include <iostream>
#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    int price;
    int stock;
    string image;

public:
    // constructor
    Product() {
    }

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
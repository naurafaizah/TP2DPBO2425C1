<?php
require_once "Product.php"; // mengimpor class Product agar bisa digunakan sebagai parent

// class Electronic mewarisi (extends) dari Product
class Electronic extends Product {
    // atribut khusus Electronic
    private $brand;     // merek barang
    private $warranty;  // masa garansi
    private $category;  // kategori barang (misal: Laptop, TV, dll)

    // constructor untuk inisialisasi objek Electronic
    public function __construct($id, $name, $price, $stock, $image, $brand, $warranty, $category) {
        // memanggil constructor parent (Product) agar atribut dasar ikut terisi
        parent::__construct($id, $name, $price, $stock, $image);
        // mengisi atribut tambahan milik Electronic
        $this->brand = $brand;
        $this->warranty = $warranty;
        $this->category = $category;
    }

    // getter
    // mengambil nilai brand
    public function getBrand() { return $this->brand; }
    // mengambil nilai warranty
    public function getWarranty() { return $this->warranty; }
    // mengambil nilai category
    public function getCategory() { return $this->category; }

    // setter
    // mengubah nilai brand
    public function setBrand($brand) { $this->brand = $brand; }
    // mengubah nilai warranty
    public function setWarranty($warranty) { $this->warranty = $warranty; }
    // mengubah nilai category
    public function setCategory($category) { $this->category = $category; }
}
?>

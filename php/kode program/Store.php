<?php
require_once "Electronic.php"; // mengimpor class Electronic sebagai parent

// class Store adalah turunan dari Electronic
class Store extends Electronic {
    // atribut tambahan khusus Store
    private $location;    // lokasi penjual
    private $sellerName;  // nama penjual
    private $contact;     // kontak penjual (nomor hp/wa/dll)

    // constructor untuk inisialisasi objek Store
    public function __construct($id, $name, $price, $stock, $image, $brand, $warranty, $category, $location, $sellerName, $contact) {
        // panggil constructor dari Electronic agar atribut dasar terisi
        parent::__construct($id, $name, $price, $stock, $image, $brand, $warranty, $category);
        // isi atribut tambahan milik Store
        $this->location = $location;
        $this->sellerName = $sellerName;
        $this->contact = $contact;
    }

    // getter
    public function getLocation() { return $this->location; }
    public function getSellerName() { return $this->sellerName; }
    public function getContact() { return $this->contact; }

    // setter
    public function setLocation($location) { $this->location = $location; }
    public function setSellerName($sellerName) { $this->sellerName = $sellerName; }
    public function setContact($contact) { $this->contact = $contact; }
}
?>

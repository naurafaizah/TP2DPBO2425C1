<?php
require_once "Product.php";

class Electronic extends Product {
    private $brand;
    private $warranty;
    private $category;

    public function __construct($id, $name, $price, $stock, $image, $brand, $warranty, $category) {
        parent::__construct($id, $name, $price, $stock, $image);
        $this->brand = $brand;
        $this->warranty = $warranty;
        $this->category = $category;
    }

    // Getter
    public function getBrand() { return $this->brand; }
    public function getWarranty() { return $this->warranty; }
    public function getCategory() { return $this->category; }

    // Setter
    public function setBrand($brand) { $this->brand = $brand; }
    public function setWarranty($warranty) { $this->warranty = $warranty; }
    public function setCategory($category) { $this->category = $category; }
}
?>

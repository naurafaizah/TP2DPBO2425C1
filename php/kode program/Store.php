<?php
require_once "Electronic.php";

class Store extends Electronic {
    private $location;
    private $sellerName;
    private $contact;

    public function __construct($id, $name, $price, $stock, $image, $brand, $warranty, $category, $location, $sellerName, $contact) {
        parent::__construct($id, $name, $price, $stock, $image, $brand, $warranty, $category);
        $this->location = $location;
        $this->sellerName = $sellerName;
        $this->contact = $contact;
    }

    // Getter
    public function getLocation() { return $this->location; }
    public function getSellerName() { return $this->sellerName; }
    public function getContact() { return $this->contact; }

    // Setter
    public function setLocation($location) { $this->location = $location; }
    public function setSellerName($sellerName) { $this->sellerName = $sellerName; }
    public function setContact($contact) { $this->contact = $contact; }
}
?>

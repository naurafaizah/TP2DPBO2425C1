<?php
require_once "Store.php";

// Array produk (hardcode)
$list = [
    new Store(1, "Laptop Asus ROG", 18000000, 5, "images/LaptopAsusROGStrixG15.png",
              "Asus", "2 Tahun", "Laptop", "Bandung", "Andi", "081234567890"),
    new Store(2, "Samsung Smart TV", 7000000, 8, "images/SamsungSmartTV55.png",
              "Samsung", "1 Tahun", "Televisi", "Jakarta", "Budi", "082345678901"),
    new Store(3, "Sony Headphone", 1500000, 20, "images/SonyHeadphone.png",
              "Sony", "6 Bulan", "Audio", "Surabaya", "Citra", "083456789012"),
    new Store(4, "iPhone 14", 15000000, 10, "images/iPhone14ProMax.png",
              "Apple", "1 Tahun", "Smartphone", "Medan", "Dewi", "084567890123"),
    new Store(5, "Logitech MX Master", 1200000, 15, "images/Logitech.png",
              "Logitech", "1 Tahun", "Mouse", "Yogyakarta", "Eko", "085678901234")
];

// Tambah data dari form
if ($_SERVER['REQUEST_METHOD'] === 'POST') {
    $list[] = new Store(
        $_POST['id'], $_POST['name'], $_POST['price'], $_POST['stock'], $_POST['image'],
        $_POST['brand'], $_POST['warranty'], $_POST['category'],
        $_POST['location'], $_POST['sellerName'], $_POST['contact']
    );
}
?>

<!DOCTYPE html>
<html>
<head>
    <title>Daftar Produk</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            margin: 30px;
            background-color: #f9f9f9;
        }
        h2, h3 {
            text-align: center;
            margin-bottom: 20px;
        }
        .btn-add {
            background-color: #ffc2e3;
            color: white;
            font-weight: bold;
            padding: 6px 12px;
            border-radius: 4px;
            text-decoration: none;
            margin-bottom: 15px;
            display: inline-block;
        }
        table {
            width: 100%;
            border-collapse: collapse;
            background: white;
            box-shadow: 0 0 8px rgba(0,0,0,0.1);
        }
        th, td {
            padding: 12px;
            text-align: center;
            border-bottom: 1px solid #ddd;
        }
        th {
            background-color: #fd85bd;
            color: white;
        }
        tr:hover {
            background-color: #f1f1f1;
        }
        img {
            border-radius: 6px;
            width: 60px;
        }
        form {
            background: white;
            padding: 20px;
            margin: 20px auto;
            width: 400px;
            box-shadow: 0 0 8px rgba(0,0,0,0.1);
            border-radius: 6px;
        }
        input, button {
            width: 90%;
            padding: 8px;
            margin: 8px 0;
            border: 1px solid #ddd;
            border-radius: 4px;
        }
        button {
            background-color: #fd85bd;
            color: white;
            font-weight: bold;
            cursor: pointer;
        }
        button:hover {
            background-color: #e26aa3;
        }
    </style>
</head>
<body>

    <h2>Daftar Produk Toko</h2>

    <table>
        <tr>
            <th>ID</th><th>Name</th><th>Price</th><th>Stock</th>
            <th>Image</th><th>Brand</th><th>Warranty</th><th>Category</th>
            <th>Location</th><th>Seller</th><th>Contact</th>
        </tr>
        <?php foreach ($list as $item): ?>
        <tr>
            <td><?= $item->getId() ?></td>
            <td><?= $item->getName() ?></td>
            <td><?= $item->getPrice() ?></td>
            <td><?= $item->getStock() ?></td>
            <td><img src="<?= $item->getImage() ?>" alt=""></td>
            <td><?= $item->getBrand() ?></td>
            <td><?= $item->getWarranty() ?></td>
            <td><?= $item->getCategory() ?></td>
            <td><?= $item->getLocation() ?></td>
            <td><?= $item->getSellerName() ?></td>
            <td><?= $item->getContact() ?></td>
        </tr>
        <?php endforeach; ?>
    </table>

    <h3>Tambah Produk Baru</h3>
    <form method="post">
        <input type="number" name="id" placeholder="ID" required>
        <input type="text" name="name" placeholder="Name" required>
        <input type="number" name="price" placeholder="Price" required>
        <input type="number" name="stock" placeholder="Stock" required>
        <input type="text" name="image" placeholder="Image URL">
        <input type="text" name="brand" placeholder="Brand">
        <input type="text" name="warranty" placeholder="Warranty">
        <input type="text" name="category" placeholder="Category">
        <input type="text" name="location" placeholder="Location">
        <input type="text" name="sellerName" placeholder="Seller Name">
        <input type="text" name="contact" placeholder="Contact">
        <button type="submit">Tambah Produk</button>
    </form>

</body>
</html>

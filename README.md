// Naura Nur Faizah 
// NIM 2408352 
// Ilmu Komputer C1

Saya Naura Nur Faizah dengan NIM 2408352 mengerjakan TP 2 dalam mata kuliah Desain Pemrograman Berbasis Objek untuk keberkahan-Nya maka saya tidak akan melakukan kecurangan seperti yang telah di spesifikasikan

# DIAGRAM 
**Product** adalah dasar semua barang, **Electronic** mewarisi Product karena elektronik adalah produk dengan atribut tambahan, dan **Store** mewarisi Electronic karena barang elektronik di toko butuh informasi lokasi, penjual, dan kontak.

<img width="459" height="788" alt="Screenshot 2025-09-24 210052" src="https://github.com/user-attachments/assets/a03f4a58-43f4-4bbd-899c-1df00c9c9bd6" />

# KONSEP UTAMA (semua bahasa)
- Product → kelas paling dasar, menyimpan atribut umum untuk semua produk:
ID, Name, Price, Stock, Image

- Electronic → turunan (extends) dari Product, menambahkan atribut khusus produk elektronik:
Brand, Warranty, Category

- Store → turunan dari Electronic, menambahkan atribut toko:
Location, SellerName, Contact

# JAVA
1. Product (kelas induk / parent)
  - Menyimpan atribut dasar semua produk: id, name, price, stock, image.
  - Punya constructor untuk inisialisasi data.
  - Ada setter & getter untuk akses data (karena atribut private).

2. Electronic (kelas turunan dari Product)
  - Artinya Electronic mewarisi (extends) semua atribut & method dari       Product.
  - Menambahkan atribut baru yang khusus elektronik: brand, warranty, category.
  - Constructor Electronic memanggil constructor Product pakai super.

3. Store (kelas turunan dari Electronic)
- Store otomatis punya atribut Product + Electronic sehingga jadi kelas yang paling lengkap

OUTPUT JAVA
<img width="1401" height="259" alt="java" src="https://github.com/user-attachments/assets/5d74ad3b-b843-4b7e-beff-013616c5f4d6" />

setelah input data baru
<img width="1343" height="547" alt="java add" src="https://github.com/user-attachments/assets/c8838fef-8848-48d3-b5fa-51e0735af6f4" />

# PYTHON
1. Product.py (kelas dasar / parent)
  - Menyimpan atribut umum semua produk: id, name, price, stock, image.
  - Constructor (__init__) dipakai untuk inisialisasi data.
  - Atribut dibuat private (pakai _) supaya hanya bisa diakses lewat setter & getter.
  - Ada setter & getter untuk setiap atribut → fungsinya biar data lebih aman dan terkontrol.

2. Electronic.py (kelas turunan Product)
  - Mewarisi semua atribut & method dari Product.
  - Menambahkan atribut khusus elektronik: brand, warranty, category.
  - Constructor Electronic memanggil constructor Product dengan super().
  Punya setter & getter tambahan untuk atribut elektronik.

3. Store.py (kelas turunan Electronic)
  - Mewarisi atribut dari Product + Electronic.
  - Menambahkan atribut baru terkait toko: location, seller_name, contact.
  - Jadi kelas paling lengkap karena menggabungkan data produk, elektronik, dan toko.
  - Punya setter & getter tambahan khusus untuk data toko.

4. main.py (program utama)
- Membuat 5 data awal Store (hardcode).
- Menampilkan data dalam bentuk tabel dengan fungsi show_table().
- Memberikan pilihan ke user untuk menambah data baru.
- Data baru dimasukkan ke dalam list lalu tabel diperbarui.
- Diakhiri dengan pesan “Program selesai”.

OUTPUT PYTHON
<img width="1334" height="224" alt="python" src="https://github.com/user-attachments/assets/b1555cc6-ff29-4340-b77d-3de523223573" />

setelah input data baru
<img width="1368" height="546" alt="python add" src="https://github.com/user-attachments/assets/95d5ecb3-d579-41d5-9322-c099cf34e285" />

# CPP
1. Product.cpp
  - Berisi class Product (kelas dasar).
  - Menyimpan atribut umum: id, name, price, stock, image.
  - Ada constructor kosong & constructor dengan parameter.
  - Menyediakan setter dan getter untuk setiap atribut.

2. Electronic.cpp
  - Berisi class Electronic yang mewarisi (extends) dari Product.
  - Menambahkan atribut khusus elektronik: brand, warranty, category.
  - Constructor Electronic memanggil constructor Product dengan : Product(...).
  - Ada setter dan getter untuk atribut baru.

3. Store.cpp
  - Berisi class Store yang mewarisi (extends) dari Electronic.
  - Menambahkan atribut tambahan: location, sellerName, contact.
  - Constructor Store memanggil constructor Electronic dengan : Electronic(...).
  - Ada setter dan getter untuk atribut tambahan.

4. main.cpp
  - Menyediakan fungsi showTable() untuk menampilkan data dalam bentuk tabel.
  - Membuat array Store list[100] untuk menampung maksimal 100 produk.
  - Mengisi 5 data awal secara hardcode.
  - Menampilkan data awal dalam tabel.
  - Memberi pilihan ke user apakah ingin menambah data baru.
  - Jika user memilih tambah data, program meminta input atribut produk dan menyimpannya ke array.

OUTPUT CPP
<img width="1351" height="263" alt="cpp" src="https://github.com/user-attachments/assets/9952458f-5ae6-44bd-94cd-f36f775856eb" />

setelah input data baru
<img width="1354" height="553" alt="cpp add" src="https://github.com/user-attachments/assets/ff6b8e89-4951-446c-b58b-dd986a40c249" />

# PHP
1. Product.php
  - Atribut: $id, $name, $price, $stock, $image → semua private.
  - Constructor: Mengisi atribut saat objek dibuat.
  - Getter: Ambil nilai (misal getId(), getName()).
  - Setter: Ubah nilai (misal setPrice(), setStock()).

2. Electronic.php
  - Atribut tambahan: $brand → merek, $warranty → garansi, $category → kategori barang.
  - Panggil parent:__construct() agar atribut dari Product ikut terisi.

3. Store.php
  - Atribut tambahan: $location → lokasi toko, $sellerName → nama penjual, $contact → nomor kontak.

4. index.php
  - require_once "Store.php"; → load semua class.
  - membuat array $list berisi 5 data awal (hardcode Store).
  - Jika ada form POST → buat objek Store baru → tambah ke $list.
  - Tampilkan data: Loop $list → isi tabel HTML.
  - Tampilkan atribut lengkap: id, name, price, stock, image, brand, warranty, category, location, seller, contact.
  - Form input: User bisa tambah data baru (input type="text/number") → klik submit → langsung tampil di tabel.

OUTPUT PHP
<img width="1920" height="1080" alt="php" src="https://github.com/user-attachments/assets/c77ddeff-accd-4746-9df8-a2a76b93011c" />

form input data baru
<img width="1920" height="1080" alt="form add" src="https://github.com/user-attachments/assets/2c0bcc05-ff50-40be-a92a-7d9591f627cd" />
<img width="1920" height="1080" alt="form add2" src="https://github.com/user-attachments/assets/39165ac7-b8e3-42da-9366-2baba5805722" />

setelah input data baru
<img width="1920" height="1080" alt="php add" src="https://github.com/user-attachments/assets/1c7157c3-1d6d-4f92-8218-069c11bf0775" />




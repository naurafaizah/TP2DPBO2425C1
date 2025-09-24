from Product import Product

# Kelas Electronic mewarisi dari Product
# Electronic menambahkan atribut khusus untuk barang elektronik:
# brand (merek), warranty (garansi), dan category (kategori).
class Electronic(Product):
    def __init__(self, id, name, price, stock, image, brand, warranty, category):
        # Panggil constructor dari parent class (Product)
        super().__init__(id, name, price, stock, image)
        
        # atribut tambahan untuk produk elektronik
        self._brand = brand          # merek produk
        self._warranty = warranty    # masa garansi
        self._category = category    # kategori produk (contoh: Laptop, Smartphone, TV)

    # setter dan getter untuk brand
    def set_brand(self, brand):
        self._brand = brand

    def get_brand(self):
        return self._brand

    # setter dan getter untuk warranty
    def set_warranty(self, warranty):
        self._warranty = warranty

    def get_warranty(self):
        return self._warranty

    # setter dan getter untuk category
    def set_category(self, category):
        self._category = category

    def get_category(self):
        return self._category

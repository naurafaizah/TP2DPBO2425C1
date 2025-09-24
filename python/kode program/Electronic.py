from Product import Product

# Electronic mewarisi dari Product
class Electronic(Product):
    def __init__(self, id, name, price, stock, image, brand, warranty, category):
        # panggil constructor dari Product
        super().__init__(id, name, price, stock, image)
        self._brand = brand
        self._warranty = warranty
        self._category = category

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

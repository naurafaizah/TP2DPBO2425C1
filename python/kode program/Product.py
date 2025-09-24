class Product:
    # constructor
    def __init__(self, id, name, price, stock, image):
        # atribut private (diawali underscore)
        self._id = id          # menyimpan id produk
        self._name = name      # menyimpan nama produk
        self._price = price    # menyimpan harga produk
        self._stock = stock    # menyimpan jumlah stok produk
        self._image = image    # menyimpan path/gambar produk

    # setter dan getter untuk id
    def set_id(self, id):
        self._id = id

    def get_id(self):
        return self._id

    # setter dan getter untuk name
    def set_name(self, name):
        self._name = name

    def get_name(self):
        return self._name

    # setter dan getter untuk price
    def set_price(self, price):
        self._price = price

    def get_price(self):
        return self._price

    # setter dan getter untuk stock
    def set_stock(self, stock):
        self._stock = stock

    def get_stock(self):
        return self._stock

    # setter dan getter untuk image
    def set_image(self, image):
        self._image = image

    def get_image(self):
        return self._image

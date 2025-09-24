from Electronic import Electronic

# Store mewarisi dari Electronic
class Store(Electronic):
    def __init__(self, id, name, price, stock, image,
                 brand, warranty, category,
                 location, seller_name, contact):
        # panggil constructor Electronic
        super().__init__(id, name, price, stock, image, brand, warranty, category)
        self._location = location
        self._seller_name = seller_name
        self._contact = contact

    # setter dan getter untuk location
    def set_location(self, location):
        self._location = location

    def get_location(self):
        return self._location

    # setter dan getter untuk seller_name
    def set_seller_name(self, seller_name):
        self._seller_name = seller_name

    def get_seller_name(self):
        return self._seller_name

    # setter dan getter untuk contact
    def set_contact(self, contact):
        self._contact = contact

    def get_contact(self):
        return self._contact

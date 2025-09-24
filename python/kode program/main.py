from Store import Store  # pastikan file Store, Electronic, Product sudah dibuat

# fungsi untuk menampilkan tabel
def show_table(store_list):
    print("\n" + "=" * 145)
    print(f"| {'ID':<2} | {'Name':<20} | {'Price':<10} | {'Stock':<5} | {'Image':<10} | {'Brand':<10} | {'Warranty':<10} | {'Category':<12} | {'Location':<10} | {'Seller':<10} | {'Contact':<12} |")
    print("=" * 145)

    for s in store_list:
        print(f"| {s.get_id():<2} | {s.get_name():<20} | {s.get_price():<10} | {s.get_stock():<5} | {s.get_image():<10} | "
              f"{s.get_brand():<10} | {s.get_warranty():<10} | {s.get_category():<12} | {s.get_location():<10} | "
              f"{s.get_seller_name():<10} | {s.get_contact():<12} |")
    print("=" * 145)


def main():
    # ===== 5 data awal =====
    store_list = [
        Store(1, "Laptop Asus ROG", 18000000, 5, "rog.jpg",
              "Asus", "2 Tahun", "Laptop",
              "Bandung", "Andi", "081234567890"),
        Store(2, "Samsung Smart TV", 7000000, 8, "tv.jpg",
              "Samsung", "1 Tahun", "Televisi",
              "Jakarta", "Budi", "082345678901"),
        Store(3, "Sony Headphone", 1500000, 20, "sony.jpg",
              "Sony", "6 Bulan", "Audio",
              "Surabaya", "Citra", "083456789012"),
        Store(4, "iPhone 14", 15000000, 10, "iphone.jpg",
              "Apple", "1 Tahun", "Smartphone",
              "Medan", "Dewi", "084567890123"),
        Store(5, "Logitech MX Master", 1200000, 15, "logi.jpg",
              "Logitech", "1 Tahun", "Mouse",
              "Yogyakarta", "Eko", "085678901234")
    ]

    # tampilkan tabel data awal
    show_table(store_list)

    # tanya user
    jawab = input("\nApakah ingin menambahkan data baru? (y/n): ").strip().lower()

    if jawab == "y":
        n = int(input("Berapa data baru yang ingin ditambahkan? "))

        for i in range(n):
            print(f"\nInput data ke-{i+1}")

            id = int(input("ID: "))
            name = input("Nama: ")
            price = int(input("Harga: "))
            stock = int(input("Stock: "))
            image = input("Image: ")
            brand = input("Brand: ")
            warranty = input("Warranty: ")
            category = input("Category: ")
            location = input("Location: ")
            seller_name = input("Seller Name: ")
            contact = input("Contact: ")

            store_list.append(Store(id, name, price, stock, image,
                                    brand, warranty, category,
                                    location, seller_name, contact))

        # tampilkan tabel setelah update
        show_table(store_list)

    print("\nProgram selesai.")


if __name__ == "__main__":
    main()

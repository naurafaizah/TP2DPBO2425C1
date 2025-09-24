import java.util.ArrayList;
import java.util.Scanner;

public class main {
    public static void main(String[] args) {
        ArrayList<Store> list = new ArrayList<>(); // arraylist untuk menyimpan data store
        Scanner sc = new Scanner(System.in); // scanner untuk input user

        // 5 data awal
        list.add(new Store(1, "Laptop Asus ROG", 18000000, 5, "rog.jpg",
                "Asus", "2 Tahun", "Laptop",
                "Bandung", "Andi", "081234567890"));
        list.add(new Store(2, "Samsung Smart TV", 7000000, 8, "tv.jpg",
                "Samsung", "1 Tahun", "Televisi",
                "Jakarta", "Budi", "082345678901"));
        list.add(new Store(3, "Sony Headphone", 1500000, 20, "sony.jpg",
                "Sony", "6 Bulan", "Audio",
                "Surabaya", "Citra", "083456789012"));
        list.add(new Store(4, "iPhone 14", 15000000, 10, "iphone.jpg",
                "Apple", "1 Tahun", "Smartphone",
                "Medan", "Dewi", "084567890123"));
        list.add(new Store(5, "Logitech MX Master", 1200000, 15, "logi.jpg",
                "Logitech", "1 Tahun", "Mouse",
                "Yogyakarta", "Eko", "085678901234"));

        // tampilkan tabel data awal
        showTable(list);

        // tanya user apakah ingin menambahkan data baru
        System.out.print("\nApakah ingin menambahkan data baru? (y/n): ");
        String jawab = sc.nextLine();

        if (jawab.equalsIgnoreCase("y")) {
            System.out.print("Berapa data baru yang ingin ditambahkan? ");
            int n = sc.nextInt();
            sc.nextLine(); // buang newline agar input berikutnya tidak terlewat
            
            // loop input data baru sebanyak n kali
            for (int i = 0; i < n; i++) {
                System.out.println("\nInput data ke-" + (i+1));

                System.out.print("ID: ");
                int id = sc.nextInt(); sc.nextLine();

                System.out.print("Nama: ");
                String name = sc.nextLine();

                System.out.print("Harga: ");
                int price = sc.nextInt(); sc.nextLine();

                System.out.print("Stock: ");
                int stock = sc.nextInt(); sc.nextLine();

                System.out.print("Image: ");
                String image = sc.nextLine();

                System.out.print("Brand: ");
                String brand = sc.nextLine();

                System.out.print("Warranty: ");
                String warranty = sc.nextLine();

                System.out.print("Category: ");
                String category = sc.nextLine();

                System.out.print("Location: ");
                String location = sc.nextLine();

                System.out.print("Seller Name: ");
                String sellerName = sc.nextLine();

                System.out.print("Contact: ");
                String contact = sc.nextLine();

                // masukin ke list
                list.add(new Store(id, name, price, stock, image,
                        brand, warranty, category,
                        location, sellerName, contact));
            }

            // tampilkan tabel setelah update
            showTable(list);
        }

        // pesan akhir
        System.out.println("\nProgram selesai.");
    }

    // method untuk menampilkan tabel
    public static void showTable(ArrayList<Store> list) {
        System.out.println("\n=================================================================================================================================================");
        System.out.printf("| %-2s | %-20s | %-10s | %-5s | %-10s | %-10s | %-10s | %-12s | %-10s | %-10s | %-12s |\n",
                "ID", "Name", "Price", "Stock", "Image", "Brand", "Warranty", "Category", "Location", "Seller", "Contact");
        System.out.println("=================================================================================================================================================");

        // loop setiap data store di list dan tampilkan dalam format tabel
        for (Store s : list) {
            System.out.printf("| %-2d | %-20s | %-10d | %-5d | %-10s | %-10s | %-10s | %-12s | %-10s | %-10s | %-12s |\n",
                    s.getId(), s.getName(), s.getPrice(), s.getStock(), s.getImage(),
                    s.getBrand(), s.getWarranty(), s.getCategory(),
                    s.getLocation(), s.getSellerName(), s.getContact());
        }
        System.out.println("=================================================================================================================================================");
    }
}

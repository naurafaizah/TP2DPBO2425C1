public class Product {
    // atribut private untuk menyimpan data produk
    private int id;
    private String name;
    private int price;
    private int stock;
    private String image;

    public Product(int id, String name, int price, int stock, String image) {
        this.id = id;
        this.name = name;
        this.price = price;
        this.stock = stock;
        this.image = image;
    }

    // setter dan getter untuk id
    public void setId(int id) {
        this.id = id;
    }
    public int getId() {
        return this.id;
    }

    // setter dan getter untuk name
    public void setName(String name) {
        this.name = name;
    }
    public String getName() {
        return this.name;
    }

    // setter dan getter untuk price
    public void setPrice(int price) {
        this.price = price;
    }
    public int getPrice() {
        return this.price;
    }

    // setter dan getter untuk stock
    public void setStock(int stock) {
        this.stock = stock;
    }
    public int getStock() {
        return this.stock;
    }

    // setter dan getter untuk image
    public void setImage(String image) {
        this.image = image;
    }
    public String getImage() {
        return this.image;
    }

}



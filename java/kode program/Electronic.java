public class Electronic extends Product {
    private String brand;
    private String warranty;
    private String category;

    public Electronic(int id, String name, int price, int stock, String image,
                      String brand, String warranty, String category) {
        super(id, name, price, stock, image);
        this.brand = brand;
        this.warranty = warranty;
        this.category = category;
    }

    // setter dan getter untuk brand
    public void setBrand(String brand) {
        this.brand = brand;
    }
    public String getBrand() {
        return this.brand;
    }

    // setter dan getter untuk warranty
    public void setWarranty(String warranty) {
        this.warranty = warranty;
    }
    public String getWarranty() {
        return this.warranty;
    }

    // setter dan getter untuk category
    public void setCategory(String category) {
        this.category = category;
    }
    public String getCategory() {
        return this.category;
    }

}

public class Store extends Electronic {
    private String location;
    private String sellerName;
    private String contact;

    public Store(int id, String name, int price, int stock, String image,
                 String brand, String warranty, String category,
                 String location, String sellerName, String contact) {
        super(id, name, price, stock, image, brand, warranty, category);
        this.location = location;
        this.sellerName = sellerName;
        this.contact = contact;
    }

    // setter dan getter untuk location
    public void setLocation(String location) {
        this.location = location;
    }
    public String getLocation() {
        return this.location;
    }

    // setter dan getter untuk sellerName
    public void setSellerName(String sellerName) {
        this.sellerName = sellerName;
    }
    public String getSellerName() {
        return this.sellerName;
    }

    // setter dan getter untuk contact
    public void setContact(String contact) {
        this.contact = contact;
    }
    public String getContact() {
        return this.contact;
    }
    
}

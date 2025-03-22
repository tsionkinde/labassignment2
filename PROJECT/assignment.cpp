#include <iostream>
#include <string>//to make the code more readable
#define TAXRATE(preprocessor) 0.08
using namespace std;
int main() {
    
    cout<<"This is the a program that analyses a product sales and inventory for a store and it uses a c++ program";
    string productname;
    productname="mobilephone";

    int productcategory=1;
    int initialproduct=30;
    float price=1500.8f;
    int productsold={3};


    int newinventory;
    newinventory=initialproduct;
    newinventory-= productsold;
    float totalsales;
    totalsales=productsold*price;


    string inventorystatus=(newinventory<10)?"low inventory":"sufficient";

    auto salescopy=totalsales;
    cout<<salescopy<<endl;
    decltype(initialproduct)currentsinventory=80;
    cout<<currentsinventory<<endl;
    const double Rateoftax=0.07;
    cout<<"what is your product name";

    cin>>productname;
    cout<<"your product name is "<<productname<<endl;
    cout<<"whatis your product category  ";
    cin>>productcategory;
    cout<<"your product category is "<<productcategory<<endl;
    cout<<"what is your initial product  ";
    cin>>initialproduct;
    cout<<"your initial product  is "<<initialproduct<<endl;
    cout<<"what is your current price of your product";
    cin>>price;
    cout<<"your current price is "<<price<<endl;
    cout<<"what is the number of product you sold ?";
    cin>>productsold;
    cout<<"the number of product that are sold is equal to"<<productsold<<endl;
    /*if(newinventory<10) {
        inventorystatus="low inventory";
        cout<<inventorystatus<<endl;

    }
    else {
        inventorystatus="sufficient inventory";*/
    if (productcategory>=1&&productcategory<=5) {
        cout<<"you have entered a valid product category that is "<<productcategory<<endl;
        switch (productcategory) {
            case 1:
                cout << "Electronics is your product category"<<endl;
            break;
            case 2:
                cout << "Gloceries is your product category"<<endl;
            break;
            case 3:
                cout << "Clothing is your product categor"<<endl;
            break;
            case 4:
                cout<<"Stationary is your product categor"<<endl;
            break;
            case 5:
                cout<<"Miscellaneous is your product categor"<<endl;
            break;
        }
    } else{
        cout<<"you have entered invalid product category please enter the number that between 1 and 5";
}
   cout<<"Receipt"<<endl;
        int i;
   for (i=1;i<=productsold;i+=1) {
            cout<<"item"<<i<<"the price of the product is"<<price<<"birr"<<endl;


        }





    // Detailed Summary
    cout << "\nDetailed Summary:" << endl;
    cout << "Product Name: " << productname << endl;
    cout << "Category: " << productcategory << endl;
    cout << "Initial Inventory: " << newinventory << endl;
    cout << "Price per Unit: " << price << " Birr" << endl;
    cout << "Items Sold: " << productsold << endl;
    cout << "New Inventory: " << newinventory << endl;
    cout << "Total Sales Amount: " << totalsales << " Birr" << endl;
    cout << "Inventory Status: " << inventorystatus << endl;
    cout<<"Tax Rate: "<<TAXRATE(preprocesor)*100<<"%"<<endl;
    cout<<"Tax rate (const):"<<Rateoftax*100<<"%"<<endl;
return 0;}


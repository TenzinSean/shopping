#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <list>

using namespace std;

class Shopping
{
private:
    string _name;
    int _id;
    int _price;
    vector<string> purchase;
    list<string> _names;
    string _color;
    string _nick;
    int _visit;
public:
    void Menu();
    void Shopping_item();
    void Calculate_Price();
    void ShowProduct();
    void Goodbye();

    void Calculate(int x , int y) {
        int sum = x - y;
        int total = (sum * 50/100) - sum;
        cout << "Total price is : " << endl;
        cout << total << " CHF" << endl;


    }

    void Calculate_Price1(){
        cout << "Please enter your name: " << endl;
        cin >> _name;
        cout << "Please enter your password: " << endl;
        cin >> _id;
        if ( _name == "Tenzin" && _id == 123) {
            cout << "Welcome : " << _name;
            cout << "Please enter your regular visit : " << endl;
            cin >> _visit;
            if(_visit < 3){
                cout << "You have 10% discount" << endl;
            } else {
                cout << "You dont have discount sorry: " << _name;
            }
        } else {
            cout << "Sorry you are not in member:" << endl;
        }
    }

    
};


void Shopping:: Menu() {

    std::cout<<"\n\n Welcome to Tashi Shop"<<std::endl;
    std::cout <<"\n\n Nice to see the menu"<<std::endl;
    std::cout << "Please enter your name:"<<std::endl;
    std::cout << "User name : "<<std::endl;
    cin >> _name;
    cout << "Password : "<<endl;
    cin >> _id;
    if(_name == "tenzin" && _id == 123) {
        cout << "Welcome " << _name << endl;
        cout << "Enter your fav color: " << endl;
        cin >> _color;
        cout << "Enter your nick name :" << endl;
        cin >> _nick;
        if (_color == "red" && _nick == "tenzin") {
            cout << "Nice color " << _color << "user name " << _nick << endl;

        } else {
            cout << "Bad choice " << endl;
        }
    } else if(_name == "Dolma" && _id == 123) {
        cout << "Bonjour " << _name << endl;
    } else if (_name == "Chokrab" && _id == 123) {
        cout << "Guten Tag " << _name << endl;
    } else {
        cout << "Sorry you are the not member our club" << endl;

    }


    cout << "Now continue the shopping" << endl;



}


void Shopping::Shopping_item() {
    cout <<"\n Please select the product";
    cout << "\n You should buy min 10 product then 10% discount";
    cout <<"**********************************************************";
    cout << endl;
    cout << "1- Coke " << endl;
    cout << "2- Cake" << endl;
    cout << "3- Brownie" << endl;

    cout << "Enter the product now " << endl;
    string coke;
    string cake;
    string pensi;
    for(int i = 0; i<3; i++){
        cin >> coke;
        if(coke == "coke1"){
            cout << "The Price: ";
            cout << 10;
            cout << endl;
        } else if(coke == "cake1") {
            cout << "The Price: ";
            cout << 20;
            cout << endl;
        } else if(coke == "po"){
            cout << "The Price : ";
            cout << 20;
            cout << endl;
        } else {
            cout << "no items are found";
            cout << endl;
        }
    }
    
    
    cout<<"Total amount is " << endl;
    cout << "******1- Cake and Coke Price ******" << endl;
    cout << "******2- Cake and Pensi or Pensi and Cake Price*****" << endl;
    cout << "******3 - All three items Price are :*******" << endl;
    int numbers;
    cin >> numbers;
    switch(numbers){
        case 1:
            cout << "The final price :" << endl;
            Calculate(10,2);
            break;
        case 2:
            cout << "The final price : " << endl;
            Calculate(10,1);
            break;
        case 3:
            cout << "The three items price : " << endl;
            Calculate(10,4);
            break;
        default:
            cout << "no way";
    }

        cout << "Thank you for purchase our product: " << endl;
        cout << "*************  ************* " << endl;
        cout << "    ******       ***** " << endl;
        cout << "      88         88      " << endl;
        cout << "            00      " << endl;
        cout << "            00       "<<endl;
        cout << "   I             I        "<< endl;
        cout << "    I              I"  << endl;

    }


void Shopping::Calculate_Price() { /// Working on this file 
    cout << "Customers price discount lists: " << endl;
    Calculate_Price1();


}

void Shopping::ShowProduct() {
    cout << "Shopping product site"<< endl;
    cout << "1- Coke" << endl;
    cout << "2 - Cake" << endl;
    cout << "3 -Pensi" << endl;
    cout << "4 -Chips" << endl;
    cout << "5 -Drinks" << endl;
    int noms;
    cin >> noms;
    switch(noms){
        case 1:
            cout << "Coke" << endl;
            cout << "Price is " << endl;
            cout << "10 chf" << endl;
            break;
        case 2:
            cout << "Cake " << endl;
            cout << "Price is " << endl;
            cout << "15 CHF " << endl;
            break;
        case 3:
            cout << "Pensi " << endl;
            cout << " Price is " << endl;
            cout << "20 CHF " << endl;
            break;
        case 4:
            cout << "Chips " << endl;
            cout << "Price is " << endl;
            cout << "25 CHF" << endl;
            break;
        case 5:
            cout << "Drinks " << endl;
            cout << "Price is " << endl;
            cout << "30 CHF " << endl;
            break;
        default:
            cout << "We cant find in the list" << endl;
        

    }



}

void Shopping::Goodbye() {

    list<string> _names;
    _names.push_back("Tenzin");
    _names.push_back("Dolma");
    _names.push_back("chokrab");

    list<string>::iterator pos = _names.begin();
    cout << *pos << endl;
    cout << "Good bye" << endl;
    cout <<"Auweider Chie" << endl;
    cout << "Aurevoir "<< endl;


}

void Intro() {
    cout << "WELCOME TO TASHI SHOP" << endl;
    cout << "OUR SHOP ARE LOCALLY AND PRICE IS SUITABLE" << endl;
    cout << "****************************************************"<< endl;
    cout << "BY TASHI"<< endl;
    cout << "Website: www.tashi.com" << endl;
}


int main()
{

    Shopping Shop;
    int num;
    Intro();
    do {
        system("cls");
        cout<<"\n\n\n\tMAIN MENU- Tashi-Shop";
        cout<<"\n\n\n\t01. Shop Menu";
        cout<<"\n\n\n\t02. Shop Item";
        cout<<"\n\n\n\t03. Show Product";
        cout<<"\n\n\n\t0.4. Calculate Price";
        cout<<"\n\n\n\t0.5. Au revoir";
        cout<<"\n\n\n\t0.6. Exit";
        cout<<"\n\n\n\t SELECT YOUR OPTION (1-8)";
        cin>>num;
        system("cls");
        switch(num){
            case 1:
                Shop.Menu();
                break;
            case 2:
                Shop.Shopping_item();
                break;
            case 3:
                Shop.Calculate_Price();
                break;
            case 4:
                Shop.ShowProduct();
                break;
            case 5:
                Shop.Goodbye();
                break;
            default:
                cout<<"Thank you for coming"<< endl;
            }
            cin.get();
            cin.ignore();
        }while(num!=6);
        
        return 0;


}

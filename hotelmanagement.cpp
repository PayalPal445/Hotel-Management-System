#include<iostream>
#include<string>
#include<map>
using namespace std;
//customer details
struct customer {
    string name;
    string address;
    string phone;
    int days;
    double payments;
};
// hotel function
class Hotel {
    private:
    map<int, customer> rooms;//room number
    public:
    void bookroom( ){
        int roomno;
        customer c;
        cout<<"Enter room number: ";
        cin>>roomno;
        
        if(rooms. find(roomno) != rooms.end()){
            cout<<" Room already booked!\n";
            return;
        }
        cout<<"Enter Name : ";
        cin.ignore();
        getline(cin, c.name);

        cout<<"Enter Address: ";
        getline(cin, c.address);

        cout<<"Enter phone number : ";
        getline(cin, c.phone);

        cout<<"Enter No. of Days: ";
        cin>>c.days;

        c.payments  = c.days * 1000;
        rooms[roomno] = c;
        cout << "Room booked succesfully !\n";
    }
    void viewcustomer() {
        int roomno;
        cout<<"Enter room no to view";
        cin>>roomno;
        if(rooms.find(roomno)==rooms.end()){
            cout<<"Rooms not found1\n";
            return;
        }
        customer c= rooms[roomno];
        cout<<"\n customer details: \n ";
        cout<<"Name : "<<c.name<<"\n";
        cout<<"Address : "<<c.address<<"\n";
        cout<<" Phone : "<<c.phone<<"\n";
        cout<<" Days Stay : "<<c.days<<"\n";
        cout<<" Total Payments Rs."<<c.payments<<"\n";
    }
    void viewAllRooms( ){
        if(rooms.empty()){
            cout<<" No rooms are bookes. \n";
            return;
        }
        cout<<"\n All booked Rooms : ";
        for( auto& pair : rooms){
            cout<<" Room No: "<<pair.first<<"Name : "<<pair.second.name<<"\n";
        }
    }

    void checkout( ){
        int roomno;
        cout<<"Enter Room Number to chekout: ";
        cin>>roomno;
        if(rooms.find(roomno)==rooms.end()){
            cout<<"Room not found !\n";
            return ;
        }
        cout<<"Customer "<<rooms[roomno].name<<" has been checked out.\n";
        rooms.erase(roomno);
    }
};

int main ( ){
    Hotel hotel;
    int choice;

    do{
        cout<<"============HOTEL MANAGEMENT MENU =======\n";
        cout<<" 1. BOOK A ROOM \n";
        cout<<" 2. VIEW CUSTOMER RECORD \n";
        cout<<" 3. VIEW ALL BOOKED ROOMS \n";
        cout<<" 4. CHECKOUT\n";
        cout<<" 5. EXIT\n";
        cout<<" Enter Choice : ";
        cin>>choice;
        switch (choice){
            case 1: hotel.bookroom( );
            break;

            case 2:  hotel.viewcustomer();
            break;


            case 3: hotel.viewAllRooms();
            break;
            case 4: hotel.checkout();
            break;
            
            case 5: cout<<"THANKU FOR USING SYSTEM !\n";
            break;

            default  : cout<<" Invalid choice!\n";
            break;
        } }
       while(choice != 5);
    return 0;
}
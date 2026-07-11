//create a user class witrh properties : id(private),username(public ),and password(private),its id should be initialised in a parameterised constructor.
// it should have a getter and setter for password 


#include<iostream>  
#include<string>
using namespace std ;

class User{
    int id;
    string password;

    public:
      string username;
    User(int id){
        this->id=id;
    }
       // setter 
    void setPassword(string password){
       this->password=password;
    }


    // getter 
    string getPassword(){
        return password;
    }

  

};


int main(){
    User u1(1234);
    u1.username="sid";
    u1.setPassword("extreme312");
    
    cout<<"username : "<<u1.username<<endl;
    cout<<"password : "<<u1.getPassword()<<endl;
    


return 0;

}

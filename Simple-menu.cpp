#include <iostream>

class menuItem{
   public:
      std::string menu(){
        return "1.)Option 1\n2.)Option 2\n3.)Exit";
   }
   
};

int main() {
   menuItem menuitem;
   int choice;
   bool exit_choice = 0;
   std::cout << "Simple Menu\n";
   std::cout << "============\n";
   do{

      std::cout << menuitem.menu();
      std::cout <<"\n\nWhat do you want to do? <Type 1 to 3>: ";
      std::cin >> choice;
      std::cout << choice;

      switch(choice){
         case 1:
         std::cout << "\nselected 1";
         break;
         case 2:
         std::cout << "\nselected 2";
         break; 
         case 3:
         std::cout << "\nselected 3";
          exit_choice = 1;
         break;
   
       }
      } while(!exit_choice);
  
   return 0;
}

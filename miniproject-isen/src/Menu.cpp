/*int GetInput()
     {
         int choice;
        cin >> choice;
        return choice;
     }

void DisplayMenu()
    {
    cout << "Menu\n";
        cout << "What figure do you want to create?\n";
        cout << "1 - Cross\n";
        cout << "2 - Square\n";
        cout << "3 - Rectangle\n";
        cout << "4 - Quit\n";
        cout << "Selection: ";
    }
int choice = 0;
    system("cls");
            DisplayMenu();
            choice = GetInput();
            switch(choice) {
                    case 1:
                            cout << "A Cross!\n";
                            Cross draw(width, height);
                            draw.save(std::string("Cross.bmp"));
                            break;
                    case 2:
                            cout << "A Square!\n";
                            Square draw(width, height);
                            draw.save(std::string("Square.bmp"));
                            break;
                    case 3:
                            cout << "A Rectangle!\n";
                            Rectangle draw(width, height);
                            draw.save(std::string("Rectangle.bmp"));
                            break;
                    case 4:
                            cout << "Goodbye!";
                            system("exit");
                            break;

                    default:
                            break;
                   }
*/

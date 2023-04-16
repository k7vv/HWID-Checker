// HWID Checker.cpp ------------- by kadee
//
// Important Info:
// THIS IS A FREE SOFTWARE. IF YOU PAID ANYONE FOR THIS YOU SHOULD ISSUE A REFUND.
// BY USING THIS CODE / SOFTWARE YOU ABSORB FULL RESPONSIBILITY. I AM NOT RESPONSILBE FOR ANY DAMAGES CAUSED BY MISUSE OF THIS TOOL.

// default include.
#include <iostream>
using namespace std;

// includes modules to display usernames.
#include <windows.h>
#include <Lmcons.h>

// std::cout displays text or invisible spaces. uses R to ignore commands and display ASCII characters.
int main()
{
    int main();
    {
        SetConsoleTitle(TEXT("HWID Checker"));
        ;
    }
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    std::cout << R"(   __ __        __              __ ___      _________    _______           __          
  / //_/__ ____/ /__ ___ ___   / // / | /| / /  _/ _ \  / ___/ /  ___ ____/ /_____ ____
 / ,< / _ `/ _  / -_) -_|_-<  / _  /| |/ |/ // // // / / /__/ _ \/ -_) __/  '_/ -_) __/
/_/|_|\_,_/\_,_/\__/\__/___/ /_//_/ |__/|__/___/____/  \___/_//_/\__/\__/_/\_\\__/_/   )";
    std::cout << "  discord.gg/clusiive\n";
    std::cout << "                                                       \n";
    int main();
    {
        TCHAR name[UNLEN + 1];
        DWORD size = UNLEN + 1;
        // gets the username and displays it, if the user is not named it displays a different text.
        if (GetUserName((TCHAR*)name, &size))
            wcout << L"  Hello, " << name << L"!\n";
        else
            cout << "  Hello, unnamed person!\n";
    }
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    system("pause"); // pauses the application and waits for user input to continue. displays the text "press any key to continue".
    system("cls"); // system cls clears the cmd screen. in this case is to clear unwanted text.
    std::cout << R"(   __ __        __              __ ___      _________    _______           __          
  / //_/__ ____/ /__ ___ ___   / // / | /| / /  _/ _ \  / ___/ /  ___ ____/ /_____ ____
 / ,< / _ `/ _  / -_) -_|_-<  / _  /| |/ |/ // // // / / /__/ _ \/ -_) __/  '_/ -_) __/
/_/|_|\_,_/\_,_/\__/\__/___/ /_//_/ |__/|__/___/____/  \___/_//_/\__/\__/_/\_\\__/_/   )";
    std::cout << "  discord.gg/clusiive\n";
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    std::cout << "----------- SERIALS ------------\n";
    std::cout << "                                                       \n";
    std::cout << "[ System UUID ]\n";
    std::cout << "                                                       \n";
    system("wmic csproduct get UUID"); // gets the system UUID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ Motherboard : Serial Number ]\n";
    std::cout << "                                                       \n";
    system("wmic baseboard get product,serialnumber"); // gets the mobo name & serial ID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ Disk Name : Serial Number ]\n";
    std::cout << "                                                       \n";
    system("wmic diskdrive get model,serialnumber"); // gets the diskdrive name & serial ID. displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "[ MAC Address ]\n";
    system("getmac"); // gets MAC Address(s). displays it in text form.
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    std::cout << "Refresh to check again -->\n";
    system("pause");
    system("cls");
    // copy pasted a second time so they can refresh and see if their ID's have changed.
    std::cout << R"(   __ __        __              __ ___      _________    _______           __          
  / //_/__ ____/ /__ ___ ___   / // / | /| / /  _/ _ \  / ___/ /  ___ ____/ /_____ ____
 / ,< / _ `/ _  / -_) -_|_-<  / _  /| |/ |/ // // // / / /__/ _ \/ -_) __/  '_/ -_) __/
/_/|_|\_,_/\_,_/\__/\__/___/ /_//_/ |__/|__/___/____/  \___/_//_/\__/\__/_/\_\\__/_/   )";
    std::cout << "  discord.gg/clusiive\n";
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    std::cout << "----------- SERIALS ------------\n";
    std::cout << "                                                       \n";
    std::cout << "[ System UUID ]\n";
    std::cout << "                                                       \n";
    system("wmic csproduct get UUID");
    std::cout << "                                                       \n";
    std::cout << "[ Motherboard : Serial Number ]\n";
    std::cout << "                                                       \n";
    system("wmic baseboard get product,serialnumber");
    std::cout << "                                                       \n";
    std::cout << "[ Disk Name : Serial Number ]\n";
    std::cout << "                                                       \n";
    system("wmic diskdrive get model,serialnumber");
    std::cout << "                                                       \n";
    std::cout << "[ MAC Address ]\n";
    system("getmac");
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    std::cout << "                                                       \n";
    std::cout << "Exit -->\n";
    system("pause");
    system("cls");
    // Ends software. If you want to refresh more just copy paste it again.

    // THIS IS FOR EDUCATIONAL PURPOSES ONLY.
    // If u use this source give credit. - kadee.

}

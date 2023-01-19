# HotelManagementSystem
This is my semester mini-project.
 Hotel Transylvania
This program is a sample hotel management system that simulates some basic functionality of a hotel. The user can interact with the program through a command line interface and make different selections depending on the task they want to perform.

The program is written in C and makes use of several structs to represent different aspects of the hotel such as Hotel, Feat, Details, Hotels, and Menu. The program also uses file handling to store customer details and invoices.

Functionality provided by the program include:

Checking the availability of hotel rooms
Knowing basic room amenities
Booking/rebooking rooms
Viewing customer details and invoices
Canceling bookings
Viewing the restaurant menu and bills
This program is intended to be used as a sample or a starting point for building a more complex hotel management system.

Additional notes
The program uses the conio.h library which is not a standard library of C.
The program uses the fopen() function which is a file handling function, so it requires a file name "bookings.txt" to be present in the same directory, otherwise, it will give an error.
The program uses the fprintf() function which is a file handling function, so it requires a file name "invoice.txt" to be present in the same directory, otherwise, it will give an error.
The program uses the fflush(stdin); which is not a standard library, it is a non-standard function which can be used in Turbo C++ IDE and other Windows based compilers but not in GCC based compilers.
Usage
To run the program, you will need a C compiler such as GCC.

Download the source code.
Open a terminal and navigate to the directory where the source code is located.
Compile the code by running the command: gcc hotel.c -o hotel
Run the executable by running the command: ./hotel
Follow the prompts in the command line interface to interact with the program.

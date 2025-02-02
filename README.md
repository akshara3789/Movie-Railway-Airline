#include <stdio.h>

int main() {
    FILE *file = fopen("README.md", "w"); // Open file in write mode

    if (file == NULL) {
        printf("Error creating README.md file!\n");
        return 1;
    }

    // Writing the README content
    fprintf(file, "# Ticket Booking System\n\n");
    fprintf(file, "## Introduction\n");
    fprintf(file, "This is a simple ticket booking system written in C that allows users to book, view, and cancel tickets for trains, movies, and airlines. The system also supports UPI and net banking payment methods.\n\n");
    
    fprintf(file, "## Features\n");
    fprintf(file, "- *User Login System*\n");
    fprintf(file, "- *Train Ticket Booking* (Reservation, Viewing Details, Cancellation)\n");
    fprintf(file, "- *Movie Ticket Booking*\n");
    fprintf(file, "- *Airline Ticket Booking*\n");
    fprintf(file, "- *Print Ticket*\n");
    fprintf(file, "- *Payment via UPI & Net Banking*\n\n");

    fprintf(file, "## Installation\n");
    fprintf(file, "1. Ensure you have a C compiler (e.g., GCC) installed.\n");
    fprintf(file, "2. Compile the program using:\n");
    fprintf(file, "   sh\n");
    fprintf(file, "   gcc CS102PROJECT.c -o booking_system\n");
    fprintf(file, "   \n");
    fprintf(file, "3. Run the executable:\n");
    fprintf(file, "   sh\n");
    fprintf(file, "   ./booking_system\n");
    fprintf(file, "   \n\n");

    fprintf(file, "## Usage\n");
    fprintf(file, "- The system prompts the user to log in.\n");
    fprintf(file, "- Select the type of ticket you want to book.\n");
    fprintf(file, "- Enter necessary details (e.g., name, train number, seat preference).\n");
    fprintf(file, "- Make a payment using UPI or Net Banking.\n");
    fprintf(file, "- View or cancel bookings if needed.\n\n");

    fprintf(file, "## Dependencies\n");
    fprintf(file, "- The program requires standard C libraries like stdio.h, stdlib.h, and string.h.\n");
    fprintf(file, "- May need conio.h (only works in Turbo C++). Consider removing it for modern compilers.\n\n");

    fprintf(file, "## Future Improvements\n");
    fprintf(file, "- Implement a database for persistent ticket storage.\n");
    fprintf(file, "- Add a graphical user interface.\n\n");

    fprintf(file, "## Author\n");
    fprintf(file, "- *Varun*\n");

    fclose(file); // Close the file
    printf("README.md file created successfully!\n");

    return 0;
}

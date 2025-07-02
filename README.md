Library Management System (C++)

A command-line based Library Management System implemented in C++ using Object-Oriented Programming. This project supports login/logout functionality, book borrowing/returning, user history tracking, and data persistence via CSV files.

⸻

Features
	•	User Roles:
	•	Student: Can issue up to 5 books for 30 days. Fine: ₹2/day after due date.
	•	Faculty: Can issue unlimited books for 60 days. Fine: ₹5/day after due date.
	•	Librarian: Can manage books and users (add/update/delete).
	•	Book Management:
	•	View all books
	•	Check availability
	•	Issue and return books
	•	Account Management:
	•	Login & signup
	•	Auto-persistence to userdata.csv
	•	Secure CSV write with file locking
	•	Transaction Logs:
	•	Tracks all borrow and return activity
	•	Stored in history.csv
	•	Persistent Storage:
	•	Data saved and loaded from:
	•	data/books.csv
	•	data/userdata.csv
	•	data/history.csv

⸻

Directory Structure

.
├── data/
│   ├── books.csv
│   ├── history.csv
│   └── userdata.csv
├── include/
│   ├── account.h
│   ├── book.h
│   ├── faculty.h
│   ├── librarian.h
│   ├── library.h
│   ├── logger.h
│   ├── student.h
│   ├── transaction.h
│   └── utils.h
├── src/
│   ├── account.cpp
│   ├── book.cpp
│   ├── faculty.cpp
│   ├── librarian.cpp
│   ├── library.cpp
│   ├── logger.cpp
│   ├── main.cpp
│   ├── student.cpp
│   ├── transaction.cpp
│   └── utils.cpp
└── build/
    └── main.out


⸻

How to Compile and Run

Make sure you have g++ installed and you’re in the root project directory.

Compilation:

g++ -std=c++17 -Iinclude src/*.cpp -o build/main.out

Run the program:

./build/main.out


⸻

CSV Locking

This system uses file locking (via fcntl or platform-specific techniques) to ensure that multiple users cannot write conflicting data into CSV files (like userdata.csv) simultaneously.

This prevents:
	•	Duplicate usernames during signup
	•	Concurrent file overwrites

⸻

Data Format

books.csv

Genre,Title,Author,Publisher,Year,ISBN,status
Fantasy,Harry Potter,J.K. Rowling,Bloomsbury,1997,ISBN001,Available

userdata.csv

username,type,password,num_borrowed,num_transactions
ISBN,timestamp
borrow_type,username,isbn,timestamp
...

history.csv

transaction_type,username,isbn,YYYY-MM-DD HH:MM:SS


⸻

Author

Developed by Sahil Pandey
Undergraduate, Electrical Engineering
IIT Kanpur

⸻

License

This project is for academic use under CS253 - Software Development and Operations.
# Library Management System (C++)

A console-based library management system written in C++ by a team of three students as a major course assignment.

## About the Project

This is a menu-driven program where a user logs in and manages a small collection of books: adding, viewing, searching, and sorting them. The team built it to practice object-oriented programming and to combine several core C++ concepts into one working application.

## Features

- **Login System:** the user authenticates with a name and ID before accessing the menu
- **Add Book:** enter a book's title, author, and ID
- **Show Books:** display every book in the collection
- **Search Book:** find a book by ID, with an option to retry if it isn't found
- **Sort by ID:** order the collection using bubble sort
- **Menu-Driven Interface:** navigate everything through numbered options

## How It Works

1. The user logs in with a name and ID.
2. The main menu lists the available actions by number.
3. The user picks an action, the program runs it, and control returns to the menu.

## Concepts Practiced

- Classes and objects (OOP)
- Storing and managing records for multiple books
- Bubble sort implementation
- Search logic with retry handling
- Loops and conditionals for menu flow
- Console input and output handling
- Teamwork on a shared codebase

## Limitations and Possible Improvements

- Bubble sort is simple but slow on large collections. `std::sort` would be a better choice.
- Search works by ID only. Search by title or author would be more practical.
- There is no way to edit or delete a book yet.
- Records could be saved to a file or database so they persist between runs.

## Team

Developed by a team of three students as a group assignment.

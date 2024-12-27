# Summary
This project is made for learning C++ programming language. It is a roadmap with assignments to help you learn C++ from scratch. The assignments are divided into different stages, starting from basic concepts and moving towards more advanced topics. Each assignment is designed to build on the previous one, helping you gradually improve your C++ skills.

# C++ Learning Roadmap with Assignments

## Stage 1: C++ Fundamentals
- [ X ] **Assignment 1: Calculator Program**
  - Write a basic calculator that performs addition, subtraction, multiplication, and division.
  - Use control flow to process user inputs.
  - Handle errors like division by zero and invalid inputs.

- [ ] **Assignment 2: Student Records System (OOP)**
  - Create a `Student` class with properties like `name`, `ID`, and `grades`.
  - Implement methods to add grades and calculate averages.
  - Add a `Classroom` class to manage multiple students and calculate the class average.

- [ ] **Assignment 3: Basic File I/O Program**
  - Read a list of names from a file and write them to another file in uppercase.
  - Handle file errors like "file not found" or empty files gracefully.

---

## Stage 2: Intermediate C++ Concepts
- [ ] **Assignment 4: Custom Data Structure - Linked List**
  - Implement a singly linked list with `add`, `remove`, `search`, and `print` methods.
  - Write a destructor to properly free allocated memory.

- [ ] **Assignment 5: Template-Based Stack**
  - Create a generic `Stack` class using templates.
  - Add `push`, `pop`, `top`, and `isEmpty` methods.
  - Test the stack with multiple data types (e.g., `int`, `string`).

- [ ] **Assignment 6: Simple Multithreaded Program**
  - Write a program that spawns threads to calculate factorials for different inputs.
  - Use a mutex to synchronize shared resources and prevent race conditions.

---

## Stage 3: C++ for Systems Programming
- [ ] **Assignment 7: Bitwise Manipulation**
  - Implement functions to set, clear, and toggle specific bits in an integer.
  - Write a function that counts the number of set bits in an integer.

- [ ] **Assignment 8: Simple HTTP GET Request Using Raw Sockets**
  - Establish a TCP connection to a server (e.g., google.com on port 80).
  - Send an HTTP GET request and print the server's response.

- [ ] **Assignment 9: Multi-Client Chat Server (TCP)**
  - Build a chat server that handles multiple clients using threads.
  - Implement message broadcasting so all clients receive messages from others.

---

## Stage 4: DNS Resolver Project
- [ ] **Assignment 10: DNS Query Packet Builder**
  - Write a function to construct a DNS query packet manually.
  - Encode domain names in DNS format (e.g., `www.example.com`).

- [ ] **Assignment 11: Send and Receive DNS Query over UDP**
  - Use raw UDP sockets to send a DNS query to a public DNS server (e.g., 8.8.8.8).
  - Parse the server's response and extract information like the IP address.

- [ ] **Assignment 12: Implement Recursive DNS Lookup**
  - Extend your resolver to handle iterative lookups if the DNS server refers to another server.
  - Perform recursive lookups until an answer is obtained.

---

## Stage 5: Optimization and Testing
- [ ] **Assignment 13: Implement DNS Response Caching**
  - Add caching to your resolver to store DNS responses temporarily.
  - Implement cache invalidation based on TTL values.

- [ ] **Assignment 14: Stress Testing and Performance Optimization**
  - Simulate high query volumes to stress-test the resolver.
  - Optimize your resolver for concurrency and efficiency.

---

## Stage 6: Final Project
- [ ] **Final Project: Complete DNS Resolver**
  - Combine all components to create a fully functional DNS resolver.
  - Ensure it can handle recursive lookups, caching, and multithreaded performance.
  - Write documentation, including a README and installation instructions.


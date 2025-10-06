# STI-ccpp-assignment1
This repo contains the code for assignment1 in C/C++ course at STI

## Contents
- [Setup Instruction](#-Setup)
- [System Overview](#-System)
- [Background](#-Background)
- [Task](#-Task)
- [Requirements Specification](#-Requirements)
  - [Data Input](#-1.)
  - [Data Processing](#-2.)
  - [Menu Interface](#-3.)
  - [Structure and Quality](#-4.)

---
 ## Setup Instructions
- Clone the repo: `git clone or Visual Studio Git GUI`
- Open the solution file `.sln` in Visual Studio
- Build and run the project
---
### System Overview
The system consists of a command-line C/C++ application that:
- Accepts user input of measurement data.
- Processes and analyzes the data.
- Displays statistical results.
- Allows user interaction via a text-based menu.

#### Users and Use Cases

The intended user is a student or developer learning fundamental data handling and programming concepts in C/C++.
The user will interact with the program through simple menu options to add, view, and analyze data.

---

## *Assignment 1: Data Collector and Analysis Tool for Measurement Values*
### Background
In IoT systems, measurement data is often collected from sensors (e.g., temperature, humidity, pressure).  
To understand and utilize these values, they need to be analyzed.
### Task
Develop a C/C++ program that manages a list of measurement values (e.g., temperature).  
Your source code should be stored in a GitHub repository, and your work and solution must be documented in this README file.  

## *Requirements Specification*
#### 1. Data Input
- The user must be able to manually enter a number of measurement values.  
- The program must handle invalid input robustly.  
- *(Challenge: allow both integer and decimal values.)*

#### 2. Data Processing
*The program must calculate and display:*
- Number of values
- Sum of values
- Mean (average) value
- Minimum and maximum values
- Variance and standard deviation

#### 3. Menu Interface (UI)
*The user must be able to select actions through a menu:*
1. Add new measurement values
2. Display statistics
3. Search for a specific value
4. Sort the list of measurement values *(optional: ascending/descending)*
5. Exit the program

#### 4. Structure and Quality
- The program should be divided into multiple functions (or methods, if using C++).  
- The code must be well-commented and documented.  
- The program must handle errors (e.g., empty list during analysis).

---


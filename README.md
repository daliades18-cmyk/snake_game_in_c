# Snake Game in C

## Overview

Snake Game is a simple console-based game developed using C programming language. The project was created to understand basic programming concepts and simple game logic using C.

In this game, the player controls a snake and tries to eat fruits to increase the score. The game ends when the snake hits the wall.

This project is beginner friendly and useful for understanding how loops, conditions, functions, and arrays work in real programs.

---

# Steps to Run the Project

## Using VS Code

### Step 1
Open Visual Studio Code.

## Step 2
Create a new folder for the project.

Example:
snake_game

## Step 3
Inside the folder, create a file named:

snake.c

## Step 4
Copy and paste the code into snake.c

## Step 5
Open the terminal in VS Code.

## Step 6
Compile the program using:

gcc snake.c -o snake

## Step 7
Run the program using:

./snake

---

# Online Method

## Step 1
Open OnlineGDB.

## Step 2
Select C language.

## Step 3
Copy and paste the code.

## Step 4
Click Run.

---

# Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- OnlineGDB

---

# Features

- Snake movement
- Fruit generation
- Score tracking
- Game over condition
- User controls
- Console-based gameplay

---

# Controls

| Key | Action |
|------|--------|
| 1 | Move Left |
| 2 | Move Right |
| 3 | Move Up |
| 4 | Move Down |
| 0 | Exit Game |

---

# How the Program Works

## Snake Movement

The snake moves continuously based on user input.

The player changes the direction using keyboard controls.

---

## Fruit Generation

A fruit is generated randomly inside the game board.

When the snake reaches the fruit:
- score increases
- new fruit is generated

---

## Collision Detection

The game checks:
- if the snake hits the wall
- if the game should end

If collision occurs:
- game over message is displayed

---

# Concepts Used

This project uses:
- Variables
- Arrays
- Loops
- Functions
- Conditions
- User input
- Basic game logic

---

# Learning Outcomes

From this project, I learned:
- Basic game development logic
- Function usage in C
- Array handling
- User input handling
- Console-based graphics
- Program flow control

---

# File Structure

```text
snake-game-c/
│
├── snake.c
└── README.md

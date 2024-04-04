# Left Right Center
## Introduction
This project is a simulation of a simplified version of the dice game Left, Right, and Center. This game is entirely a game of change, with no skill or player decisions (except for a die roll).

## Game Rules
In this simulation, the user will specify the number of players in the game. The names of the players will be given to you. The first player in the list of names will go first. Players will sit in a circle in the order that they appear in the list of names with a pot in the middle of the table. Each player will start with 3 chips, and roll one die for each chip, with a maximum of three dice rolled per turn. A player will the roll their 6 sided dice, and do something based on the result of those rolls. For each die, they will follow the instructions in the table:
  
  If the player rolls a 1, 2, or 3 (this represents a dot), the player will keep one of their chips
  
  If the player rolls a 4 (this represents a left), then the player passes one chip to the left (clockwise)
  
  If the player rolls a 5 (this represents a center), then the player places one chip in the pot
  
  If the player rolls a 6 (this represents a right), then the player passes one chip to the right (counter-clockwise)

After that turn, the next player will take their turn. The game continues until only one person has chips. That player is the winner. If a player has no chips, they are still in the game, but do not get to roll a die. They can begin rolling again if they are passed a chip by one of their neighbors.

## Data Structures and C Concepts
This project utilizes a typedef array for the dice rolls DOT, LEFT, RIGHT, CENTER

This project utilizes a random seed generator to generate dice rolls

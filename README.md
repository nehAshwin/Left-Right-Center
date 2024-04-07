# Left Right Center Game

## Overview
Welcome to Left Right Center, a simplified simulation of the dice game. This game relies solely on chance, with players making no strategic decisions other than rolling a die.

## Game Mechanics
Players specify the number of participants at the beginning of the game. The players' names are provided, and gameplay follows a clockwise order based on the given list of names. Players sit in a circular formation around a central pot on the table. Each player starts with three chips and rolls one die per chip, with a maximum of three dice per turn.

Upon rolling the dice, players take actions based on the results:
- Rolling 1, 2, or 3 (dot) allows the player to retain one of their chips.
- Rolling 4 (left) requires the player to pass one chip to the player on their left (clockwise).
- Rolling 5 (center) entails placing one chip into the central pot.
- Rolling 6 (right) necessitates passing one chip to the player on their right (counter-clockwise).

Play proceeds in turns, with each player taking their actions before passing to the next player. The game continues until only one player holds any chips, declaring them the winner. Players without chips remain in the game but forfeit their turn until they receive a chip from a neighboring player.

## Implementation Details
- The project employs a typedef array to represent the outcomes of dice rolls: DOT, LEFT, RIGHT, and CENTER.
- Random seed generation is utilized to simulate dice rolls.

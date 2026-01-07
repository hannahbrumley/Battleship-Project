# Battleship Game

## Overview

This is a text-based Battleship game where the player competes against a computer opponent. The player and computer each have a 9x9 grid where they place their ships, and the goal is to guess and sink the opponent's ships.

The game includes the following features:
- **Ship Placement:** The player and computer randomly place their ships on the grid.
- **Attack Phase:** The player takes turns attacking the opponent’s ships, while the computer randomly guesses locations to attack.
- **Game Progress:** The game tracks hits and misses, and displays the status of each player's grid.
- **Win Condition:** The game ends when either the player or the computer sinks all the opponent's ships.

## Features

- **Ship Types:** Includes a Patrol Boat (2 spots), Submarine (3 spots), Destroyer (4 spots), and Helicopter Carrier (5 spots).
- **Player vs Computer:** The player places ships manually, and the computer places ships randomly. Both then take turns attacking.
- **Hit/Miss Indicators:** The grids display 'x' for hits and 'o' for misses.
- **Game Over:** The game ends when either the player or the computer has sunk all the opponent's ships.

## Classes

### `Computer`

- Handles the logic for the computer’s ship placement, attacks, and printing the computer’s grids.
- Randomly places the ships on a 9x9 grid and guesses locations to attack.

### `Player`

- Manages the player's ship placement and attack logic.
- Allows the player to enter coordinates for placing ships and making attacks.
- Displays both the player's and computer’s grids during the game.

### `ScreenDrawer`

- Handles the drawing and clearing of the game screen, including the grids for both the player and computer.
- Manages the screen size and ensures that the game interface is drawn correctly.


## Running the Program

The program will prompt the player to place their ships on a 9x9 grid by entering the coordinates for each ship. After the ships are placed, the player will take turns attacking the computer’s ships, and the computer will also attack the player's ships. The game ends when either the player or the computer sinks all the opponent's ships.

### Example:


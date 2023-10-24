# Inventory Management System

This is a simple C++ project that demonstrates an inventory management system. Players can add, remove, and use items within their inventory. The project is organized into different item types, including health potions, force potions, weapons, and maps.

## Table of Contents

- [Features](#features)
- [Prerequisites](#prerequisites)
- [Getting Started](#getting-started)
- [Usage](#usage)
- [Documentation](#documentation)
- [Contributing](#contributing)
- [License](#license)

## Features

- Add various item types to the player's inventory.
- Remove items from the inventory.
- Use items, which can trigger different effects based on the item type.
- Save and load the player's inventory from a JSON file.

## Prerequisites

- C++ compiler (supporting C++11 or later)
- [nlohmann/json library](https://github.com/nlohmann/json) for JSON handling (already included in the project)

## Getting Started

1. Clone this repository to your local machine:.
git clone https://github.com/your-username/inventory-management.git


2. Build the project using your C++ compiler:.
g++ -o main main.cpp -std=c++11


3. Run the executable:.
./main



## Usage

1. The program will load the player's inventory from a JSON file (`datas.json`) if it exists.

2. You can interact with the program to add, remove, or use items in the inventory.

3. The program will save the inventory to the JSON file upon exiting.

## Documentation

- [Item Class](#item-class)
- [HealthPotion Class](#healthpotion-class)
- [ForcePotion Class](#forcepotion-class)
- [Weapon Class](#weapon-class)
- [WeaponBow Class](#weaponbow-class)
- [WeaponSword Class](#weaponsword-class)
- [Inventaire Class](#inventaire-class)

### Item Class

- Represents the base class for all items.
- Contains methods for using, getting the quality, value, and type of an item.

### HealthPotion Class

- Inherits from the Item class.
- Represents health potions that can restore health points.
- Contains methods for using and getting the health points restored.

### ForcePotion Class

- Inherits from the Item class.
- Represents force potions that can provide an attack boost.
- Contains methods for using and getting the attack value.

### Weapon Class

- Inherits from the Item class.
- Represents weapons with varying attack values.
- Contains methods for using and getting the attack value.

### WeaponBow Class

- Inherits from the Weapon class.
- Represents bow weapons.
- Contains methods for using and getting a textual representation.

### WeaponSword Class

- Inherits from the Weapon class.
- Represents sword weapons.
- Contains methods for using and getting a textual representation.

### Inventaire Class

- Represents the player's inventory.
- Provides methods for adding, displaying, and removing items from the inventory.

## Contributing

Contributions are welcome! Please follow the standard GitHub workflow:

1. Fork the repository.
2. Create a new branch with a descriptive name.
3. Make your changes.
4. Create a pull request.

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Author

jayson malet.



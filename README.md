# Credit Card Validator

## Description
This project is a credit card validator written in C. It validates credit card numbers using the Luhn algorithm and identifies the card type (VISA, AMEX, MASTERCARD) based on the number's format.
*May not be entirely accurate all the time as there are exceptions, and this is solely based on known/existing theories & algorithms such as identifying mathematical formulas!*

## Features
- Validate credit card numbers using the Luhn algorithm
- Identify the card type (VISA, AMEX, MASTERCARD)
- Supports 13, 15, and 16-digit card numbers

## Installation
1. Clone the repository:
   ```bash
   git clone https://github.com/yourusername/credit-card-type.git
   ```
2. Navigate to the project directory:
   ```bash
   cd credit
   ```
3. Compile the code:
   ```bash
   make credit
   ```
   
## Usage
1. Run the application:
   ```bash
   ./credit
   ```
2. Enter the credit card number when prompted.
3. The program will validate the number and display the card type or indicate if the number is invalid.

## Example
```bash
$ ./credit
Number: 4111111111111111
VISA
```

![image](https://github.com/user-attachments/assets/a12d9aab-22b1-4bc2-a5b4-348e2279376f)

![image](https://github.com/user-attachments/assets/75d233d9-4a79-4952-b138-1e61321a52b3)


## Contributing
1. Fork the repository.
2. Create a new branch:
   ```bash
   git checkout -b feature/your-feature-name
   ```
3. Make your changes and commit them:
   ```bash
   git commit -m 'Add some feature'
   ```
4. Push to the branch:
   ```bash
   git push origin feature/your-feature-name
   ```
5. Open a pull request.

## License
This project is not licensed under any License currently.

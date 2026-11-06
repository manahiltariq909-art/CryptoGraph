# 🔐 File Encryption and Decryption System in C

A simple file encryption and decryption application developed using the **C programming language** and standard file handling functions.

This project demonstrates how to read, modify, encrypt, decrypt, and write file contents using C.

## 🚀 Features

- File encryption using character shifting.
- File decryption using reverse character shifting.
- File handling using `fopen()`, `fgetc()`, `fputc()`, and `fclose()`.
- Error handling for file access.
- Simple and beginner-friendly implementation.

## 🛠️ Technologies Used

- C Programming Language
- GCC Compiler
- Visual Studio Code
- Git & GitHub

## ⚙️ Encryption Algorithm

This project uses a basic character-shifting technique.

**Encryption:**
```c
ch = ch + 70;
```

**Decryption:**
```c
ch = (ch - 70 + 256) % 256;
```

The decryption operation reverses the encryption transformation.

## 📁 Project Structure

```text
FileEncryption/
│
├── main.c
├── decrypt.c
├── plain.txt
├── ciper.txt
├── decrypted.txt
└── README.md
```

## 💻 Installation and Execution

### 1. Clone the repository

```bash
git clone https://github.com/USERNAME/REPOSITORY.git
```

### 2. Open the project

```bash
cd REPOSITORY
```

### 3. Compile the encryption program

```bash
gcc main.c -o encrypt.exe
```

### 4. Run encryption

```bash
./encrypt.exe
```

### 5. Compile the decryption program

```bash
gcc decrypt.c -o decrypt.exe
```

### 6. Run decryption

```bash
./decrypt.exe
```

## 📄 File Workflow

| File | Description |
|---|---|
| `plain.txt` | Original readable file |
| `ciper.txt` | Encrypted file |
| `decrypted.txt` | Restored original file |

## 🎯 Learning Objectives

- Understanding C file handling.
- Working with file pointers.
- Reading and writing characters.
- Understanding encryption and decryption logic.
- Practicing conditional statements and loops.
- Using GCC and GitHub.

## ⚠️ Security Disclaimer

This project uses a basic character-shifting algorithm for educational purposes only. It is not secure encryption and should

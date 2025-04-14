# XOR Encrypter in C++20

This document explains a simple XOR-based encrypter and decrypter implemented in C++. The code uses modern language features and requires **C++20** as the minimum compilation standard.

---

## 📋 Requirements

- A compiler with **C++20** support
- Standard C++ library

---

## 📁 Files

Below is the source code for the XOR encrypter.

---

## 🧠 How It Works

- **stringToBytes**: Converts a string into a byte vector (`std::vector<uint8_t>`).
- **bytesToString**: Converts a byte vector back into a string.
- **xorEncode**: Applies XOR between the data and the key (cyclically if needed).
- **xorDecode**: Simply reuses `xorEncode` since XOR is reversible.
- **main**: Demonstrates encrypting and decrypting "Hello World" using the key "insecure123".

---

## ⚠️ Warning

This is an **educational** example and **not secure for production use**. XOR with fixed and weak keys is easily breakable.

---

## 🛠️ Compilation

Use a compiler that supports C++20. Example with `g++`:

```sh
g++ -std=c++20 -o main main.cpp
```
Or

```sh
clang++ -std=c++20 -o main main.cpp

```

---

## 🧪 Expected Output

```
Encrypted Bytes :: <unreadable encrypted bytes>
Decrypted Bytes :: Hello World
```

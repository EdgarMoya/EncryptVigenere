# EncryptVigenere

Vigenere Cipher is a method of encrypting alphabetic text. It uses a simple form of polyalphabetic substitution. A polyalphabetic cipher is any cipher based on substitution, using multiple substitution alphabets. The encryption of the original text is done using the Vigenere square or Vigenere table.


## Features

- Generate periodic key
- Read a file with plaintext and write a file with ciphertext


## Usage/Examples

**main.cpp** with small encryption example

```cpp
ofstream writeFile;
writeFile.open("encrypt.txt");  //Save in encrypt.txt
if(writeFile.is_open()){
    writeFile << encrypt(lines, generateKey(lines, key), alph) << endl;
    cout << "File created successfully!!" << endl;
}else{
    cout << "Something went wrong" << endl; 
}
writeFile.close();
```


## Example 

```bash
  Plaintext:     ATTACKATDAWN
  Periodic Key:  LEMONLEMONLE
  Ciphertext:    LXFOPVEFRNHR
```

## Source

The Vigenère Cipher on Wikipedia
https://en.wikipedia.org/wiki/Vigenere_cipher

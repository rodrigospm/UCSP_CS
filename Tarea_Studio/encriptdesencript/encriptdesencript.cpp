#include <iostream>
#include <fstream>
#include <string>
using namespace std;

const int KEY = 7; // Solo algunas KEY funcionan pq algunos no tienen modulo
const int MODULO = 255; // Por alguna razon no funciona con mod 255

int inversa(int a, int mod) { // Usado en desencriptar
    for (int i = 1; i < mod; i++) {
        if ((i * a) % mod == 1) {
            return i;
        }
    }
    return -1;
}

int to_ascii(unsigned char character) { // Transforma char a ascii en int
    return (int)character;
}

char encriptar(int ascii, int key = KEY) { // Encripta el ascii con la key y en base al mod = 127
    int encripted = (ascii * key) % MODULO;
    return encripted;
}

char desencriptar(int ascii, int key = KEY) { // Desencripta el ascii encriptado con inversa modular
    int desencripted = (ascii * inversa(key, MODULO)) % MODULO;
    return desencripted;
}

char to_char(int ascii) { // Transforma int ascii a char
    return char(ascii);
}

char encrypt(unsigned char character) { // Transforma char a int ascii del .txt -> lo encripta con key y mod -> transforma a char
    return to_char(encriptar(to_ascii(character)));
}

char decrypt(unsigned char character) { // Transforma char a int ascii del .txt -> lo desencripta con inversa mod -> transforma a char
    return to_char(desencriptar(to_ascii(character)));
}

void encryptFile(string fileName, string outputFileName) { // Recibe origin.txt, lo encripta y crea ciphered.txt
    string linea;
    string texto;
    string texto_enc;

    ifstream archivoOrigen(fileName, ios::in); // Abre origin.txt
    if (archivoOrigen) { // If se abre correctamente
        char character;
        while (archivoOrigen >> noskipws >> character) { // noskipws = No ignora espacios ni saltos de linea
            char char_enc = encrypt(character); // Encripta cada char del .txt y los guarda en char_enc

            texto = texto + character;
            texto_enc = texto_enc + char_enc; // Texto encriptado suma cada char_enc

        }
        cout << texto << endl; // Texto original en consola
        cout << texto_enc << endl; // Texto encriptado en consola
    }

    ofstream encryptedFile; // Output en ciphered.txt
    encryptedFile.open(outputFileName); // Abre cypheredFile.txt
    encryptedFile << texto_enc; // Escribe el texto encriptado
    encryptedFile.close(); // Cierra cypheredFile.txt

}
void decryptFile(string fileName, string outputFileName) { // Recibe ciphered.txt, lo desencripta y crea deciphered.txt
    string texto_desenc;

    ifstream archivoOrigen(fileName, ios::in | ios::binary); // Abre ciphered.txt en modo binario (?
    if (archivoOrigen) {
        char character;
        while (archivoOrigen >> noskipws >> character) {
            char char_desenc = decrypt(character); // Desencripta y guarda en char_desenc
            texto_desenc = texto_desenc + char_desenc; // texto_desenc es la suma de cada char_desenc
        }
        cout << texto_desenc << endl; // Test en terminal
    }

    ofstream decryptedFile; // Output en deciphered.txt
    decryptedFile.open(outputFileName); // Abre deciphered.txt
    decryptedFile << texto_desenc; // Escribe el texto desencriptado
    decryptedFile.close(); // Cierra deciphered.txt
}

int main() {
    // encryptFile("originFile.txt", "cipheredFile.txt");
    decryptFile("cipheredFile.txt", "decipheredFile.txt");

    return 0;
}

// ios::in	Open for input operations.
// ios::out	Open for output operations.
// ios::binary	Open in binary mode.
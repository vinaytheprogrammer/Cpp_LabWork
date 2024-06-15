#include <iostream>
#include <string>
#include <cstring>
#include <openssl/evp.h>

using namespace std;

int main()
{
    // Message to be encrypted
    string message = "secret message";

    // Key for encryption
    unsigned char key[] = "password";

    // Initialization vector
    unsigned char iv[] = "randomiv";

    // Buffer for encrypted message
    unsigned char ciphertext[message.size()];

    // Encrypt the message
    int encrypted_length = 0;
    EVP_CIPHER_CTX *ctx;
    ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, EVP_aes_128_cbc(), NULL, key, iv);
    EVP_EncryptUpdate(ctx, ciphertext, &encrypted_length,
                      (unsigned char *)message.c_str(), message.size());
    int final_encrypted_length = 0;
    EVP_EncryptFinal_ex(ctx, ciphertext + encrypted_length, &final_encrypted_length);
    encrypted_length += final_encrypted_length;
    EVP_CIPHER_CTX_free(ctx);

    // Output the encrypted message
    cout << "Encrypted message: ";
    for (int i = 0; i < encrypted_length; i++) {
        cout << hex << (int)ciphertext[i];
    }
    cout << endl;

    return 0;
}

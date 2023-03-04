# Cryptography

Implementation of Various Cryptographic Algorithm

## Rail Fence Different Levels
Rail fence cipher is one of the fundamental classical transposition ciphers. Due to the limitations of the key, i.e., the number of rails, it is generally considered weak and can be easily broken with a brute-force attack.
In an attempt to improve the strength of this algorithm, we do the following:

Perform the rail fence cipher, but instead of letters arranged in the zig-zag fashion, we put words themselves in the fence. To make this concrete, we perform it N times. The number of levels used in this process is denoted by n.
After this, we replace all the spaces in the enciphered text with a small string X
From here, we perform the classical rail fence cipher M times on this to get the final ciphered text. The number of levels used here is m.
Given the values of N, n, M, m, the string X, and a cipher text, decrypt and return the plain text.

Input Format

The input consist of 6 lines in the following format
N – integer, the number of times the word railfence is applied
n – integer, number of levels for word railfence cipher
M – integer, the number of times character level railfence cipher is applied
n – integer, the number of levels in character level railfence cipher
X – string, to replace the spaces in the text
Cipher text – string

## ADFGX Cipher
About the algorithm:
This algorithm is a product cipher of two ciphers: Polybius square cipher and columnar transposition. The encrypting takes place in two phases. The first phase is performing substitution, while the second phase is fractionating.

During the substitution phase, we substitute each letter with two letters retrieved from the polybius square.
After this, fill the enciphered text below the keyword in a matrix format, left to right in a row and top to bottom. Now perform columnar transposition by sorting the keyword in alphabetical order.
Now retrieve the text from the matrix column-wise top to down to get the final ciphered text
Input Format

The input consist of 3 lines where:

The first line consists of the keyword for columnnar transposition
The second line consists of a permutation of the alphabet except for the letter J. This should be used to fill the polybius square in left to right fashion
The third line consists of the plain text to encrypt

## Zodiac Killer

In the late 1960s, an unidentified serial killer with the pseudonym of Zodiac Killer terrorized San Francisco’s Bay Area. It is regarded as one the most famous unsolved murders in American History and is known for its renowned cipher messages to the San Francisco Chronicle. For almost 50 years, the ciphers remained unsolved until Amercian code breaker David Oranchak and his two friends Sam Blake and Jarl Van Eycke could give a solution to the 340-character cipher. You can learn more about deciphering in his video.
The original cipher is assumed to be a homophonic cipher which involved a combination of a transposition cipher and a substitution cipher.
The transposition phase of the cipher goes as follows:

First, the text is written in a matrix format with a given number of columns(key)
Now we rearrange the characters as follows:
Starting from the first row, take the first character, then go to the character one row below and two columns ahead and write it down. Then, repeat the same from this character by going one row down and two columns ahead and writing it down. Repeat this process until you reach the last row, and wrap around the row if you reach the end of it.
Now, take the next character in the first row and repeat this process until all the characters in the first row are completed. This gives us the ciphered text
Now given a cipher text encrypted according to the algorithm given above and the key(mentioned in 1st point), return the deciphered plain text.
Note: The character 'Z' will be used for filling the missing cells in the matrix.

Input Format

The input consists of two lines:

The first line is a integer, the key: number of columns used while encryption
The second line consists of the cipher text


## Straddle Checkerboard Algorithm

Straddle Checkerboard Algorithm without the addition of a secret key number at the end.
Given the key permutation of the alphabet and two digits, decrypt the given cipher text and return the plain text form.

Input Format

The input is of 3 lines:

The first line is a string - a permutation of the english alphabet
The second line has two integers seperated by a space. These denote the numbers to setup the encryption matrix
The thrid line is a string - the cipher text to decrypt

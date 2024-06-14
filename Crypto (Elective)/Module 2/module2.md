## Note on Collision-Resistant Hash Functions
### Definition
Collision-resistant hash functions (CRHFs) are a type of cryptographic hash function designed to make it computationally infeasible to find two distinct inputs that produce the same hash output. Formally, a hash function 𝐻 is considered collision-resistant if it is difficult to find any two different inputs 𝑥 and 𝑦 such that 
𝐻(𝑥) = 𝐻(𝑦)

### Importance in Cryptography
Collision resistance is a critical property for hash functions used in various cryptographic applications, including digital signatures, message integrity checks, and blockchain technologies. If a hash function is not collision-resistant, an adversary could generate a different message with the same hash, leading to potential security breaches such as digital forgery or fraud.

### Characteristics of Collision-Resistant Hash Functions
* Deterministic: The same input always produces the same output.
* Efficiently Computable: The hash value for any input should be computable in a reasonable time.
* Fixed Output Size: The hash output has a fixed size, typically much smaller than the input.
* Pre-image Resistance: Given a hash output, it should be difficult to find the original input.
* Second Pre-image Resistance: Given an input and its hash output, it should be difficult to find a different input with the same hash.

>Examples of Collision-Resistant Hash Functions
1) SHA-256: Part of the SHA-2 family, widely used in various security protocols and applications, including SSL/TLS and cryptocurrencies like Bitcoin.
2) SHA-3: The latest member of the Secure Hash Algorithm family, designed to be resilient against all known attacks, including collision and pre-image attacks.
3) Blake2: Known for its high speed and security, used in many applications where a cryptographic hash function is required.
### Practical Considerations
* Birthday Attack: Due to the birthday paradox, the likelihood of finding collisions increases with the number of hash outputs generated. For a hash function with 𝑛-bit output, a collision can be found in approximately 2^(𝑛/2) attempts. This makes it essential to use hash functions with sufficiently large output sizes (e.g., 256 bits or more) to ensure collision resistance.

* Algorithmic Robustness: The design of a hash function should be robust against various types of attacks, including differential cryptanalysis and length extension attacks.

* Implementation Security: Even a collision-resistant hash function can be vulnerable if not implemented securely, potentially leading to side-channel attacks or exploitation of weaknesses in the implementation.

### Applications
* Digital Signatures: Ensuring the integrity and authenticity of a signed message by hashing the message and signing the hash.
* Blockchain: Ensuring the immutability and integrity of transaction data.
* Password Hashing: Storing hashed passwords to protect against unauthorized access.

### Conclusion
Collision-resistant hash functions are foundational to the security of numerous cryptographic protocols and systems. Their ability to provide unique, consistent, and secure mappings from input data to hash values underpins the integrity and authenticity of digital information in a

variety of applications. Ensuring the continued effectiveness of these functions requires ongoing research into cryptographic methods and vigilant attention to the potential for new types of attacks. The careful selection and implementation of robust hash functions are essential for maintaining the security and trustworthiness of digital systems and communications.


## Message Integrity

## MD5

## Cryptographic Hash Fucntion Requirements

## SHA 512

## Merkel Damgard

## Random Oracle Model

## Pigeon Hole Principle




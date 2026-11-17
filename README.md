# comp211-rle-exploration

# Run-Length Encoding (RLE)

### UNC Chapel Hill | COMP 211 | Checkoff 3

## Overview

For this project, I explored Run-Length Encoding (RLE), a lossless data compression technique that represents consecutive repeated characters using a count and a character.

I wanted to understand how computers compress data and how compression relates to the programming concepts we learned in COMP 211.

## How RLE Works

Original: AAAABBCC

Encoded: 4A2B2C

Instead of storing every character individually, RLE stores how many times each character appears consecutively. The original string can be reconstructed by reversing this process.

## Interactive Demonstration

I used AI to help create an interactive visualization of RLE that allows users to experiment with different strings and compare original and encoded data sizes.

[Try the RLE Lab](https://run-length-lab--7bhoziaq.preview.emergentagent.com/?s=WWWWWWWWBBBWWW)

## C Implementation

The C program uses arrays, strings, loops, conditionals, and counters to demonstrate RLE.

The program compares each character with the previous character. If they match, the counter increases. Otherwise, the program prints the completed run and resets the counter.

To compile and run:

```bash
gcc -Wall -Wextra -std=c11 rle.c -o rle
./rle
```

To experiment with other strings, change the input variable in rle.c and recompile.

## Expected Results

| Input | Encoded | Original Size | Encoded Size |
|---|---|---:|---:|
| AAAABBCC | 4A2B2C | 8 bytes | 6 bytes |
| AAAAAAAAAA | 10A | 10 bytes | 3 bytes |
| AAABBA | 3A2B1A | 6 bytes | 6 bytes |
| ABCDEFG | 1A1B1C1D1E1F1G | 7 bytes | 14 bytes |

These examples assume one byte per character and exclude null terminators, newlines, and formatting overhead.

## Key Discoveries

- RLE counts consecutive repetitions rather than the total number of occurrences of a character.
- Lossless compression allows the original data to be reconstructed exactly.
- RLE works best with long consecutive repetitions.
- Compression can actually increase the size of data.
- Character indexing and null terminators are important when implementing RLE in C.

One of the most interesting things I learned was that compression does not always make data smaller. The effectiveness of a compression algorithm depends on the characteristics of the input.

## Real-World Applications

RLE can be useful for data containing large amounts of repetition, including:

- Bitmap images
- Pixel art
- Scanned black-and-white documents
- Image compression formats such as TIFF PackBits

## Limitations

This program demonstrates a simplified text-based RLE format for English letters rather than compressing actual files. Additional encoding rules would be necessary to support inputs containing digits unambiguously.

## AI Assistance

I used ChatGPT as a learning tool to understand Run-Length Encoding, practice encoding examples, explore the C implementation, and troubleshoot compiler errors.

AI helped me understand character indexing, null terminators, and why the final group of characters must be printed separately outside the loop.

I also used ChatGPT to help draft and organize this README and an AI app builder to create an interactive visualization of RLE.

## Author

Nikhil Channamraju

University of North Carolina at Chapel Hill

Fall 2026

#!/bin/bash

echo '"Whatever Works" a comedy film by Woody Allen' > plaintext.txt

echo ''
cat plaintext.txt
echo ''

./rot13 plaintext.txt

echo ''
cat plaintext.txt
echo ''

./rot13 plaintext.txt

echo ''
cat plaintext.txt
echo ''

rm plaintext.*

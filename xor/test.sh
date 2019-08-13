#!/bin/bash

make clean

echo '"Whatever Works" a comedy film by Woody Allen' > plaintext.txt

testkey=manhattan

echo ''
cat plaintext.txt
echo ''

make all

./xor $testkey plaintext.txt plaintext.xor

echo ''
echo $testkey | hexdump -C
echo $testkey | xxd -b
echo ''

echo ''
hexdump -C plaintext.xor
xxd -b     plaintext.xor
echo ''

./xor $testkey plaintext.xor plaintext.xor.xor

echo ''
hexdump -C plaintext.xor.xor
xxd -b     plaintext.xor.xor
echo ''

echo ''
cat plaintext.xor.xor
echo ''

rm plaintext.*
make clean

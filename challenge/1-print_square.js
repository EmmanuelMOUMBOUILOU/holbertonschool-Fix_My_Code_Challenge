#!/usr/bin/node

const size = parseInt(process.argv[2]);

if (isNaN(size) || size <= 0) {
  console.log("Usage: ./1-print_square.js <positive integer>");
  process.exit(1);
}

const line = "#".repeat(size);
for (let i = 0; i < size; i++) {
  console.log(line);
}

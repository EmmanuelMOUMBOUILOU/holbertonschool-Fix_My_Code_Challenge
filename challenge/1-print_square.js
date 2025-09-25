#!/usr/bin/node

if (process.argv.length !== 3) {
  console.log('Usage: ./1-print_square.js <size>');
  process.exit(1);
}

const size = parseInt(process.argv[2]);

if (isNaN(size)) {
  console.log('Size must be a number');
  process.exit(1);
}

for (let i = 0; i < size; i++) {
  console.log('#'.repeat(size));
}

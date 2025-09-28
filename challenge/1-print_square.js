#!/usr/bin/node

const size = parseInt(process.argv[2], 10);

if (!size || isNaN(size) || size < 1) {
  console.log("Missing size");
  process.exit(1);
}

for (let i = 0; i < size; i++) {
  console.log('#'.repeat(size));
}

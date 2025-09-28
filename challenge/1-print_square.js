#!/usr/bin/node

const size = parseInt(process.argv[2], 10);

if (process.argv.length <= 2 || isNaN(size)) {
  console.log('Missing size');
  process.exit(1);
}

for (let i = 0; i < size; i++) {
  console.log('#'.repeat(size));
}

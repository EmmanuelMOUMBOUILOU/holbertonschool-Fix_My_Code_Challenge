#!/usr/bin/env node

const size = parseInt(process.argv[2]);

if (isNaN(size)) {
  console.log("Missing size");
  process.exit(1);
}

for (let i = 0; i < size; i++) {
  console.log("#".repeat(size));
}

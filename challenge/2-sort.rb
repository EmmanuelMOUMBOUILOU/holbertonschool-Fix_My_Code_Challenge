#!/usr/bin/env ruby

# Get all arguments from the command line
args = ARGV

# Sort them using default string comparison (ASCII-based)
sorted = args.sort

# Print each sorted item on its own line
sorted.each do |arg|
  puts arg
end

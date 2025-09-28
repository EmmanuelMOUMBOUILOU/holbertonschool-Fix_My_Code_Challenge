#!/usr/bin/env ruby

# Get all command-line arguments as strings
args = ARGV

# Sort arguments lexicographically (ASCII order)
args.sort.each do |arg|
  puts arg
end

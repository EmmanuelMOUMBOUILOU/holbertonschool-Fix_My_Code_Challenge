#!/usr/bin/env ruby

# Get command-line arguments (excluding script name)
args = ARGV

# Sort all arguments lexicographically (as strings)
sorted = args.sort

# Print each on a new line
sorted.each { |arg| puts arg }


# Filter numeric values and convert to integers
numbers = ARGV.map { |arg| Integer(arg) rescue nil }.compact

# Sort numerically
numbers.sort.each { |n| puts n }

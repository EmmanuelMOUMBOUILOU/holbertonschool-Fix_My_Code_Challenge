#!/usr/bin/env ruby

numbers = []
strings = []

ARGV.each do |arg|
  if arg.match?(/\A-?\d+\z/)
    numbers << arg.to_i
  else
    strings << arg
  end
end

(numbers.sort + strings.sort).each { |x| puts x }

require 'tzinfo'

# Define Indonesia timezone
indonesia_timezone = TZInfo::Timezone.get('Asia/Jakarta')

# Get current time in Indonesia timezone
current_time_indonesia = Time.now.getlocal(indonesia_timezone.current_period.utc_total_offset)

puts "Time in seconds since epoch:"
puts current_time_indonesia.to_i

puts "\nCurrent date and time:"
puts current_time_indonesia

puts "\nFormatting the current date and time using strftime():"
puts current_time_indonesia.strftime("%y-%m-%d-%H-%M")

puts "\nOr formatting it like this:"
puts current_time_indonesia.strftime("%d-%m-%y and %H:%M")

puts "\nCurrent Year:"
puts current_time_indonesia.strftime("%Y")

puts "\nCurrent Month of the year:"
puts current_time_indonesia.strftime("%B")

puts "\nWeek number of the year:"
# Ruby doesn't have a direct method for week numbers.
# You might need to use external libraries or custom functions.

puts "\nWeekday of week:"
puts current_time_indonesia.strftime("%w")

puts "\nDay of the year:"
puts current_time_indonesia.strftime("%j")

puts "\nDay of the month:"
puts current_time_indonesia.strftime("%d")

puts "\nDay of the week:"
puts current_time_indonesia.strftime("%A")

puts "\nTime tuple for local time:"
puts current_time_indonesia.to_a

puts "\nFormatting it in readable form:"
puts current_time_indonesia.strftime("%a %b %d %H:%M:%S %Y")

puts "\nWeekday of a certain date:"
my_date = Date.new(1996, 7, 19)  # yyyy-mm-dd.
puts my_date.strftime("%A")

import datetime
import pytz

# Define Indonesia timezone
indonesia_timezone = pytz.timezone('Asia/Jakarta')

# Get current time in Indonesia timezone
current_time_indonesia = datetime.datetime.now(indonesia_timezone)

print("Time in seconds since epoch:")
print(current_time_indonesia.timestamp())

print("\nCurrent date and time:")
print(current_time_indonesia)

print("\nFormatting the current date and time using strftime():")
print(current_time_indonesia.strftime("%y-%m-%d-%H-%M"))

print("\nOr formatting it like this:")
print(current_time_indonesia.strftime("%d-%m-%y and %H:%M"))

print("\nCurrent Year:")
print(current_time_indonesia.strftime("%Y"))

print("\nCurrent Month of the year:")
print(current_time_indonesia.strftime("%B"))

print("\nWeek number of the year:")
print(current_time_indonesia.strftime("%W"))

print("\nWeekday of week:")
print(current_time_indonesia.strftime("%w"))

print("\nDay of the year:")
print(current_time_indonesia.strftime("%j"))

print("\nDay of the month:")
print(current_time_indonesia.strftime("%d"))

print("\nDay of the week:")
print(current_time_indonesia.strftime("%A"))

print("\nTime tuple for local time:")
print(current_time_indonesia.timetuple())

print("\nFormatting it in readable form:")
print(current_time_indonesia.strftime("%a %b %d %H:%M:%S %Y"))

print("\nWeekday of a certain date:")
my_date = datetime.date(1996, 7, 19)  # yyyy-mm-dd.
print(my_date.strftime("%A"))

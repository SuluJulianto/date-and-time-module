// Define Indonesia timezone
const indonesiaTimeZone = 'Asia/Jakarta';

// Get current time in Indonesia timezone
const currentDateTime = new Date().toLocaleString('en-US', { timeZone: indonesiaTimeZone });

console.log("Current date and time:");
console.log(currentDateTime);

console.log("\nFormatting the current date and time:");
console.log(new Date().toLocaleString('en-US', { timeZone: indonesiaTimeZone, year: 'numeric', month: '2-digit', day: '2-digit', hour: '2-digit', minute: '2-digit' }));

console.log("\nCurrent Year:");
console.log(new Date().toLocaleString('en-US', { timeZone: indonesiaTimeZone, year: 'numeric' }));

console.log("\nCurrent Month of the year:");
console.log(new Date().toLocaleString('en-US', { timeZone: indonesiaTimeZone, month: 'long' }));

// Week number of the year calculation (using ISO 8601 definition)
const now = new Date();
const startOfYear = new Date(now.getFullYear(), 0, 1);
const firstWeekNumber = Math.ceil(((now - startOfYear) / 86400000 + startOfYear.getDay() + 1) / 7);
console.log("\nWeek number of the year (ISO 8601):");
console.log(firstWeekNumber);

console.log("\nWeekday of week:");
console.log(new Date().toLocaleString('en-US', { timeZone: indonesiaTimeZone, weekday: 'numeric' }));

console.log("\nDay of the year:");
console.log(new Date().toLocaleString('en-US', { timeZone: indonesiaTimeZone, dayOfYear: 'numeric' }));

console.log("\nDay of the month:");
console.log(new Date().toLocaleString('en-US', { timeZone: indonesiaTimeZone, day: '2-digit' }));

console.log("\nDay of the week:");
console.log(new Date().toLocaleString('en-US', { timeZone: indonesiaTimeZone, weekday: 'long' }));

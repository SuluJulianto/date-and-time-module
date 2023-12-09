import java.time.*;
import java.time.format.*;

public class TimezoneConversion {
    public static void main(String[] args) {

        ZoneId indonesiaTimeZone = ZoneId.of("Asia/Jakarta");

        ZonedDateTime currentDateTimeIndonesia = ZonedDateTime.now(indonesiaTimeZone);

        System.out.println("Time in seconds since epoch: " + currentDateTimeIndonesia.toEpochSecond());

        System.out.println("\nCurrent date and time: " + currentDateTimeIndonesia);

        DateTimeFormatter formatter = DateTimeFormatter.ofPattern("yy-MM-dd-HH-mm");
        System.out.println("\nFormatting the current date and time: " + currentDateTimeIndonesia.format(formatter));

        System.out.println("\nCurrent Year: " + currentDateTimeIndonesia.getYear());
        System.out.println("Current Month of the year: " + currentDateTimeIndonesia.getMonth());
        System.out.println("Day of the month: " + currentDateTimeIndonesia.getDayOfMonth());
        System.out.println("Day of the week: " + currentDateTimeIndonesia.getDayOfWeek());
    }
}

import java.io.IOException;
import java.net.HttpURLConnection;
import java.net.URL;

public class ConnectivityCheck {
    public static void main(String[] args) {
        String websiteURL = "https://www.example.com"; // URL of the website to check connectivity

        try {
            // Create a URL object from the website URL
            URL url = new URL(websiteURL);

            // Open a connection to the URL
            HttpURLConnection connection = (HttpURLConnection) url.openConnection();

            // Set the request method (GET by default)
            connection.setRequestMethod("GET");

            // Get the response code
            int responseCode = connection.getResponseCode();

            // Check if the response code indicates successful connectivity
            if (responseCode == HttpURLConnection.HTTP_OK) {
                System.out.println("Connection to " + websiteURL + " is successful.");
            } else {
                System.out.println("Failed to connect to " + websiteURL + ". Response code: " + responseCode);
            }

            // Close the connection
            connection.disconnect();
        } catch (IOException e) {
            System.out.println("Error occurred while checking connectivity: " + e.getMessage());
            e.printStackTrace();
        }
    }
}

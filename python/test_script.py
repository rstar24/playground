from selenium import webdriver
from selenium.webdriver.firefox.service import Service
from selenium.webdriver.common.by import By
from selenium.webdriver.common.keys import Keys
from selenium.webdriver.firefox.options import Options
import time
import random

# Step 1: Set up the WebDriver for Firefox
driver_path = "C:\\Users\\risha\\Downloads\\geckodriver-v0.35.0-win32\\geckodriver.exe"  # Replace with your GeckoDriver path
firefox_binary_path = "C:\\Program Files\\Mozilla Firefox\\firefox.exe"  # Replace with your Firefox binary path

options = Options()
options.headless = False  # Set to True for headless mode (no GUI)
options.binary = firefox_binary_path  # Specify the path to Firefox binary

service = Service(executable_path=driver_path)  # Use driver_path here

driver = webdriver.Firefox(service=service, options=options)

try:
    # Step 2: Navigate to the website
    driver.get("https://practicetestautomation.com/practice-test-login/")  # Replace with the actual login URL

    # Step 3: Locate login form fields
    username_field = driver.find_element(By.ID, "username")  # Replace 'username' with actual element ID
    password_field = driver.find_element(By.ID, "password")  # Replace 'password' with actual element ID
    login_button = driver.find_element(By.ID, "submit")  # Replace 'Log In' with the button text

    # Step 4: Enter credentials and log in
    username_field.send_keys("student")  # Replace with your username
    password_field.send_keys("Password123")  # Replace with your password
    login_button.click()

    # Step 5: Wait for the page to load (use explicit wait if needed)
    time.sleep(1)  # Replace with WebDriverWait for better performance

    # Step 6: Navigate to a specific page after logging in
    # driver.get("https://example.com/target-page")  # Replace with the desired URL
    print("Navigation successful!")

    # Step 7: Add a wait to inspect the final state
    time.sleep(3)

    # Step 8: Open a new tab and navigate to a random YouTube video
    driver.execute_script("window.open('https://www.youtube.com', '_blank');")
    time.sleep(2)  # Give time for the new tab to load

    # Switch to the new tab
    driver.switch_to.window(driver.window_handles[1])  # Switch to the new tab

    # Search for a random video on YouTube (you can modify this search query)
    search_query = random.choice(["funny videos", "technology", "music", "cat videos", "travel vlogs"])
    driver.get(f"https://www.youtube.com/results?search_query={search_query}")

    # Wait for the page to load and click on the first video
    time.sleep(3)
    first_video = driver.find_element(By.XPATH, "(//ytd-video-renderer)[1]//a[@id='thumbnail']")
    first_video.click()

    # Step 8: Add a wait to inspect the final state
    time.sleep(20)

finally:
    # Step 9: Close the browser
    driver.quit()

import requests
import time
import pandas as pd
import datetime;
# Replace 'YOUR_API_KEY' with your actual API key
api_key = "ff62fdf800a6fc17d7ffc81e180e90ca"

def get_temperature():
    city = 'Bangalore'
    url = f'http://api.openweathermap.org/data/2.5/weather?q={city}&appid={api_key}'
    response = requests.get(url)

    if response.status_code == 200:
        data = response.json()
        print(data)
        temp = data['main']['temp']-273.15
        humid = data['main']['humidity']
        press = data['main']['pressure']
        print(temp)
        return temp, humid, press
    else:
        return " "
        
data = []

for i in range(2):
    temp, humid, press = get_temperature()
    data.append({'timestamp': datetime.datetime.now(), 'temperature': temp, 'pressure': press, 'humidity': humid})
    time.sleep(2)

# Convert the list of dictionaries to a DataFrame
df = pd.DataFrame(data)

# Save the DataFrame to a CSV file
df.to_csv("AI-ML/My programs/temperature_data.csv", index=False)

print("Data collection complete. File saved as temperature_data.csv")
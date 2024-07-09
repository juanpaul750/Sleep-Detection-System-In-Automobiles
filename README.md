# Sleep Detection System in Automobiles

Welcome to the Sleep Detection System project! This system aims to reduce road accidents caused by driver drowsiness by implementing a sleep detection mechanism integrated with automatic braking.

## 🛠️ Project Components

- **Eye Blink Sensor**: Monitors the driver's eye movements.
- **Arduino Board**: Acts as the central control unit.
- **Solenoid Valve**: Controls the pneumatic system for braking.
- **Relay Module**: Manages the activation of the braking system.
- **AC Motor & Pneumatic Cylinder**: Facilitates the braking mechanism.
- **Air Compressor**: Supplies the required air pressure.

## 🚀 How It Works

1. **Detection**: The eye blink sensor continuously monitors the driver's eye movements. If abnormal patterns indicating drowsiness are detected, the system activates a warning sequence.
2. **Warning Sequence**:
   - **Alarm**: An audible alarm sounds to alert the driver.
   - **Seat Vibration**: If the driver does not respond to the alarm, the seat vibrates as an additional warning.
3. **Automatic Braking**: If the driver still does not respond, the system engages the braking mechanism using a pneumatic cylinder to bring the vehicle to a stop.
4. **Safety Feature**: The front bumper extends as a precautionary measure during braking.

## 💻 Arduino Code

The Arduino code controls the detection and warning sequences, as well as the braking mechanism. The main components of the code include:

- Initializing the sensor and output pins.
- Continuously reading the sensor data to detect eye blinks.
- Triggering the alarm and seat vibration upon detecting drowsiness.
- Activating the braking mechanism if no response is detected.

## 📦 Installation and Setup

1. **Hardware Setup**:
   - Connect the eye blink sensor to the Arduino board.
   - Set up the solenoid valve, relay module, and pneumatic cylinder according to the provided schematics.
   - Ensure the air compressor is properly connected and functioning.

2. **Software Setup**:
   - Install the Arduino IDE from [Arduino official website](https://www.arduino.cc/en/Main/Software).
   - Download the project code from this repository.
   - Open the code in the Arduino IDE and upload it to the Arduino board.

## 🔮 Future Enhancements

- Implementing the system in aircraft to alert pilots of drowsiness.
- Making the system mandatory in all vehicles to enhance road safety.
- Commercial production and distribution at a reasonable price.
- Using infrared blasters for better detection during night driving.

## 👥 Contributors

- Aldy Degulle George
- Amal Shaju
- Gayus Eldho
- Juan Joy Paul

## 🙏 Acknowledgments

We extend our gratitude to our guide Mr. Arun K, Assistant Professor, Department of Mechanical Engineering, VJCET, for his invaluable guidance and support throughout this project.

---

Feel free to explore the repository and contribute to the project. Together, we can make our roads safer!

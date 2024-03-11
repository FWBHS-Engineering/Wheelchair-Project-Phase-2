# Wheelchair-Project-Phase-2
## Wiring Guide
### Stepper Motor to H Bridge
According to page 7 of 20 of the [QSH4218-x-10k Hardware Manual](https://www.analog.com/media/en/technical-documentation/data-sheets/QSH4218-x-10k_datasheet_rev1.50.pdf), there are 2 motors within the motor. Motor A and motor B. Motor A has a black positive terminal wire. Motor A has a Green negative terminal wire. Motor B has a red positive terminal wire. Motor B has a blue negative terminal wire. [Here](https://www.google.com/url?sa=i&url=https%3A%2F%2Fwww.researchgate.net%2Ffigure%2FIllustration-of-L298N-Dual-H-Bridge-Motor-Driver_fig2_335517346&psig=AOvVaw0HzKqPoM5GE7oi2Lza4_Xu&ust=1710249787142000&source=images&cd=vfe&opi=89978449&ved=0CBEQjRxqFwoTCNjY24yn7IQDFQAAAAAdAAAAABAD) is a good diagram of the H-Bridge labeled by [Research Gate](https://www.researchgate.net/figure/Illustration-of-L298N-Dual-H-Bridge-Motor-Driver_fig2_335517346). This is the H bridge in the diagram. Make sure that black is with green and red is with blue. Then wire the logic pins to the arduino. Make sure not to mess with the enable pins. Then power the 5V IN with the Arduino. After that power the 5V to 35V with a battery. Make sure to ground the circuit before you connect it to the battery or else you will start a fire and probably get shocked pretty bad. The 5V from the arduino is safe to use small jumper wires but, if you use jumper wires on the battery to the HBridge, the wire will get so hot that it will melt the plastic off then the copper inside will either shock or burn you. You can find a jumper wire in the closet somewhere with a fingerprint burnt into it. That was my fingerprint. Now it is the jumper wire’s fingerprint. I recommend 12 AWG wire for the battery.
### H Bridge to Arduino

![Arduino 11-8](https://github.com/FWBHS-Engineering/Wheelchair-Project-Phase-2/assets/39282164/78a9dc1c-5752-40bd-bde1-21e1deb546f7)

This is a diagram for one of the H Bridge’s to connect to an Arduino. All of the wires are in order. Just connect them 1 to 8, 2 to 9, and so on. If it doesn't work, then try 11 to 1, and 10 to 2 and so on.

![image](https://github.com/FWBHS-Engineering/Wheelchair-Project-Phase-2/assets/39282164/5182c29d-f0a5-493b-a85d-43f36cdecb5a)

Do the same thing for these ports. Ports 2-5.
### Controller to Arduino
To preface, you have everything you need in the code document to wire this yourself. [Here](https://learn.parallax.com/tutorials/language/propeller-c/propeller-c-simple-devices/joystick) is the documentation to tell you which wires go where on the controller. L/R also known as left to right control needs to be sent to analog port 3. U/D also known as up and down control needs to be sent to port 4.
## Coding
1. Open the Arduino IDE
2. Click the libraries button:

![Arduino IDE](https://github.com/FWBHS-Engineering/Wheelchair-Project-Phase-2/assets/39282164/cdc9601f-34b6-46af-a879-d6c3caba0135)


3. Type "AccelStepper" into the search bar and install the library by "Mike McCauley":

![image](https://github.com/FWBHS-Engineering/Wheelchair-Project-Phase-2/assets/39282164/c19bd5fb-d76d-48a0-b119-fa5a9b025d52)

4. Download and open [the code](https://github.com/FWBHS-Engineering/Wheelchair-Project-Phase-2/blob/main/WheelChair.ino) in the IDE
5. Compile the program
6. Deploy it onto the Arduino

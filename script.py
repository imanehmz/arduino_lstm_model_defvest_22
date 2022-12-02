import serial
import time

arduino = serial.Serial(port="COM3", baudrate=9600, timeout=0.1)

def write(data):
    arduino.write(bytes(data, "utf-8"))


def read():
    line = arduino.read_until('\n')
    return line.decode('ascii')


while True:
    data = str(read())
    if(len(data) > 0):
        print(data)

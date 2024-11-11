import socket

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(('localhost', 4242))
sending_data = 'Hello, World'
s.send(sending_data.encode())
data = s.recv(1024)
s.close()
print('Recieved', data)

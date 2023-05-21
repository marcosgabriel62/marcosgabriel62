import socket
import sys
host = sys.argv[1]
port = int(sys.argv[2])
number_connection = 5
size = 1024
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s. bind((host,port))
s. listen(number_connection)

print ("Servidor no Ar")

print ("Ip do Servidor:", host)
print ("Porta do Servidor:", port)
while True:
	client, address = s.accept()
	data = client.recv(size)
	print ("Recebendo:", data.decode())
	if data:
		client.send(sys.argv[3].encode())
client.close()
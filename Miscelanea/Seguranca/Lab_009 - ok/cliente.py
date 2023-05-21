import socket
import sys
print (sys.argv[1])
print (sys.argv[2])
print (sys.argv[3])
host = sys.argv[1]
port = int(sys.argv[2])
size = 1024
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((host,port))
s.send(sys.argv[3].encode())
data = s.recv(size)
print ("Resposta do Servidor:", data)
s.close()

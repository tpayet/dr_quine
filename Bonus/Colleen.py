def main():
	# comment in main
	s = "def main():{:s}# comment in main{:s}s = {:s}print(s.format((chr(10) + chr(9)),(chr(10) + chr(9)),  (chr(34) + s + chr(34) + chr(10) + chr(9)), (chr(10) + chr(10)), chr(10))){:s}main(){:s}# comment at the end of the code"
	print(s.format((chr(10) + chr(9)),(chr(10) + chr(9)),  (chr(34) + s + chr(34) + chr(10) + chr(9)), (chr(10) + chr(10)), chr(10)))

main()
# comment at the end of the code

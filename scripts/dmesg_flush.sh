pwd > dmesg_dump.txt
while true; do
	pwd >> dmesg_dump.txt
	sudo xm dmesg -c >> dmesg_dump.txt
	sleep 0.001
done
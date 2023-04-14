cmd_/home/arantxa/drivers/bluetooth/btusb.mod := printf '%s\n'   btusb.o | awk '!x[$$0]++ { print("/home/arantxa/drivers/bluetooth/"$$0) }' > /home/arantxa/drivers/bluetooth/btusb.mod

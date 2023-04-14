cmd_/home/arantxa/drivers/bluetooth/btrtl.mod := printf '%s\n'   btrtl.o | awk '!x[$$0]++ { print("/home/arantxa/drivers/bluetooth/"$$0) }' > /home/arantxa/drivers/bluetooth/btrtl.mod

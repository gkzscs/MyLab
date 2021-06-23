#!/bin/bash


while [ true ]
do
	pro=$(ps -ef | grep "$1" | grep -v grep | grep -v "$0")

	if [ -z "$pro" ]
	then
		echo "Process is not running, restart it"
		python3 $1
	else
		echo "Process is running..."
	fi

	sleep 30
done


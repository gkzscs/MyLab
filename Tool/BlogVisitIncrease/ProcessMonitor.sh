#!/bin/bash


while [ true ]
do
	pro=$(ps -ef | grep "$1" | grep -v grep | grep -v "$0")

	if [ -z "$pro" ]
	then
		echo $(date "+%Y-%m-%d %H:%M:%S") "Process is not running, restart it" >> log.txt
		python3 $1
	else
		echo $(date "+%Y-%m-%d %H:%M:%S") "Process is running..." >> log.txt
	fi

	sleep 30
done


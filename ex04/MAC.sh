#!/bin/sh
ifconfig | egrep -o '([[:xdigit:]]{2}:){5}[[:xdigit:]]{2}'

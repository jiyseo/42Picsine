#!/bin/bash

ls -l | awk 'NR%2 == 1 {print $0}'

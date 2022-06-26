#!/usr/bin/env python3

import os

dir = os.path.dirname(__file__)

try:
    with open(os.path.join(dir, "ch04_greeter_content")) as f:
        print(f.readlines())
except Exception as e:
    print(e)

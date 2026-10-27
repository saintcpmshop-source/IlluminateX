#!/bin/bash
# IlluminateX Build Script
# Copyright (c) 2026 saintcpmshop-source

echo "Generating PARAM.SFO..."
sfo assets/PARAM.SFO.txt

echo "Compiling IlluminateX.pkg..."
make

echo "Build complete! Your IlluminateX.pkg is ready."

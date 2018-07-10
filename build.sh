#!/usr/bin/env bash

phpize && ./configure --enable-ledger && make clean && make

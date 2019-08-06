#!/bin/sh
find . -type f -name "*.sh" -print | xargs basename | rev | cut -c4- | rev

# Log Parsing

## Description
This project contains a script that reads stdin line by line and computes metrics from log entries.

## Input Format
```
<IP Address> - [<date>] "GET /projects/260 HTTP/1.1" <status code> <file size>
```

Lines not matching this format are skipped.

## Output
After every 10 lines and/or keyboard interruption (CTRL + C), the script prints:
- Total file size: sum of all file sizes
- Number of lines by status code (200, 301, 400, 401, 403, 404, 405, 500)

Status codes are printed in ascending order.

## Usage
```bash
./0-generator.py | ./0-stats.py
```

## Files
- `0-stats.py` - Log parsing script
- `0-generator.py` - Test generator script

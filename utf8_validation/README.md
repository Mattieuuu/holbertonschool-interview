# UTF-8 Validation

This project contains a method that determines if a given data set represents a valid UTF-8 encoding.

## Function Prototype

```python
def validUTF8(data)
```

## Description

The function validates UTF-8 encoding by checking:
- Characters can be 1 to 4 bytes long
- Each integer in the data list represents 1 byte (only the 8 least significant bits are used)
- Proper byte patterns for UTF-8:
  - 1-byte: `0xxxxxxx`
  - 2-byte: `110xxxxx 10xxxxxx`
  - 3-byte: `1110xxxx 10xxxxxx 10xxxxxx`
  - 4-byte: `11110xxx 10xxxxxx 10xxxxxx 10xxxxxx`

## Returns

- `True` if data is a valid UTF-8 encoding
- `False` otherwise

## Usage

```python
validUTF8 = __import__('0-validate_utf8').validUTF8

data = [65]
print(validUTF8(data))  # True

data = [80, 121, 116, 104, 111, 110, 32, 105, 115, 32, 99, 111, 111, 108, 33]
print(validUTF8(data))  # True

data = [229, 65, 127, 256]
print(validUTF8(data))  # False
```

## Requirements

- Python 3.4.3
- PEP 8 style (version 1.7.x)
- All files must be executable

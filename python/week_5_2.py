import sys

def parse_input():
    # Initialize containers for data
    books = {}
    borrowers = {}
    checkouts = []

    current_section = None

    # Read from stdin line by line
    for line in sys.stdin:
        line = line.strip()
        if line == 'EndOfInput':
            break

        if line in ['Books', 'Borrowers', 'Checkouts']:
            current_section = line
        elif current_section == 'Books':
            book_code, book_title = line.split('~')
            books[book_code] = book_title
        elif current_section == 'Borrowers':
            borrower_code, borrower_name = line.split('~')
            borrowers[borrower_code] = borrower_name
        elif current_section == 'Checkouts':
            borrower_code, book_code, checkout_date = line.split('~')
            checkouts.append((checkout_date, borrower_code, book_code))

    # Process checkouts to produce desired output
    output_lines = []
    for checkout_date, borrower_code, book_code in checkouts:
        borrower_name = borrowers[borrower_code]
        book_title = books[book_code]
        output_lines.append((checkout_date, borrower_name, book_code, book_title))

    # Sort output_lines by date, borrower name, book code, and book title
    output_lines.sort(key=lambda x: (x[0], x[1], x[2], x[3]))

    # Format sorted lines
    formatted_output = [f"{date}~{borrower}~{book_code}~{book_title}" for date, borrower, book_code, book_title in output_lines]

    return formatted_output

def main():
    output_lines = parse_input()
    for line in output_lines:
        print(line)

if __name__ == "__main__":
    main()

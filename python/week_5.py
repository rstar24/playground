import argparse

def parse_file(file_path):
    # Initialize containers for data
    books = {}
    borrowers = {}
    checkouts = []

    with open(file_path, 'r') as file:as
        current_section = None

        for line in file:
            line = line.strip()
            if not line or line == 'EndOfInput':
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
                checkout_code, book_code, checkout_date = line.split('~')
                checkouts.append((checkout_date, checkout_code, book_code))

    # Process checkouts to produce desired output
    output_lines = []
    for checkout_date, borrower_code, book_code in checkouts:
        borrower_name = borrowers.get(borrower_code, 'Unknown Borrower')
        book_title = books.get(book_code, 'Unknown Book')
        output_lines.append((checkout_date, borrower_name, book_code, book_title))

    # Sort output_lines by date
    output_lines.sort(key=lambda x: x[0])  # Sorting by the checkout_date

    # Format sorted lines
    formatted_output = [f"{date}~{borrower}~{book_code}~{book_title}" for date, borrower, book_code, book_title in output_lines]

    for line in formatted_output:
        print(line)


    # return formatted_output


def main():
    # Set up argument parser
    parser = argparse.ArgumentParser(description='Process a file with book, borrower, and checkout data.')
    parser.add_argument('file_path', type=str, help='Path to the input file')

    # Parse arguments
    args = parser.parse_args()
    
    # Call parse_file with the provided file path
    output_lines = parse_file(args.file_path)
    
    # for line in output_lines:
    #     print(line)

if __name__ == "__main__":
    main()
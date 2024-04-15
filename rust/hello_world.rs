use std::io;
use std::string::String;

fn main(){
    let a = [1,2,3,4,5,6];

    println!("Pelease print the number");

    let mut index = String::new();

    io::stdin()
        .read_line(&mut index)
        .expect("Failed to read the index");

    let index : usize = index 
        .trim()
        .parse()
        .expect("Index Enter was not a number");

    let element = a[index];

    println!("Tha value at the index {index} is :{element}");

    print_labeled_measurement(200,'v');

    func(100);
}

fn func(x: i32){
    println!("The value of x is {x}");
}

fn print_labeled_measurement(value: i32 , unit_label: char){
    println!("The measurement is {value} {unit_label}");
}

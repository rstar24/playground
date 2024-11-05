fn main() {
    let mut data = String::from("Hello, Rust!");

    let borrow1 = &data;         // Immutable borrow of `data`
    println!("{}", borrow1);      // `borrow1` is valid here

    // Uncommenting the line below will cause a compilation error:
    // let borrow2 = &mut data;   // Attempt to take a mutable borrow while `borrow1` exists

    // To allow mutable borrowing, `borrow1` must go out of scope
    let borrow3 = &mut data;      // `borrow3` is a mutable borrow
    borrow3.push_str(" Goodbye!");
    println!("{}", borrow3);      // `borrow3` is valid here
    


    
    println!("{}" , borrow1);



    // `data` is automatically freed when it goes out of scope
}

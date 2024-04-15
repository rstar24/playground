use std::io;

fn main(){
    println!("Hell Rust Again");

    let mut y = {
        let x = 3 ;
        x + 1;
        x + 4
    };
    y += 1;
    println!("Hello Rust Again y = {y}");
    let z = five();
    println!("Hell z = five() = {z}");

    for number in (1..4).rev() {
        println!("{number}!");
    }
    println!("LIFTOFF!!!");
}

fn five() -> i32 {
    32
}
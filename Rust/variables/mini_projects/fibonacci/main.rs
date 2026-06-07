use std::io;

fn main() {
    println!("Fiboncacci Sequeunce");
    
    println!("Enter the nth number that you want");
        
    let mut n = String::new();        
    io::stdin()
    .read_line(&mut n)
    .expect("Failed to read line");

    let n: u64 = match n.trim().parse() {
        Ok(num) => num,
        Err(_) => return,
    };
    
    if n == 0 {
        return;
    }

    let mut num1: u64 = 0;
    let mut num2: u64 = 1;
    let mut i: u64 = 2;

    println!("{num1}");    
    
    if n == 1 {
        return;
    }
    println!("{num2}");
        
    while i < n {
        let fib = num1 + num2;
        println!("{fib}");
        num1 = num2;
        num2 = fib;
        i += 1;
    }
}

use std::io;

fn main() {
    println!("Welcome to the temperature converter!");

    loop {
        println!("press 1 for celsius to farenheit and 2 for farenheit to celsius!");
        println!("press 3 to end the program");

        let mut input = String::new();

        io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

        let input: u32 = match input.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,

        };
        if input == 3 {
            break;
        }
        else if input == 1 {
            loop {
                println!("Enter your celsius");
            
                let mut celsius = String::new();

                io::stdin()
                .read_line(&mut celsius)
                .expect("Failed to read line");
            
                let celsius: f32 = match celsius.trim().parse() {
                    Ok(num) => num,
                    Err(_) => continue,            
                };
    
                let farenheit = (celsius * 1.8) + 32.0;
                println!("{celsius}C converts to {farenheit}F");
                break;
            }
        }
        else if input == 2 {
            loop {
                println!("Enter your farenheit");
                
                let mut farenheit = String::new();

                io::stdin()
                .read_line(&mut farenheit)
                .expect("Failed to read line");

                let farenheit: f32 = match farenheit.trim().parse() {
                    Ok(num) => num,
                    Err(_) => continue,
                };
                let celsius = (farenheit - 32.0) / 1.8;
                println!("{farenheit}F converts to {celsius}C");
                break;
            }
        }
        else {
            println!("Please choose option 1 or 2");
            continue;
        }   
    }       
}

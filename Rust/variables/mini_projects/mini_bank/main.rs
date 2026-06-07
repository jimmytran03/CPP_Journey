use std::io;

fn main() {
    println!("Bank Of Ireland");

    let mut bank_balance: f64 = 0.0;

    loop {
        println!("1. Deposit");
        println!("2. Withdraw");
        println!("3. Check Balance");
        println!("4. Exit");
    
        let mut input = String::new();

        io::stdin()
        .read_line(&mut input)
        .expect("Failed to read line");

        let input: u32 = match input.trim().parse() {
            Ok(num) => num,
            Err(_) => continue,
        };

        if input == 4 {
            break;
        }
        else if input == 1 {
            println!("Enter lodgement amount: ");

            let mut lodgement = String::new();

            io::stdin()
            .read_line(&mut lodgement)
            .expect("Failed to read line");

            let lodgement: f64 = match lodgement.trim().parse() {
                Ok(num) => num,
                Err(_) => continue,
            }; 
            bank_balance = bank_balance + lodgement;
        }
        else if input == 2 {
            loop {
                println!("Enter withdrawal amount: ");
            
                let mut withdraw = String::new();

                io::stdin()
                .read_line(&mut withdraw)
                .expect("Failed to read line");

                let withdraw: f64 = match withdraw.trim().parse() {
                    Ok(num) => num,
                    Err(_) => continue,
                };

                if withdraw > bank_balance {
                    println!("You don't have enough money, try again");
                    continue;
                }
                else {
                    bank_balance = bank_balance - withdraw;
                    break;
                }
            }

        }
        else if input == 3 {
            println!("Your balance is: {:.2}", bank_balance);
        }
        else {
            println!("Please press options 1-4");
            continue;
        }
    }    
}

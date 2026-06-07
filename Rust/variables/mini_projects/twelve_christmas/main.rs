fn main() {
    line_one("first");
    pear();
    println!();

    line_one("second");
    doves();
    pear();
    println!();
    
    line_one("third");
    french_hens();
    doves();
    pear();
    println!();

    line_one("fourth");
    calling_birds();
    french_hens();
    doves();
    pear();
    println!();

    line_one("fifth");
    golden_rings();
    calling_birds();
    french_hens();
    doves();
    pear();
    println!();

    line_one("sixth");
    geese();
    golden_rings();
    calling_birds();
    french_hens();
    doves();
    pear();
    println!();

    line_one("seventh");
    swans();
    geese();
    golden_rings();
    calling_birds();
    french_hens();
    doves();
    pear();
    println!();

    line_one("eight");
    maids();
    swans();
    geese();
    golden_rings();
    calling_birds();
    french_hens();
    doves();
    pear();
    println!();

    line_one("ninth");
    ladies();
    maids();
    swans();
    geese();
    golden_rings();
    calling_birds();
    french_hens();
    doves();
    pear();
    println!();

    line_one("tenth");
    lords();
    ladies();
    maids();
    swans();
    geese();
    golden_rings();
    calling_birds();
    french_hens();
    doves();
    pear();
    println!();

    line_one("eleventh");
    pipers();
    lords();
    ladies();
    maids();
    swans();
    geese();
    golden_rings();
    calling_birds();
    french_hens();
    doves();
    pear();
    println!();

    line_one("twelfth");
    drummers();
    pipers();
    lords();
    ladies();
    maids();
    swans();
    geese();
    golden_rings();
    calling_birds();
    french_hens();
    doves();
    pear();
    println!();
    
}

fn line_one(s: &str) {
    println!("On the {s} day of Christmas, my true love sent to me");
}

fn pear() {
    println!("A partridge in a pear tree");
}

fn doves() {
    println!("Two turtle doves and");
}

fn french_hens() {
    println!("Three french hens");
}

fn calling_birds(){
    println!("Four calling birds");
}

fn golden_rings() {
    println!("Five golden rings");
}

fn geese(){
    println!("Six geese a-laying");
}

fn swans() {
    println!("Seven swans a-swimming");
}

fn maids() {
    println!("Eight maids a-milking");
}

fn ladies() {
    println!("Nine ladies dancing");
}

fn lords() {
    println!("Ten lords a-leaping");
}

fn pipers() {
    println!("Eleven pipers piping");
}

fn drummers() {
    println!("Twelve drummers drumming");
}

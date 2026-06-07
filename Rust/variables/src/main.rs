fn main() {
	let x = 5;
	
	let x = x + 1;

	{
		let x = x * 2;
		println!("The value of x in the inner scope is: {x}");
	}

	println!("The value of x is: {x}");

	// addition
	let sum = 5 + 10;

	// subtraction
	let difference = 99.5 - 4.3;

	// multiplication
	let product = 4 * 30;

	// division
	let quotient = 56.7 / 32.2;
	let truncated = -5 / 3; // Results in -1

	// remaindeur
	let remainder = 43 % 5;

	println!("{sum}, {difference}, {product}, {quotient}, {truncated}, {remainder}");

	// booleans
	let t = true;

	let f: bool = false; // with explicit type annotation

	// characters
	let c = 'z';
	let z: char = 'p'; // with explicit type notation
	
	// tuples
	let tup: (i32, f64, u8) = (500, 6.4, 1);

	let (x, y, z) = tup;

	println!("The value of y is: {y}");
	
	let five_hundred = tup.0;

	let six_point_four = tup.1;

	let one = tup.2;

	println!("{five_hundred}, {six_point_four}, {one}");

	// arrays
	let a = [1, 2, 3, 4, 5];
	let a: [i32; 5] = [1, 2, 3, 4, 5];

	let a = [3; 5]; // prints out [3, 3, 3, 3, 3]

	let first = a[0];
	let second = a[1];
}

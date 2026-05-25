fn main() {
    let mut buffer: [u8; 10] = [0; 10];
    let overflow = b"This string is too long";

    println!("Buffer size: {}", buffer.len());
    println!("String length: {}", overflow.len());

    for (i, b) in overflow.iter().enumerate() {
        println!("Writing index {}", i);
        buffer[i] = *b;
    }
}

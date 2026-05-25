fn main() {    
    let mut buffer: [u8; 10] = [0; 10];
    let overflow = b"this string is to long";
    println!("Before buffer overflow");
    println!("string to overflow is {:?}", overflow.len());
    println!("buffer size is {:?}", buffer.len());
    for (i, b) in overflow.iter().enumerate(){
        buffer[i] = *b;
        println!("{:?}", i);
    }

    println!("after overflow");
    println!("{:?}", buffer);
}

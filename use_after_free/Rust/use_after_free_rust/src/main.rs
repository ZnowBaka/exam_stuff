fn transfer(data: String){
    println!("transfered data to function: {}", data);
}
fn main() {
    let message = String::from("this is the string thats transfered");
    transfer(message);

    println!("{}", message);
}

fn create_reference() -> &String {
    let data = String::from("this should not live long enough");
    &data
}
fn main() {
    let reference = create_reference();
    println!("{}", reference);
}

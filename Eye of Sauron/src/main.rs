use std::io;

fn main() {
    let mut vert_current: u64 = 0;
    let mut vert_seen: u64 = 0;
    let mut string = String::new();

    io::stdin().read_line(&mut string).unwrap();

    for i in string.chars() {
        if i == '|' {
            vert_current += 1;
        } else if i == ')' {
            vert_seen = vert_current;
            vert_current = 0; // Start counting verts again
        }
    }

    if vert_current == vert_seen {
        println!("correct");
    } else {
        println!("fix");
    }
}

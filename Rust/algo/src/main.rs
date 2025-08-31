use std::io::{self, Read};

fn main() {
    // 표준 입력 전체를 읽고 공백 기준으로 파싱
    let mut s = String::new();
    io::stdin().read_to_string(&mut s).unwrap();
    let mut it = s.split_whitespace();

    // 예: 정수 2개를 읽어서 합을 출력
    let a: i64 = it.next().unwrap().parse().unwrap();
    let b: i64 = it.next().unwrap().parse().unwrap();
    println!("{}", a + b);
}

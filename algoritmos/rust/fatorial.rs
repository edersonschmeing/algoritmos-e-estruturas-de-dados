/* 
    Fatorial é uma função matematica que consistem em realizar
    a multiplicação de todos os antecessores de um numero.
    
    Ex: 4! = 4 * 3 * 2 * 1 = 24 
*/

fn fatorial01(valor: u128) -> u128 {
    
    if valor == 1 {
        return 1
    }
    return valor * fatorial01(valor-1);
    
} 

// A implementação utiliza interadores.
fn fatorial02(valor: u128) -> u128 {
    
    let total = match valor {
        0  => 1,
        1.. => (1..valor+1).product(),  // product faz a multiplicação de todos os valores em um array  
    };    
    return total
}

fn fatorial03(valor: u128) -> u128 {
    match valor {
        0  => 1,
        1.. => valor * (fatorial03(valor - 1)),
    }
}

fn main() {
    println!("{}", fatorial01(5));
    println!("{}", fatorial02(5));
    println!("{}", fatorial03(5));    
}

struct Node<T> {
    dado: T,
    proximo: Option<Box<Node<T>>>,
}

impl<T> Node<T> {
    pub fn new(dado: T) -> Self {
        Node { dado, proximo : None }      
    }
}

pub struct Fila<T> {
    inicio: Option<Box<Node<T>>>,
    fim: Option<Box<Node<T>>>,
    tamanho: usize,
}


fn main() {
  
    let node = Node::new(3);
    println!("{:?}", node.dado);


}




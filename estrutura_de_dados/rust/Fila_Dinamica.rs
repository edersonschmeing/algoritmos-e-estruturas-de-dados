struct Node<T> {
    dado: T,
    proximo: Option<Box<Node<T>>>,
}

pub struct Fila<T> {
    inicio: Option<Box<Node<T>>>,
    fim: Option<Box<Node<T>>>,
    tamanho: usize,
}



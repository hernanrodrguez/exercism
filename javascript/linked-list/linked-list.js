//
// This is only a SKELETON file for the 'Linked List' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

const head = Symbol("head");
const tail = Symbol("tail");

export class LinkedList {

  constructor() {
    this[head] = null;
    this[tail] = null;
  }

  push(data) {
    const new_node = new ListNode(data);
    if(this[head] === null){
      this[head] = new_node;
      this[tail] = new_node;
      this[head]._previous = null;
    }
    else {
      this[tail]._next = new_node;
      new_node._previous = this[tail];
    }
    this[tail] = new_node;
  }

  pop() {
    let val;
    if(!(this[head] === null)){
      val = this[tail]._data;
      this[tail] = this[tail]._previous;
      if(!(this[tail] === null))
        this[tail]._next = null;
      else 
        this[head] = null;
    }
    return val;
  }

  shift() {
    let val;
    if(!(this[head] === null)){
      val = this[head]._data;
      this[head] = this[head]._next;
      if(!(this[head] === null))
        this[head]._previous = null;
    }
    return val;
  }

  unshift(data) {
    const new_node = new ListNode(data);
    if(!(this[head] === null)){
      new_node._next = this[head];
      this[head]._previous = new_node;
    } else {
      this[tail] = new_node;
    }
    this[head] = new_node;
  }

  delete(value) {
    let iter_node = this[head];
    while(!(iter_node === null)){
      if(iter_node._data == value){
        if(iter_node == this[head]){
          this[head] = iter_node._next;
        } if(!(iter_node._next === null)){
          iter_node._next._previous = iter_node._previous;
        } if(!(iter_node._previous === null)){
          iter_node._previous._next = iter_node._next;
        } if(iter_node == this[tail]){
          this[tail] = iter_node._previous;
        }
        break;
      }
      iter_node = iter_node._next;
    }
  }

  count() {
    let i=0;
    let iter_node = this[head];
    if(!(iter_node === null)){
      i++;
      while(iter_node._next != null){
        i++;
        iter_node = iter_node._next;
      }
    }
    return i;
  }
}

export class ListNode {
  constructor(data){
    this._data = data;
    this._previous = null;
    this._next = null;
  }
}

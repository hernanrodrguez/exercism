//
// This is only a SKELETON file for the 'Bank Account' exercise. It's been provided as a
// convenience to get you started writing code faster.
//

export class BankAccount {
  constructor() {
    this._is_open = false;
    this._balance = 0;
  }

  open() {
    if(!this._is_open)
      this._is_open = true;
    else
      throw new ValueError('ERROR: The current account is already open');
  }

  close() {
    if(this._is_open){
      this._is_open = false;
      this._balance = 0;
    }
    else
      throw new ValueError('ERROR: The current account is already closed');
  }

  deposit(val) {
    if(this._is_open){
      if(val > 0)
        this._balance += val;
      else 
        throw new ValueError('ERROR: Deposit value must be positive');      
    }else
      throw new ValueError('ERROR: The current account is closed');
  }

  withdraw(val) {
    if(this._is_open){
      if(val > 0){
        if(val <= this._balance)
          this._balance -= val;
        else 
          throw new ValueError('ERROR: You cant withdraw more money than deposited');
      } else 
        throw new ValueError('ERROR: Withdraw value must be positive');
    }
    else
      throw new ValueError('ERROR: The current account is closed');
  }

  get balance() {
    if(this._is_open)
      return this._balance;
    else 
      throw new ValueError('ERROR: The current account is closed');
  }
}

export class ValueError extends Error {
  constructor(msg) {
    super(msg);
  }
}

single_price = 800
discount = [None, 1, 0.95, 0.9, 0.8, 0.75]

def total(basket):
    flag = True
    prices = list()
    books = {1:0, 2:0, 3:0, 4:0, 5:0}

    for book in basket:
        books[book] = books[book] + 1

    for n_books in range(5,0,-1):
        price = 0
        aux_dict = dict(books)   
        while n_books>0:
            flag, aux_dict = group(aux_dict, n_books)
            if flag:
                price += n_books * (single_price*discount[n_books])
            else:
                n_books-=1
        prices.append(price)
    
    return min(prices)
    

def group(books, n):
    i=0
    aux = dict(books)
    for key in aux:
        if aux[key] != 0 and i<n:
            aux[key] -= 1
            i+=1
    if i==n: return True, aux
    else: return False, books

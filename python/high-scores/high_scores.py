def latest(scores):
    return scores[-1]


def personal_best(scores):
    return max(scores)


def personal_top_three(scores):
    ret_list = []

    for i in range(3):
        try:
            max_val = max(scores)
        except ValueError:
            continue

        ret_list.append(max_val)
        scores.remove(max_val)
    
    return ret_list

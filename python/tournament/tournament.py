header = "Team                           | MP |  W |  D |  L |  P"

def tally(rows):
    matches = dict()
    wins = dict()
    draws = dict()
    loss = dict()
    points = dict()

    table = []
    table.append(header)

    for row in rows:
        match = row.split(";")
        team_a = match[0]
        team_b = match[1]
        result = match[2]

        # save match played
        matches[team_a] = matches.get(team_a, 0) + 1
        matches[team_b] = matches.get(team_b, 0) + 1

        if result == "win":
            # save points
            points[team_a] = points.get(team_a, 0) + 3
            points[team_b] = points.get(team_b, 0)
            # save win/draw/loss
            wins[team_a] = wins.get(team_a, 0) + 1
            loss[team_b] = loss.get(team_b, 0) + 1
        elif result == "draw":
            # save points
            points[team_a] = points.get(team_a, 0) + 1
            points[team_b] = points.get(team_b, 0) + 1
            # save win/draw/loss
            draws[team_a] = draws.get(team_a, 0) + 1
            draws[team_b] = draws.get(team_b, 0) + 1
        else:
            # save points
            points[team_a] = points.get(team_a, 0)
            points[team_b] = points.get(team_b, 0) + 3
            # save win/draw/loss
            loss[team_a] = loss.get(team_a, 0) + 1
            wins[team_b] = wins.get(team_b, 0) + 1

    # sort alphabetically
    alpha = dict(reversed(sorted(points.items())))
    # sort by points
    positions = dict(reversed(sorted(alpha.items(), key=lambda item: item[1])))

    for team,pts in positions.items():
        col = " |  "
        mp = str(matches.get(team, 0))
        w = str(wins.get(team, 0))
        d = str(draws.get(team, 0))
        l = str(loss.get(team, 0))
        row = team + " " * (30-len(team)) + col + mp + col + w + col + d + col + l + col + str(pts)
        table.append(row)        

    return table


SELECT title FROM movies
WHERE id IN
    (SELECT movie_id FROM stars
    WHERE person_id =
        (SELECT id FROM people
        WHERE name IN ("Johnny Depp", "Helena Bohman Carter"))
    GROUP BY person_id
    HAVING COUNT(person_id) = 2);
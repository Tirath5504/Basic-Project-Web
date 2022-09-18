SELECT title FROM movies
JOIN ratings
ON ratings.rating = movies.rating
WHERE id IN
    (SELECT movie_id FROM stars
    WHERE person_id IN
        (SELECT id FROM people
        WHERE name = "Chadwick Boseman")
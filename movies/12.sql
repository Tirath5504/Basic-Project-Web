SELECT title FROM movies
WHERE id IN
    (SELECT movie_id FROM stars
    WHERE person_id =
        (SELECT id FROM people
        WHERE name = "Johnny Depp"))
INTERSECT
SELECT title FROM movies
WHERE id IN
    (SELECT movie_id FROM stars
    WHERE person_id =
        (SELECT id FROM people
        WHERE name = "Helena Bohman Carter"))


SELECT movies.title
FROM movies
JOIN people
  ON people.id = stars.person_id
JOIN stars
  ON stars.movie_id = movies.id
WHERE people.name = "Johnny Depp"
INTERSECT
SELECT movies.title
FROM movies
JOIN people
ON people.id = stars.person_id
JOIN stars
ON stars.movie_id = movies.id
WHERE people.name = "Helena Bonham Carter"
ORDER BY movies.title
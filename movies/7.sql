SELECT movies.title, ratings.rating, COUNT(DISTINCT title) AS c
FROM movies
JOIN ratings
ON movies.id = ratings.movie_id
WHERE year = 2010
ORDER BY
(CASE
    WHEN c = 1 THEN ratings.rating
    ELSE title
END);
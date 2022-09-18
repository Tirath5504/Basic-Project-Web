SELECT movies.title, ratings.rating
FROM movies
JOIN ratings
ON movies.id = ratings.movie_id
WHERE year = 2010
ORDER BY
(CASE
    WHEN COUNT(rating) < 2 THEN title
    ELSE rating
END);
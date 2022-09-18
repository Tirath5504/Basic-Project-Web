SELECT movies.title, ratings.rating, COUNT(rating) WHERE movie_id = (SELECT id)
FROM movies
JOIN ratings
ON movies.id = ratings.movie_id
WHERE year = 2010
ORDER BY
(CASE
    WHEN COUNT(rating) = 1 THEN rating
    ELSE title
END);
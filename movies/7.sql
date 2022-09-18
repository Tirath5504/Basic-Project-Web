SELECT movies.title, ratings.rating
FROM movies
JOIN ratings
ON movies.id = ratings.movie_id
WHERE year = 2010
ORDER BY
(CASE
    WHEN COUNT(rating) = 1 THEN rating DESC
    ELSE title ASC
END);
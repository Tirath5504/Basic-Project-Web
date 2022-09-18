SELECT movies.title, ratings.rating
FROM movies
INNER JOIN ratings
ON ratings.movie_id = movies.id
WHERE year = 2010
ORDER BY
(CASE
    WHEN COUNT(rating) = 1 THEN rating DESC
    ELSE title
END);
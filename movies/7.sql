SELECT movies.title, ratings.rating, COUNT(DISTINCT title)
FROM movies
JOIN ratings
ON movies.id = ratings.movie_id
WHERE year = 2010
GROUP BY title
ORDER BY
(CASE
    WHERE COUNT(rating) = 1 THEN rating
    ELSE title
END);
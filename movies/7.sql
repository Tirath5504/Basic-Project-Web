SELECT movies.title, ratings.rating
FROM movies
JOIN ratings
ON movies.id = ratings.movie_id
WHERE year = 2010
GROUP BY title
ORDER BY
(CASE
    HAVING COUNT(rating) = 1 THEN rating
    ELSE title
END);
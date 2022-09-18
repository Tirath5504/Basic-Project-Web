SELECT movies.title, ratings.rating, COUNT(DISTINCT title)
FROM movies
JOIN ratings
ON movies.id = ratings.movie_id
WHERE year = 2010
GROUP BY title
(CASE
    HAVING COUNT(rating) = 1 THEN ORDER BY rating
    ELSE ORDER BY title
END);
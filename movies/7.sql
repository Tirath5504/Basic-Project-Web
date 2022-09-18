SELECT movies.title, ratings.rating, COUNT(DISTINCT title) AS a
FROM movies
JOIN ratings
ON movies.id = ratings.movie_id
WHERE year = 2010
GROUP BY title
(CASE
    WHEN COUNT(a) = 1 THEN ORDER BY rating
    ELSE ORDER BY title
END);
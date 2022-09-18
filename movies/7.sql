SELECT movies.title, ratings.rating
FROM movies
JOIN ratings
ON movies.id = ratings.id
WHERE year = 2010
ORDER BY ratings DESC;

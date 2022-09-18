SELECT movies.title, ratings.rating
FROM movies
JOIN ratings
WHERE year = 2010
ORDER BY rating DESC;

SELECT
	max( gpa ) 
FROM
	user_profile 
WHERE
	university = '复旦大学' 
ORDER BY
	gpa;
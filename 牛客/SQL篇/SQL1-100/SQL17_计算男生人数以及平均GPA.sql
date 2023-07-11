SELECT
	count( gender ) AS male_num,
	round( avg( gpa ), 1 ) AS avg_gpa 
FROM
	user_profile 
WHERE
	gender = 'male' 
ORDER BY
	gpa;
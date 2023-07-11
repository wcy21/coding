SELECT
	university,
	avg( question_cnt ) AS avg_question_cnt 
FROM
	user_profile 
GROUP BY
	university 
ORDER BY
	avg_question_cnt;
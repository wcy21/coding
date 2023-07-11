SELECT
	university,
	avg( question_cnt ) AS avg_question_cnt,
	avg( answer_cnt ) AS avg_answer_cnt 
FROM
	user_profile
GROUP BY
	university
HAVING
	avg_question_cnt < 5 
	OR avg_answer_cnt < 20;
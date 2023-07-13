SELECT
	university,
	count( question_id ) / count( DISTINCT qpd.device_id ) AS avg_answer_cnt 
FROM
	question_practice_detail AS qpd
	JOIN user_profile AS up ON qpd.device_id = up.device_id 
GROUP BY
	up.university;
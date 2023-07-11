SELECT
	gender,
	university,
	count( device_id ),
	avg( active_days_within_30 ) AS avg_active_day,
	avg( question_cnt ) AS avg_question_cnt 
FROM
	user_profile 
GROUP BY
	gender,
	university;
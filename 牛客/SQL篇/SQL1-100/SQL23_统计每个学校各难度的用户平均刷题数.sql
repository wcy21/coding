SELECT
	university,
	difficult_level,
	round( count( qpd.question_id )/ count( DISTINCT qpd.device_id ), 4 ) AS avg_answer_cnt 
FROM
	question_practice_detail AS qpd
	LEFT JOIN user_profile AS up ON up.device_id = qpd.device_id
	LEFT JOIN question_detail AS qd ON qd.question_id = qpd.question_id 
GROUP BY
	university,
	difficult_level
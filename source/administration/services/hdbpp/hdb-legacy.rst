.. _hdbpp_legacy:

:audience:`administrators, developers`, :lang:`SQL`


Legacy HDB tables structure
===========================
.. contents::
   :depth: 2

.. Legacy HDB tables structure

::

    mysql> describe adt;
    +-------------+-------------------------------+------+-----+---------+----------------+
    | Field       | Type                          | Null | Key | Default | Extra          |
    +-------------+-------------------------------+------+-----+---------+----------------+
    | ID          | smallint(5) unsigned zerofill | NO   | PRI | NULL    | auto_increment |
    | time        | datetime                      | YES  |     | NULL    |                |
    | full_name   | varchar(200)                  | NO   | PRI |         |                |
    | device      | varchar(150)                  | NO   |     |         |                |
    | domain      | varchar(35)                   | NO   |     |         |                |
    | family      | varchar(35)                   | NO   |     |         |                |
    | member      | varchar(35)                   | NO   |     |         |                |
    | att_name    | varchar(50)                   | NO   |     |         |                |
    | data_type   | tinyint(1)                    | NO   |     | 0       |                |
    | data_format | tinyint(1)                    | NO   |     | 0       |                |
    | writable    | tinyint(1)                    | NO   |     | 0       |                |
    | max_dim_x   | smallint(6) unsigned          | NO   |     | 0       |                |
    | max_dim_y   | smallint(6) unsigned          | NO   |     | 0       |                |
    | levelg      | tinyint(1)                    | NO   |     | 0       |                |
    | facility    | varchar(45)                   | NO   |     |         |                |
    | archivable  | tinyint(1)                    | NO   |     | 0       |                |
    | substitute  | smallint(9)                   | NO   |     | 0       |                |
    +-------------+-------------------------------+------+-----+---------+----------------+
        

::

    mysql> describe amt;
    +-------------------+-------------------------------+------+-----+---------+-------+
    | Field             | Type                          | Null | Key | Default | Extra |
    +-------------------+-------------------------------+------+-----+---------+-------+
    | ID                | smallint(5) unsigned zerofill | NO   |     | 00000   |       |
    | archiver          | varchar(255)                  | NO   |     |         |       |
    | start_date        | datetime                      | YES  |     | NULL    |       |
    | stop_date         | datetime                      | YES  |     | NULL    |       |
    | per_mod           | int(1)                        | NO   |     | 0       |       |
    | per_per_mod       | int(5)                        | YES  |     | NULL    |       |
    | abs_mod           | int(1)                        | NO   |     | 0       |       |
    | per_abs_mod       | int(5)                        | YES  |     | NULL    |       |
    | dec_del_abs_mod   | double                        | YES  |     | NULL    |       |
    | gro_del_abs_mod   | double                        | YES  |     | NULL    |       |
    | rel_mod           | int(1)                        | NO   |     | 0       |       |
    | per_rel_mod       | int(5)                        | YES  |     | NULL    |       |
    | n_percent_rel_mod | double                        | YES  |     | NULL    |       |
    | p_percent_rel_mod | double                        | YES  |     | NULL    |       |
    | thr_mod           | int(1)                        | NO   |     | 0       |       |
    | per_thr_mod       | int(5)                        | YES  |     | NULL    |       |
    | min_val_thr_mod   | double                        | YES  |     | NULL    |       |
    | max_val_thr_mod   | double                        | YES  |     | NULL    |       |
    | cal_mod           | int(1)                        | NO   |     | 0       |       |
    | per_cal_mod       | int(5)                        | YES  |     | NULL    |       |
    | val_cal_mod       | int(3)                        | YES  |     | NULL    |       |
    | type_cal_mod      | int(2)                        | YES  |     | NULL    |       |
    | algo_cal_mod      | varchar(20)                   | YES  |     | NULL    |       |
    | dif_mod           | int(1)                        | NO   |     | 0       |       |
    | per_dif_mod       | int(5)                        | YES  |     | NULL    |       |
    | ext_mod           | int(1)                        | NO   |     | 0       |       |
    | refresh_mode      | tinyint(4)                    | YES  |     | 0       |       |
    +-------------------+-------------------------------+------+-----+---------+-------+
        

::

    mysql> describe apt;
    +---------------+--------------------------+------+-----+---------+-------+
    | Field         | Type                     | Null | Key | Default | Extra |
    +---------------+--------------------------+------+-----+---------+-------+
    | ID            | int(5) unsigned zerofill | NO   | PRI | 00000   |       |
    | time          | datetime                 | YES  |     | NULL    |       |
    | description   | varchar(255)             | NO   |     |         |       |
    | label         | varchar(64)              | NO   |     |         |       |
    | unit          | varchar(64)              | NO   |     | 1       |       |
    | standard_unit | varchar(64)              | NO   |     | 1       |       |
    | display_unit  | varchar(64)              | NO   |     |         |       |
    | format        | varchar(64)              | NO   |     |         |       |
    | min_value     | varchar(64)              | NO   |     | 0       |       |
    | max_value     | varchar(64)              | NO   |     | 0       |       |
    | min_alarm     | varchar(64)              | NO   |     | 0       |       |
    | max_alarm     | varchar(64)              | NO   |     | 0       |       |
    +---------------+--------------------------+------+-----+---------+-------+
        

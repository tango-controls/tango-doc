.. _hdbpp_mysql:

:audience:`administrators, developers`, :lang:`SQL`


schema SQL source (MySQL)
=========================
.. contents::
   :depth: 1

.. schema SQL source (MySQL)

::

    CREATE TABLE IF NOT EXISTS att_conf
    (
    att_conf_id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    att_name VARCHAR(255) UNIQUE NOT NULL,
    att_conf_data_type_id INT UNSIGNED NOT NULL,
    att_ttl INT UNSIGNED NULL DEFAULT NULL,
    facility VARCHAR(255) NOT NULL DEFAULT '',
    domain VARCHAR(255) NOT NULL DEFAULT '',
    family VARCHAR(255) NOT NULL DEFAULT '',
    member VARCHAR(255) NOT NULL DEFAULT '',
    name VARCHAR(255) NOT NULL DEFAULT '',
    INDEX(att_conf_data_type_id)
    ) ENGINE=MyISAM COMMENT='Attribute Configuration Table';

    DROP TABLE att_conf_data_type;
    CREATE TABLE IF NOT EXISTS att_conf_data_type
    (
    att_conf_data_type_id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    data_type VARCHAR(255) NOT NULL,
    tango_data_type TINYINT(1) NOT NULL
    ) ENGINE=MyISAM COMMENT='Attribute types description';

    INSERT INTO att_conf_data_type (data_type, tango_data_type) VALUES
    ('scalar_devboolean_ro', 1),('scalar_devboolean_rw', 1),('array_devboolean_ro', 1),
    ('array_devboolean_rw', 1),('scalar_devuchar_ro', 22),('scalar_devuchar_rw', 22),
    ('array_devuchar_ro', 22),('array_devuchar_rw', 22),('scalar_devshort_ro', 2),
    ('scalar_devshort_rw', 2),('array_devshort_ro', 2),('array_devshort_rw', 2),
    ('scalar_devushort_ro', 6),('scalar_devushort_rw', 6),('array_devushort_ro', 6),
    ('array_devushort_rw', 6),('scalar_devlong_ro', 3),('scalar_devlong_rw', 3),
    ('array_devlong_ro', 3),('array_devlong_rw', 3),('scalar_devulong_ro', 7),
    ('scalar_devulong_rw', 7),('array_devulong_ro', 7),('array_devulong_rw', 7),
    ('scalar_devlong64_ro', 23),('scalar_devlong64_rw', 23),('array_devlong64_ro', 23),
    ('array_devlong64_rw', 23),('scalar_devulong64_ro', 24),('scalar_devulong64_rw', 24),
    ('array_devulong64_ro', 24),('array_devulong64_rw', 24),('scalar_devfloat_ro', 4),
    ('scalar_devfloat_rw', 4),('array_devfloat_ro', 4),('array_devfloat_rw', 4),
    ('scalar_devdouble_ro', 5),('scalar_devdouble_rw', 5),('array_devdouble_ro', 5),
    ('array_devdouble_rw', 5),('scalar_devstring_ro', 8),('scalar_devstring_rw', 8),
    ('array_devstring_ro', 8),('array_devstring_rw', 8),('scalar_devstate_ro', 19),
    ('scalar_devstate_rw', 19),('array_devstate_ro', 19),('array_devstate_rw', 19),
    ('scalar_devencoded_ro', 28),('scalar_devencoded_rw', 28),('array_devencoded_ro', 28),
    ('array_devencoded_rw', 28);

    CREATE TABLE IF NOT EXISTS att_history
    (
    att_conf_id INT UNSIGNED NOT NULL,
    time TIMESTAMP(6) DEFAULT 0,
    att_history_event_id INT UNSIGNED NOT NULL,
    INDEX(att_conf_id),
    INDEX(att_history_event_id)
    ) ENGINE=MyISAM COMMENT='Attribute Configuration Events History Table';

    DROP TABLE att_history_event;
    CREATE TABLE IF NOT EXISTS att_history_event
    (   
    att_history_event_id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    event VARCHAR(255) NOT NULL
    ) ENGINE=MyISAM COMMENT='Attribute history events description';

    INSERT INTO att_history_event (event) VALUES
    ('add'),('remove'),('start'),('stop'),('crash'),('pause');

    CREATE TABLE IF NOT EXISTS att_parameter
    (
    att_conf_id INT UNSIGNED NOT NULL,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    label VARCHAR(255) NOT NULL DEFAULT '',
    unit VARCHAR(64) NOT NULL DEFAULT '',
    standard_unit VARCHAR(64) NOT NULL DEFAULT '1',
    display_unit VARCHAR(64) NOT NULL DEFAULT '',
    format VARCHAR(64) NOT NULL DEFAULT '',
    archive_rel_change VARCHAR(64) NOT NULL DEFAULT '',
    archive_abs_change VARCHAR(64) NOT NULL DEFAULT '',
    archive_period VARCHAR(64) NOT NULL DEFAULT '',
    description VARCHAR(1024) NOT NULL DEFAULT '',
    INDEX(recv_time),
    INDEX(att_conf_id)
    ) ENGINE=MyISAM COMMENT='Attribute configuration parameters';

    CREATE TABLE IF NOT EXISTS att_error_desc
    (
    att_error_desc_id INT UNSIGNED NOT NULL AUTO_INCREMENT PRIMARY KEY,
    error_desc VARCHAR(255) UNIQUE NOT NULL
    ) ENGINE=MyISAM COMMENT='Error Description Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devboolean_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT(1) UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Boolean ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devboolean_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT(1) UNSIGNED DEFAULT NULL,
    value_w TINYINT(1) UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Boolean ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devboolean_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT(1) UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Boolean ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devboolean_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT(1) UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w TINYINT(1) UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Boolean ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devuchar_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar UChar ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devuchar_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    value_w TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar UChar ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devuchar_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array UChar ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devuchar_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array UChar ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devshort_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r SMALLINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Short ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devshort_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r SMALLINT DEFAULT NULL,
    value_w SMALLINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Short ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devshort_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r SMALLINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Short ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devshort_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r SMALLINT DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w SMALLINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Short ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devushort_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r SMALLINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar UShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devushort_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r SMALLINT UNSIGNED DEFAULT NULL,
    value_w SMALLINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar UShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devushort_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r SMALLINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array UShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devushort_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r SMALLINT UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w SMALLINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array UShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r INT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Long ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r INT DEFAULT NULL,
    value_w INT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Long ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r INT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Long ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r INT DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w INT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Long ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r INT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar ULong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r INT UNSIGNED DEFAULT NULL,
    value_w INT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar ULong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r INT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array ULong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r INT UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w INT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array ULong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong64_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BIGINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Long64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong64_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BIGINT DEFAULT NULL,
    value_w BIGINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Long64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong64_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BIGINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Long64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong64_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BIGINT DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w BIGINT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Long64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong64_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BIGINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar ULong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong64_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BIGINT UNSIGNED DEFAULT NULL,
    value_w BIGINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar ULong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong64_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BIGINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array ULong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong64_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BIGINT UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w BIGINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array ULong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devfloat_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r FLOAT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Float ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devfloat_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r FLOAT DEFAULT NULL,
    value_w FLOAT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Float ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devfloat_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r FLOAT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Float ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devfloat_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r FLOAT DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w FLOAT DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Float ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devdouble_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r DOUBLE DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Double ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devdouble_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r DOUBLE DEFAULT NULL,
    value_w DOUBLE DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Double ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devdouble_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r DOUBLE DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Double ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devdouble_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r DOUBLE DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w DOUBLE DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Double ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstring_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r VARCHAR(16384) DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar String ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstring_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r VARCHAR(16384) DEFAULT NULL,
    value_w VARCHAR(16384) DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar String ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstring_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r VARCHAR(16384) DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array String ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstring_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r VARCHAR(16384) DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w VARCHAR(16384) DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array String ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstate_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar State ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstate_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    value_w TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar State ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstate_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array State ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstate_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r TINYINT UNSIGNED DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w TINYINT UNSIGNED DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array State ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devencoded_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BLOB DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Encoded ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devencoded_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    value_r BLOB DEFAULT NULL,
    value_w BLOB DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Scalar Encoded ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devencoded_ro
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BLOB DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Encoded ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devencoded_rw
    (
    att_conf_id INT UNSIGNED NOT NULL,
    data_time TIMESTAMP(6) DEFAULT 0,
    recv_time TIMESTAMP(6) DEFAULT 0,
    insert_time TIMESTAMP(6) DEFAULT 0,
    idx INT UNSIGNED NOT NULL,
    dim_x_r INT UNSIGNED NOT NULL,
    dim_y_r INT UNSIGNED NOT NULL DEFAULT 0,
    value_r BLOB DEFAULT NULL,
    dim_x_w INT UNSIGNED NOT NULL,
    dim_y_w INT UNSIGNED NOT NULL DEFAULT 0,
    value_w BLOB DEFAULT NULL,
    quality TINYINT(1) DEFAULT NULL,
    att_error_desc_id INT UNSIGNED NULL DEFAULT NULL,
    INDEX att_conf_id_data_time (att_conf_id,data_time)
    ) ENGINE=MyISAM COMMENT='Array Encoded ReadWrite Values Table';
        

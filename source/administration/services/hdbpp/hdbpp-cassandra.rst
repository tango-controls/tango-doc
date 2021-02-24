.. _hdbpp_cassandra:

:audience:`administrators, developers`, :lang:`CQL`


schema CQL source (Cassandra)
=============================
.. contents::
   :depth: 1

.. schema CQL source (Cassandra)

::

    -- Create hdb keyspace
    -- Please adapt the replication factor (3 by default here) to your use case
    CREATE KEYSPACE IF NOT EXISTS hdb WITH REPLICATION = { 'class' : 'NetworkTopologyStrategy', 'DC1' : 3 };

    USE hdb;

    CREATE TYPE IF NOT EXISTS devencoded (
     encoded_format text,
     encoded_data blob
    );

    CREATE TABLE IF NOT EXISTS att_conf (
    cs_name text,
    att_name text,
    att_conf_id timeuuid,
    data_type text,   -- data_types set<text> in the future?
    PRIMARY KEY (cs_name, att_name)
    )
    WITH comment='Attribute Configuration Table'
    AND caching = {'keys' : 'NONE', 'rows_per_partition': 'ALL' };

    CREATE INDEX on att_conf(data_type);
    CREATE INDEX on att_conf(att_conf_id);

    CREATE TABLE IF NOT EXISTS att_history
    (
    att_conf_id timeuuid,
    time timestamp,
    time_us int,
    event text, -- 'add','remove','start','stop' or 'crash'
    PRIMARY KEY(att_conf_id, time, time_us)
    )
    WITH comment='Attribute Configuration Events History Table';


    CREATE TABLE IF NOT EXISTS att_scalar_devboolean_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r boolean,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevBoolean ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devboolean_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r boolean,
    value_w boolean,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevBoolean ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devuchar_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    ) WITH comment='Scalar DevUChar ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devuchar_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    value_w int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevUChar ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devshort_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    ) WITH comment='Scalar DevShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devshort_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    value_w int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devushort_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevUShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devushort_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    value_w int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevUShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevLong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    value_w int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevLong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevULong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint,
    value_w bigint,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevULong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong64_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevLong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devlong64_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint,
    value_w bigint,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevLong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong64_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint,              // issue here with very big numbers
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevULong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devulong64_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r bigint, // issue here with very big numbers
    value_w bigint, // issue here with very big numbers
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevLong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devfloat_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r float,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevFloat ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devfloat_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r float,
    value_w float,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevFloat ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devdouble_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r double,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevDouble ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devdouble_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r double,
    value_w double,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevDouble ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstring_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r text,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevString ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstring_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r text,
    value_w text,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevString ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstate_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevState ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devstate_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r int,
    value_w int,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevState ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devencoded_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r frozen<devencoded>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevEncoded ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_scalar_devencoded_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r frozen<devencoded>,
    value_w frozen<devencoded>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Scalar DevEncoded ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devboolean_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<boolean>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevBoolean ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devboolean_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<boolean>,
    value_w list<boolean>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevBoolean ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devuchar_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevUChar ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devuchar_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    value_w list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevUChar ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devshort_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devshort_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    value_w list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devushort_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevUShort ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devushort_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    value_w list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevUShort ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevLong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,
    value_w list<int>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevLong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevULong ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>,
    value_w list<bigint>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevULong ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong64_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevLong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devlong64_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>,
    value_w list<bigint>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevLong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong64_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>,  // issue with very big numbers
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevULong64 ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devulong64_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<bigint>, // issue with very big numbers
    value_w list<bigint>, // issue with very big numbers
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevULong64 ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devfloat_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<float>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevFloat ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devfloat_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<float>,
    value_w list<float>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevFloat ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devdouble_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<double>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevDouble ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devdouble_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<double>,
    value_w list<double>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevDouble ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstring_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<text>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevString ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstring_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<text>,
    value_w list<text>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevString ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstate_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>, // Store a special type here
                       // where we could store an int and a string?
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevState ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devstate_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<int>,// Store a special type here
    value_w list<int>,// where we could store an int and a string?
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevState ReadWrite Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devencoded_ro (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<frozen<devencoded>>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevEncoded ReadOnly Values Table';

    CREATE TABLE IF NOT EXISTS att_array_devencoded_rw (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    value_r list<frozen<devencoded>>,
    value_w list<frozen<devencoded>>,
    quality int,
    error_desc text,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Array DevEncoded ReadWrite Values Table';

    -------------------------
    -- att_parameter table --
    -------------------------
    CREATE TABLE IF NOT EXISTS att_parameter (
    att_conf_id timeuuid,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    label text,
    unit text,
    standard_unit text,
    display_unit text,
    format text,
    archive_rel_change text,
    archive_abs_change text,
    archive_period text,
    description text,
    PRIMARY KEY((att_conf_id), recv_time, recv_time_us)
    ) WITH COMMENT='Attribute configuration parameters';

    --------------------------------
    -- Attributes browsing tables --
    --------------------------------
    CREATE TABLE IF NOT EXISTS domains ( 
    cs_name text,
    domain text,
    PRIMARY KEY (cs_name, domain)
    )
    WITH CLUSTERING ORDER BY (domain ASC)
    AND comment='Domains Table'
    AND caching = {'keys' : 'NONE', 'rows_per_partition': 'ALL' };

    CREATE TABLE IF NOT EXISTS families ( 
    cs_name text,
    domain text,
    family text,
    PRIMARY KEY ((cs_name, domain),family)
    )
    WITH CLUSTERING ORDER BY (family ASC)
    AND comment='Families Table'
    AND caching = {'keys' : 'NONE', 'rows_per_partition': 'ALL' };

    CREATE TABLE IF NOT EXISTS members (
    cs_name text,
    domain text,
    family text,
    member text,
    PRIMARY KEY ((cs_name, domain,family),member)
    )
    WITH CLUSTERING ORDER BY (member ASC)
    AND comment='Members Table'
    AND caching = {'keys' : 'NONE', 'rows_per_partition': 'ALL' };

    CREATE TABLE IF NOT EXISTS att_names (
    cs_name text,
    domain text,
    family text,
    member text,
    name text,
    PRIMARY KEY ((cs_name, domain,family,member),name)
    )
    WITH CLUSTERING ORDER BY (name ASC)
    AND comment='Attributes Names Table'
    AND caching = {'keys' : 'NONE', 'rows_per_partition': 'ALL' };

    CREATE TABLE IF NOT EXISTS time_stats (
    att_conf_id timeuuid,
    period text,
    data_time timestamp,
    data_time_us int,
    recv_time timestamp,
    recv_time_us int,
    insert_time timestamp,
    insert_time_us int,
    PRIMARY KEY ((att_conf_id ,period),data_time,data_time_us)
    )
    WITH comment='Time Statistics Table';


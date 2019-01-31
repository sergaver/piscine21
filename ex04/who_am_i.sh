ldapwhoami -Q|grep 'uid='|sed 's/dn://g'|sed 's/,ou=student//g'

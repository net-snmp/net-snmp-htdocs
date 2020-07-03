check:
	find -name '*.html' | \
	while read f; do tidy -e < "$$f" | sed "s|^-e|$$f|"; done

upload:
	@if [ -n "$$SOURCEFORGE_USERNAME" ]; then			     \
		ssh $$SOURCEFORGE_USERNAME@shell.sourceforge.net create &&   \
		rsync -acirv --exclude .git .				     \
			$$SOURCEFORGE_USERNAME@web.sourceforge.net:/home/project-web/net-snmp/htdocs; \
	else								     \
		echo "SOURCEFORGE_USERNAME has not been set";		     \
	fi

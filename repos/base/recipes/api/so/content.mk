content: lib/import/import-ldso_so_support.mk lib/mk/ldso_so_support.mk src/lib/ldso/so_support.c LICENSE

lib/import/import-ldso_so_support.mk lib/mk/ldso_so_support.mk src/lib/ldso/so_support.c:
	$(mirror_from_rep_dir)

LICENSE:
	cp $(GENODE_DIR)/LICENSE $@

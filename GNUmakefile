# PATH=/usr/bin:/bin:/usr/sbin:/sbin:/usr/local/bin:/usr/X11/bin
SHELL									:= /bin/bash

PWD										?= pwd_unknown

THIS_DIR=$(dir $(abspath $(firstword $(MAKEFILE_LIST))))
export THIS_DIR

TIME									:= $(shell date +%s)
export TIME

# PROJECT_NAME defaults to name of the current directory.
ifeq ($(project),)
PROJECT_NAME							:= $(notdir $(PWD))
else
PROJECT_NAME							:= $(project)
endif
export PROJECT_NAME

ifeq ($(force),true)
FORCE									:= --force
endif
export FORCE

#GIT CONFIG
GIT_USER_NAME							:= $(shell git config user.name)
export GIT_USER_NAME
GIT_USER_EMAIL							:= $(shell git config user.email)
export GIT_USER_EMAIL
GIT_SERVER								:= https://github.com
export GIT_SERVER
GIT_PROFILE								:= $(shell git config user.name)
export GIT_PROFILE
GIT_BRANCH								:= $(shell git rev-parse --abbrev-ref HEAD)
export GIT_BRANCH
GIT_HASH								:= $(shell git rev-parse --short HEAD)
export GIT_HASH
GIT_PREVIOUS_HASH						:= $(shell git rev-parse --short HEAD^1)
export GIT_PREVIOUS_HASH
GIT_REPO_ORIGIN							:= $(shell git remote get-url origin)
export GIT_REPO_ORIGIN
GIT_REPO_NAME							:= $(PROJECT_NAME)
export GIT_REPO_NAME
GIT_REPO_PATH							:= $(HOME)/$(GIT_REPO_NAME)
export GIT_REPO_PATH

#CHECK DEPENDS
MESON									:= $(shell which meson)
export MESON
# default output
##make		command		description
##	:
##	all			autogen configure mako
##		autogen		./autogen.sh
##		configure	./configure
##		mako		all-am -f Makefile
##	:
##	dist			distdir-am -f Makefile
##	:
##	clean
##		clean-all
##	:
##		report
##	:
##	xcode			submodules initialize
##		submodules	git submodule update --init --recursive
##		initialize	pushd xcode && ./initialize

help:
	@sed -n 's/^##//p' ${MAKEFILE_LIST} | column -t -s ':' |  sed -e 's/^//'
.PHONY:all
all: autogen configure mako
autogen:
	./autogen.sh
.PHONY: configure
configure:
	./configure

.PHONY: mako makod
mako:makod
makod:
	$(MAKE) -f Makefile all-am

.PHONY: dist distdir-am
dist: distdir-am
distdir-am: package
	$(MAKE) -f Makefile $@
	@git status -s

.PHONY: submodules
submodules:
	git submodule update --init --recursive
	git submodule foreach 'git fetch origin; git checkout $$(git rev-parse --abbrev-ref HEAD); git reset --hard origin/$$(git rev-parse --abbrev-ref HEAD); git submodule update --recursive; git clean -dfx'
.PHONY: xcode
xcode: submodules initialize
.PHONY: initialize
initialize:
	@pushd xcode && ./initialize && popd

.PHONY: clean
clean:
	@make -f Makefile clean-am
.PHONY: clean-all
clean-all:
	@make -f Makefile clean-am
	@rm ./configure
	@rm Makefile
	@rm -rf mako-*
report:
	@echo ''
	@echo ' TIME=${TIME}	'
	@echo ' THIS_DIR=${THIS_DIR}	'
	@echo ' PROJECT_NAME=${PROJECT_NAME}	'
	@echo ' GIT_USER_NAME=${GIT_USER_NAME}	'
	@echo ' GIT_USER_EMAIL=${GIT_USER_EMAIL}	'
	@echo ' GIT_SERVER=${GIT_SERVER}	'
	@echo ' GIT_PROFILE=${GIT_PROFILE}	'
	@echo ' GIT_BRANCH=${GIT_BRANCH}	'
	@echo ' GIT_HASH=${GIT_HASH}	'
	@echo ' GIT_PREVIOUS_HASH=${GIT_PREVIOUS_HASH}	'
	@echo ' GIT_REPO_ORIGIN=${GIT_REPO_ORIGIN}	'
	@echo ' GIT_REPO_NAME=${GIT_REPO_NAME}	'
	@echo ' GIT_REPO_PATH=${GIT_REPO_PATH}	'
	@echo ''
	@echo ' XCODE DEPENDS'
	@echo ''
	@echo ' MESON=${MESON}	'
	@echo ''

#-include Makefile
# vim: set noexpandtab:
# vim: set setfiletype make

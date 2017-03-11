#!/bin/sh

DIR=$1

if [ ! -d $DIR/libft ] ; then
	echo "There is no LIBFT directory in $DIR"
	exit
fi

cp Makefile $DIR/libft/
cp -rf includes/ $DIR/libft/
cp -rf src/ $DIR/libft/

# Simple minimal docker image with static executable

## Build the image
	docker build -t hello_scratch .

## Run the container
	docker run --rm hello_scratch

## Run the container with a volume attached
	docker run --rm -v test:/app/logs hello_scratch

FROM alpine AS build
WORKDIR /build
RUN apk add build-base
COPY Makefile .
COPY hello.c .
RUN make

FROM scratch
WORKDIR /app
VOLUME ["/app/logs"]
COPY --from=build /build/hello .
ENTRYPOINT ["./hello"]

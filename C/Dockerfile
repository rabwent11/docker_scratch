FROM gcc AS build
WORKDIR /build
COPY Makefile .
COPY hello.c .
RUN make

FROM scratch
WORKDIR /app
VOLUME ["/app/logs"]
COPY --from=build /build/hello .
ENTRYPOINT ["./hello"]

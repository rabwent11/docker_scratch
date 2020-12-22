FROM golang as builder
WORKDIR /build
COPY Makefile .
COPY hello.go .
RUN make


FROM scratch

WORKDIR /app

COPY --from=builder /build/hello .

ENTRYPOINT ["./hello"]


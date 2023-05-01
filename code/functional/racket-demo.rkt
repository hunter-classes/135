#lang racket

(define sq (lambda (x) (* x x)))

(define l '(1 2 3 4 5))

(map sq l)

(define make-adder (lambda (x)
                  (lambda (y) (+ x y))))

(define add3 (make-adder 3))
(add3 20)

(define make-counter
  (lambda () 
    (let ([x 0])
      (lambda (op)
        (cond [ (equal? op +) (set! x (+ x 1))]
              [ (equal? op -) (set! x (- x 1))]
              [ (equal? op =) x]
              [ (equal? op 'reset) (set! x 0)]
              )
        x))))

(define c (make-counter))

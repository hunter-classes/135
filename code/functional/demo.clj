(ns main)


(+ 2 3)
(if (> 5 3) 'bigger 'not)

(def x 23)

(def y (+
        (if (> 5 2) 10 20)
        30)
  )

;; same as (def plus5 (fn [x] (+ x 5)))
(defn plus5  [x] (+ x 5))

(def l '[1 5 2 10 20 30 1 5 7 70 80])

(filter #(> % 10) l)

(defn add3 [a b c]
  (+ a b c))


(def foo
  (let [counter (atom 0)]
    (fn [] (do (swap! counter inc) @counter))
    ))

(let [x 10 y 20] (+ x y))

(def counter-object
  (let [counter (atom 0)]
    {:inc (fn [] (do (swap! counter inc) @counter))
     :dec (fn [] (do (swap! counter dec) @counter))
     :get (fn [] @counter)
     }))

(def d {:a 30 :b "hello" :c 123.3})

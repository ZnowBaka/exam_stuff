Dangling pointers Rust on OS:
samme som use_after_free giver dangling pointer i IDE og i compiler. programmet kører ikke da compileren ikke lader lifetime fejl kører.
Dangling pointers C on OS:
i C kører programmet, men fejler og giver advarsel i compiler. vi kan godt printe pointeren, men ikke værdien.

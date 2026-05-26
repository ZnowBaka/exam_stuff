Rust buffer_overflow on OS:
i dette eksperiment fandt compileren ikke fejlen før run_time.
dog stoppede programmet med det samme da den prøvede at skrive udenfor buffer størelsen.


C buffer_overflow on OS:
i eksperimentet med buffer_overflow i C og C++, compileren gav advarsel men kører aligevel.
dog kørte programmet færdigt før den advarede mod stack smashing, det kan være at der blev overskrevet data udenfor uden for buffer.
et muligt problem kan være at det kan ske at programmet ikke crasher med det samme og dermed, laver et usikkert/ustabilt program.

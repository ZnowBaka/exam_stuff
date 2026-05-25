Use_after_free Rust on OS:
I Rust giver den allerede kraftigt afslag i IDE. hvis man prøver at køre programmet alligevel, så stopper compileren programmet, da ownership er så pricipelt,
at den ikke lader dig prøve. advarselen i IDE kan dog være misledende, da den kun advarer om at man måske skal ændre return til at skifte ejerskab.
Use_after_free C on OS:
Use_after_free i C giver værken advarseler i IDE eller i compileren. compileren giver ingen fejl, og siger "compiled successfully" hvor efter programmet køre uden run-time crash.
men den værdi som bliver printet efter delete, er ikke samme værdi som den var.

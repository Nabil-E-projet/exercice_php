<!DOCTYPE html>
<html>

    <head>
        <title>Estimation</title>
        <meta charset="utf-8" />
        <link rel="stylesheet" href="style.css">
    </head>
    <body>
        <?php

        // tableau pour stocker le prix selon l'epoque
        $prix_periodes = [100000, 76000, 32000, 15000, 0];

        // tableau pour stocker le pourcentage selon le type d'oeuvre
        $pourcentage_type = [5, 27, 35, 1205, 0];

        // récuperer une donnée du formulaire
        // la date de fabrication

        // extraire toute les données du formulaire et de les mettre dans une variable
        extract($_POST);

      //  if (!empty($nom)) {
    //    echo "<h1>Estimation en cours...</h1>" . "<br>";

            // recuperer le prix associé à la periode
            $prix = $prix_periodes[$annee];


            $pourcentage_prix_oeuvre = $pourcentage_type[$type];
            $pourcentage = $pourcentage_prix_oeuvre / 100;
            $multiplicateur = 1 + $pourcentage; // 1.8 = +80%

            // calcul prix suivant la periode + pourcentage
            $calculfinal = $prix * $multiplicateur;

            echo "<h1>Prix de rachat : " . $calculfinal . "€ </h1><br>";


      //  }
      //  else{
        //    echo "Merci de remplir tout les champs <br>";
        //}
        ?>
    </body>
</html>
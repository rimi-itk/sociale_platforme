# Sociale Platforme

Dette er en installationsprofil til [Drupal](https://www.drupal.org/), som er beregnet til community websites. Profilen er bygget som en subprofil til [Drupal Commons](https://www.drupal.org/project/commons).

## Installationskrav

- Git
- Drush
- Webserver og database

## Installationsvejledning

1. Klon dette repository.
```
$ git clone git@github.com:createinside/sociale_platforme.git`
```
2. Flyt ``sp.make``-filen til den mappe, hvor websitet skal installeres. Kør derefter følgende kommando fra denne mappe.
```
$ drush make sp.make
```
*Herefter downloades både Drupal, Commons, Sociale Platforme og alle dependencies automatisk.* OBS: Dette kan tage nogle minutter.

3. Tilgå websitets URL og udfyld den trinvise installationsformular. Sørg for at vælge "Sociale Platforme" på første trin.

  Læs mere om generel installation af Drupal her: https://www.drupal.org/documentation/install/run-script#7

4. Når installationen er gennemført, bør følgende handlinger udføres:

  * Upgrade users

  * Rebuild permissions.      

  Begge handlinger kan udføres af admin i backenden (admin/reports/status).  

## Konfiguration

### Simpel
- Opret en bruger med rollen 'configurator'.

  Denne rolle er tiltænkt vedkommende som skal administrere websitet i det daglige.

  Rollen kan administrere farver, menuer, blokke mm.

  (admin/appearance/settings/sociale_platforme).

### Avanceret
  - Mere avanceret konfiguration bør foretages af en Drupal-kynding administrator (admin one).

  Opgaver som fx. installation af moduler, mailopsætning mm.

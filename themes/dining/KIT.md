# Radix-Starter-Kit

1. Enable and set the Radix theme as the default theme. See https://www.drupal.org/node/2552571#comment-11162311
2. ```drush radix "newsubtheme" --kit="https://github.com/ITS-UofIowa/radix-kit-sitenow/archive/master.zip" --destination="sites/yoursite/themes"```
3. If you are running radix version 7.x-3.5 or below you will have to change the "includes" folder hook_ names. See: https://www.drupal.org/node/2847486
4. ```npm run setup```
5. ```gulp```


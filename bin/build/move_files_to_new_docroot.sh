#!/bin/bash

chmod u+w docroot/sites/default/

if [ -d docroot/sites/default/files ]; then
    mv docroot/sites/default/files \
       docroot-new/sites/default/
fi

if [ -f docroot/sites/default/settings.php ]; then
    cp docroot/sites/default/settings.php \
       docroot-new/sites/default/settings.php
fi

if [ -f docroot/sites/default/settings.local.php ]; then
    mv docroot/sites/default/settings.local.php \
       docroot-new/sites/default/
fi

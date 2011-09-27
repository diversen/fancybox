<?php

function fancybox_include () {
    template::setCss('/templates/fancybox/jquery.fancybox-1.3.4.css', 30);
    template::setJs("/templates/fancybox/jquery.fancybox-1.3.4.pack.js", 30);
    template::setInlineJs(_COS_PATH . '/modules/gallery/fancybox.js');
}
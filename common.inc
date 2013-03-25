<?php

function fancybox_include () {
    template::setNoCacheCss('/templates/fancybox/source/jquery.fancybox.css', 30);
    template::setJs("/templates/fancybox/source/jquery.fancybox.js", 30, array ('head' => true));
    
}
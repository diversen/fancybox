<?php

function fancybox_include () {
    
    // no cache css - as we just keep the orginal image paths.
    template::setNoCacheCss('/templates/fancybox/source/jquery.fancybox.css');
    template::setJs("/templates/fancybox/source/jquery.fancybox.js", null, array ('head' => true));
    
}
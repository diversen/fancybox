### Deprecated

As the CosCMS is able to enable other repos as source we will just use the orginal repo as clone url from now on. 

This means we just use: 

    git://github.com/fancyapps/fancyBox.git

In build profiles that uses the jquery fancybox extension. 

In this manner you can now add any remot git repo to a build profile. 

In order to incorporate the fancyBox and load css and js you will need something like this: 

    function fancybox_include () {

        // no cache css - as we just keep the orginal image paths.
        template::setNoCacheCss('/templates/fancyBox/source/jquery.fancybox.css');
        template::setJs("/templates/fancyBox/source/jquery.fancybox.js", null, array ('head' => true));

    }

This will load all css and js.


2013-11-16

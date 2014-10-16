media.php line 738 - 756

$output = apply_filters('gallery_style', "
<style type='text/css'>
#{$selector} {
margin: auto;
}
#{$selector} .gallery-item {
float: {$float};
margin-top: 10px;
text-align: center;
width: {$itemwidth}%;	 }
#{$selector} img {
border: 2px solid #cfcfcf;
}
#{$selector} .gallery-caption {
margin-left: 0;
}
</style>
<!-- see gallery_shortcode() in wp-includes/media.php -->
<div id='$selector' class='gallery galleryid-{$id}'>");

img borders and margins as hard coded by default, why?? there is no chance to change that with overwrites, because the css will render directly before the gallery code appears. the width percentage is the only css part what may need to be set to handle the count of columns correctly by default. but the rest makes absolutely no sense inside of the php core file ...

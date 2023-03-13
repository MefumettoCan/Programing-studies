<?php
$user_name = "eray";
$pass = "123";
$input_user_name = "eray";
$input_pass = "12";
if ($user_name != $input_user_name && $pass != $input_pass) {
echo "AD VE ŞİFRE GEÇERSİZ";
}elseif ($user_name == $input_user_name && $pass != $input_pass) {
echo "ŞİFRE GEÇERSİZ";
}elseif ($user_name != $input_user_name && $pass == $input_pass) {
echo "KULLANICI ADI GEÇERSİZ";
}else {
echo "GİRİS BAŞARILI";
}
?>

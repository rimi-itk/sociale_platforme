core = 7.x
api = 2

projects[drupal][type] = "core"
projects[drupal][version] = "7.40"
projects[drupal][patch][] = https://www.drupal.org/files/issues/allow_install_profiles-2067229-62.patch

; +++++ Profiles +++++

projects[commons][type] = "profile"
projects[commons][version] = "3.11"

projects[sp][type] = "profile"
projects[sp][download][type] = "git"
projects[sp][download][url] = "https://github.com/createinside/sociale_platforme"
projects[sp][branch] = "master"

; +++++ Modules +++++

projects[content_access][version] = "1.2-beta2"
projects[content_access][subdir] = "contrib"

projects[chart][version] = "1.1"
projects[chart][subdir] = "contrib"

projects[commons_bw_ui][version] = "1.0-beta1"
projects[commons_bw_ui][subdir] = "contrib"

projects[field_permissions][version] = "1.0-beta2"
projects[field_permissions][subdir] = "contrib"

projects[multiupload_filefield_widget][version] = "1.13"
projects[multiupload_filefield_widget][subdir] = "contrib"

projects[multiupload_imagefield_widget][version] = "1.3"
projects[multiupload_imagefield_widget][subdir] = "contrib"

projects[colorbox][version] = "2.10"
projects[colorbox][subdir] = "contrib"

projects[config_builder][version] = "1.0"
projects[config_builder][subdir] = "contrib"

projects[form_builder][version] = "1.5"
projects[form_builder][subdir] = "contrib"

projects[libraries][version] = "2.2"
projects[libraries][subdir] = "contrib"

projects[tipsy][version] = "1.0-rc1"
projects[tipsy][subdir] = "contrib"

projects[user_stats][version] = "1.x-dev"
projects[user_stats][subdir] = "contrib"

projects[web_widgets][version] = "1.0-alpha2"
projects[web_widgets][subdir] = "contrib"

projects[fieldable_panels_panes][version] = "1.5"
projects[fieldable_panels_panes][subdir] = "contrib"

projects[omega_tools][version] = "3.0-rc4"
projects[omega_tools][subdir] = "contrib"

projects[jquery_update][version] = "2.4"
projects[jquery_update][subdir] = "contrib"

projects[options_element][version] = "1.12"
projects[options_element][subdir] = "contrib"

projects[ctools][version] = "1.9"
projects[ctools][subdir] = "contrib"

projects[views][version] = "3.11"
projects[views][subdir] = "contrib"

projects[wysiwyg][version] = "2.x-dev"
projects[wysiwyg][subdir] = "contrib"

projects[features_override][version] = "2.0-rc3"
projects[features_override][subdir] = "contrib"
projects[features_override][patch][] = https://www.drupal.org/files/issues/features_override-added-all-missing-functions-2594671.patch

projects[features_translations][version] = "2.0"
projects[features_translations][subdir] = "contrib"

; +++++ Themes +++++

; omega
projects[omega][type] = "theme"
projects[omega][version] = "3.1"
projects[omega][subdir] = "contrib"
projects[omega][patch][] = https://www.drupal.org/files/1828552-omega-hook_views_mini_pager.patch

; +++++ Libraries +++++

; ColorBox
libraries[colorbox][directory_name] = "colorbox"
libraries[colorbox][destination] = "libraries"
libraries[colorbox][type] = "libraries"
libraries[colorbox][download][type] = "git"
libraries[colorbox][download][url] = "https://github.com/jackmoore/colorbox.git"

; CKEditor
libraries[ckeditor][directory_name] = "ckeditor"
libraries[ckeditor][destination] = "libraries"
libraries[ckeditor][type] = "libraries"
libraries[ckeditor][download][type] = "get"
libraries[ckeditor][download][url] = "http://download.cksource.com/CKEditor/CKEditor/CKEditor%204.5.4/ckeditor_4.5.4_full.zip"

; Timeago
libraries[timeago][directory_name] = "timeago"
libraries[timeago][type] = "library"
libraries[timeago][destination] = "libraries"
libraries[timeago][download][type] = "get"
libraries[timeago][download][url] = "http://timeago.yarp.com/jquery.timeago.js"

libraries[timeago_file][directory_name] = "timeago"
libraries[timeago_file][type] = "file"
libraries[timeago_file][destination] = "modules/contrib"
libraries[timeago_file][download][type] = "get"
libraries[timeago_file][download][url] = "http://timeago.yarp.com/jquery.timeago.js"
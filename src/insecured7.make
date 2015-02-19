core = 7.x
api = 2
projects[drupal][version] = "7.31"
defaults[projects][subdir] = "contrib"

;
; themes.make
;

projects[] = bootstrap

;
; modules.make
;

projects[] = admin_menu
projects[] = ctools
projects[] = date
projects[] = features
projects[] = features_extra
projects[] = strongarm

;
; development.make
;

projects[] = devel
projects[] = devel_themer

;
; module-dependencies.make
;

; Dependency for devel_themer
projects[simplehtmldom][version] = "1.12"
; Dependency for bootstrap
projects[] = jquery_update

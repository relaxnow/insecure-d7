core = 7.x
api = 2
projects[drupal][version] = "7.31"
defaults[projects][subdir] = "contrib"

;
; modules.make
;

projects[] = admin_menu
projects[] = views

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

; Dependency for views
projects[] = creditfield
projects[] = ctools

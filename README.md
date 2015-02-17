# InsecureD7
Deliberately insecure Drupal 7 installation (as used at the European Drupal Days 2015).

# Setup

This installation uses 'Code Driven Development', to find out more take a look at [the Nuvole blog](http://nuvole.org/blog/code-driven-development).

```bash
git clone git@github.com:relaxnow/insecured7.git &&
cd insecured7 &&
vagrant up &&
vagrant ssh
```

Now on the VM run ```ant site-install``` and it should install the site for you.

# Vulnerabilities

This installation has been made to be deliberately vulnerable to the following:

* menu without logout
* unauthorised functions and services
* open URLs
* direct objects
* javascript access controls
* CSRF protections
* SS input validation & encoding
* SQL injection
* OS Command injection
* HTML escaping
* Information leakage
* Use URL to submit sensitive data
* request methods
* Click Jacking
* Unsafe redirects
* Path traversal
* No misconfigurations
* Does not use vulnerable libraries

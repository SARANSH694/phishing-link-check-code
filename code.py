import whois

def is_registered(domain_name):
    """
    A function that returns a boolean indicating 
    whether a domain_name is registered
    """
    try:
        w = whois.whois(domain_name)
    except Exception:
        return False
    else:
        return bool(w.domain_name)
    # list of registered & non registered domains to test our function
domains = [
    "thepythoncode.com",
    "google.com",
    "github.com",
    "unknownrandomdomain.com",
    "notregistered.co"
]
# iterate over domains
for domain in domains:
    print(domain, "is registered" if is_registered(domain) else "is not registered")
    if is_registered(domain):
        whois_info = whois.whois(domain)
        # get the creation time
        print("Domain creation date:", whois_info.creation_date)
        # get expiration date
        print("Expiration date:", whois_info.expiration_date)

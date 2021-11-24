# Phishing Link Check-Code

**Code.cpp checks for :**

###1.Long URL to Hide the Suspicious Part
Phishers can use long URL to hide the doubtful part in the address bar.
Rule:
- URL length < 54 → feature = Legitimate
- else if URL length ≥ 54 and ≤ 75 → feature = Suspicious
- otherwise → feature = Phishing

###2. Using URL Shortening Services “TinyURL”
Rule: 
- TinyURL → Phishing
- Otherwise → Legitimate

###3. URL’s having “@” Symbol
Rule:
- Url Having @ Symbol → Phishing
- Otherwise → Legitimate

###4. Redirecting using “//”
Rule:
- ThePosition of the Last Occurrence of "//" in the URL > 7 → Phishing
- Otherwise → Legitimate

###5. Adding Prefix or Suffix Separated by (-) to the Domain
Rule:
- Domain Name Part Includes (−) Symbol → Phishing
- Otherwise → Legitimate

###6. The Existence of “HTTPS” Token in the Domain Part of the URL
Rule :
- Using HTTP Token in Domain Part of The URL → Phishing
- Otherwise → Legitimate



**Code.py checks for :**

###7. Domain Registration Length
Rule:  
- Domains Expires on ≤ 1 years → Phishing
- Otherwise → Legitimate


###8. Abnormal URL
Rule:
- The Host Name Is Not Included In URL → Phishing
- Otherwise → Legitimate


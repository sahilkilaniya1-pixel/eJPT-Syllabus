# 🚀 Cyber Security & eJPT v2 Master Roadmap (20 Months)

Welcome to my 20-month structured roadmap to master Cyber Security and crack the **eLearnSecurity Certified Junior Penetration Tester (eJPT v2)** exam with a 90%+ score. This roadmap aligns with the Cyber Secured Web Development Associate (CSWDA) syllabus.

---

## 📊 Summary Schedule

| Phase | Duration | Primary Focus | Top Tool / Platform | Target Milestone |
| :--- | :--- | :--- | :--- | :--- |
| **Phase 1** | Month 1–4 | Linux CLI, TCP/IP, Wireshark, Networking | Bandit OverTheWire, THM | Linux CLI Master |
| **Phase 2** | Month 5–8 | HTML, CSS, JS, PHP, MySQL Database | W3Schools, Local XAMPP | Build/Understand Web Apps |
| **Phase 3** | Month 9–13 | Recon, Nmap, SMB, Metasploit, Hydra | TryHackMe Jr Pentester | Network Pentester |
| **Phase 4** | Month 14–17 | Burp Suite, SQLi, XSS, File Uploads | PortSwigger Web Academy | Web App Pentester |
| **Phase 5** | Month 18–20 | Pivoting, Routing, INE Labs, Cheatsheets | INE PTS, THM Wreath | **90%+ Marks in eJPT** |

---

## 🗓️ Phase 1: Networking & Linux Core (Months 1–4)
**Focus:** Computer Fundamentals, Operating Systems, Internet & Computer Networks

### Month 1: Computer Systems & Linux Essentials
- [ ] Week 1: PC Components, OS, Booting Process, Windows vs Linux basics. Kali Linux installation.
- [ ] Week 2: Basic Linux Commands (`ls`, `cd`, `pwd`, `mkdir`, `chmod`, `chown`). Text editors (`nano`, `vim`).
- [ ] Week 3: Advanced Linux (`grep`, `find`, `awk`, piping `|`), Process management (`ps`, `top`, `kill`).
- [ ] Week 4: Bash Shell Scripting basics (Loops, Variables, If-else).
- [ ] **Lab Goal:** OverTheWire (Bandit) - Complete Levels 0 to 15.

### Month 2: Computer Networks & TCP/IP Deep Dive
- [ ] Week 5: Network Topologies, OSI Model vs TCP/IP Model. Standard Ports.
- [ ] Week 6: IP Addressing (IPv4 vs IPv6), Subnetting, Classes, CIDR notation.
- [ ] Week 7: Network Protocols (DNS, DHCP, ARP, NAT, VPNs), Gateway Load Balancing.
- [ ] Week 8: Networking CLI Commands (`ping`, `traceroute`, `netstat`, `ifconfig`, `nslookup`, `arp`).
- [ ] **Lab Goal:** TryHackMe (THM) - Complete "Network Fundamentals" module.

### Month 3: Packet Analysis & Infrastructure Basics
- [ ] Week 9: Wireshark Fundamentals (Packet capture, Interfaces, Filtering syntax).
- [ ] Week 10: Routers & Switches (Static/Dynamic Routing, VLANs, VTP, ACLs).
- [ ] Week 11: Network Services setup (FTP, SSH, Web Server, DNS, NFS).
- [ ] Week 12: Wireshark Deep Dive (Unencrypted protocols capture).
- [ ] **Lab Goal:** Analyze sample Wireshark PCAP files.

### Month 4: Phase 1 Revision
- [ ] Week 13-14: Full Revision of Linux & Networking CLI tools.
- [ ] Week 15-16: Complete THM Networking and Linux rooms (e.g., Linux Fundamentals 1-3).

---

## 🌐 Phase 2: Web Architecture, PHP & Databases (Months 5–8)
**Focus:** Front-End, Back-End & Database Concepts

### Month 5: Web Front-End & Protocol Architecture
- [ ] Week 17: Client-Server Architecture, Web Servers, HTML5 tags, Forms.
- [ ] Week 18: CSS basics, JavaScript Fundamentals & DOM manipulation.
- [ ] Week 19: HTTP Protocol (GET, POST, PUT, DELETE), Headers, Status Codes.
- [ ] Week 20: Cookies, Sessions, Local Storage, JWT basics.

### Month 6: Databases & SQL Mastery
- [ ] Week 21: RDBMS basics, MySQL Workbench setup.
- [ ] Week 22: SQL Queries (`SELECT`, `WHERE`, `INSERT`, `UPDATE`, `DELETE`).
- [ ] Week 23: Advanced SQL (`UNION`, `JOINs`, Subqueries, Aggregate Functions).
- [ ] Week 24: Database User privileges, Database backup/export.
- [ ] **Lab Goal:** Complete W3Schools SQL Quiz & Practice labs.

### Month 7: Server-Side Backend (PHP)
- [ ] Week 25: PHP syntax, Variables, Arrays.
- [ ] Week 26: PHP Form handling (`$_GET`, `$_POST`), File uploading.
- [ ] Week 27: PHP Database Connectivity (`mysqli`, `PDO`).
- [ ] Week 28: Build a basic PHP Login Form on XAMPP.

### Month 8: Web Security Fundamentals
- [ ] Week 29-30: Secure Coding Practices, Input Sanitization, SQL Prepared Statements.
- [ ] Week 31-32: Full Revision of Front-end, PHP, MySQL.

---

## 🎯 Phase 3: Ethical Hacking & Scanning Mastery (Months 9–13)
**Focus:** Reconnaissance, Enumeration, System Hacking & Counter Measures

### Month 9: Reconnaissance & Information Gathering
- [ ] Week 33: Intro to Cyber Security & Ethical Hacking methodologies.
- [ ] Week 34: Passive Footprinting (OSINT, Whois, Google Dorking, Shodan).
- [ ] Week 35: Active Reconnaissance (DNS Footprinting, Subdomain enumeration).
- [ ] Week 36: Email Footprinting, Social Engineering concepts.
- [ ] **Lab Goal:** THM - "Passive & Active Reconnaissance" rooms.

### Month 10: Network Scanning & Enumeration
- [ ] Week 37: Nmap Basics (Host discovery, Port scanning `-sS`, `-sT`, `-sU`).
- [ ] Week 38: Nmap Advanced (`-sV`, `-O`, NSE scripts `-sC`).
- [ ] Week 39: Enumeration Techniques (SMB `enum4linux`, SNMP).
- [ ] Week 40: Web Server Scanning (Nikto, Gobuster, Dirbuster).

### Month 11: Vulnerability Analysis & Exploitation
- [ ] Week 41: Vulnerability Assessment concepts, CVE, Exploit-DB.
- [ ] Week 42: Vulnerability Scanners (Nessus Installation & Scanning).
- [ ] Week 43: Metasploit Framework (`msfconsole`, Exploits, Payloads).
- [ ] Week 44: Meterpreter Shells (Interactive sessions, File management).
- [ ] **Lab Goal:** Exploit Metasploitable 2 on VirtualBox.

### Month 12: Password Attacks & System Hacking
- [ ] Week 45: Password Cracking Concepts.
- [ ] Week 46: Online Brute-Forcing (Hydra - FTP, SSH, HTTP-POST).
- [ ] Week 47: Offline Cracking (John the Ripper, Hashcat).
- [ ] Week 48: Basic Privilege Escalation concepts (Windows & Linux).

### Month 13: Phase 3 Consolidation
- [ ] Week 49-52: Complete THM "Pre-Security" Path and sections of "Jr Penetration Tester".

---

## 🛡️ Phase 4: Web Application Penetration Testing (Months 14–17)
**Focus:** Web App Pentest, OWASP Top 10, APIs

### Month 14: Web Proxy & OWASP Top 10 (Part 1)
- [ ] Week 53: Burp Suite Setup (Browser config, Intercepting).
- [ ] Week 54: Burp Suite Tools (Repeater, Intruder).
- [ ] Week 55: Broken Access Control, Authentication Flaws.
- [ ] Week 56: Directory Traversal, Local/Remote File Inclusion (LFI/RFI).
- [ ] **Lab Goal:** PortSwigger Web Security Academy Labs.

### Month 15: SQL Injection (SQLi) Deep Dive
- [ ] Week 57: SQLi Mechanics (In-band, Union-Based, Error-Based).
- [ ] Week 58: Manual SQLi Exploitation.
- [ ] Week 59: Automated SQLi (`sqlmap` tool mastery).
- [ ] Week 60: Blind SQL Injection basics (Boolean/Time-based).

### Month 16: Cross-Site Scripting (XSS) & APIs
- [ ] Week 61: XSS Fundamentals (Reflected payloads).
- [ ] Week 62: Stored XSS & DOM-based XSS concepts.
- [ ] Week 63: API Testing Basics (Postman & Burp Suite).
- [ ] Week 64: File Upload Vulnerabilities.

### Month 17: Complete Web App Pentest Workflow
- [ ] Week 65-68: Complete Web App Pentesting Methodology practice.
- [ ] **Lab Goal:** THM - Complete "Web Fundamentals" Path.

---

## 🏆 Phase 5: eJPT Exam Prep & Pivoting (Months 18–20)
**Focus:** Routing, Mock Exams, Report Writing & Final Attempt

### Month 18: Network Pivoting & Routing
- [ ] Week 69: Internal Network Concepts (Multiple Subnets).
- [ ] Week 70: Metasploit Pivoting (`autoroute`, `portfwd`).
- [ ] Week 71: Proxychains & SOCKS Proxy.
- [ ] Week 72: Scanning hidden internal networks using Nmap via Proxychains.
- [ ] **Lab Goal:** THM - "Wreath" or "Network Pivoting" Labs.

### Month 19: Official INE Material & Cheatsheets
- [ ] Week 73: Review INE Penetration Testing Student (PTS) material.
- [ ] Week 74: Finalize Personal Cheatsheets (Nmap, Gobuster, Hydra, Metasploit).
- [ ] Week 75: Hack The Box (HTB) - "Starting Point" Tier 0 & Tier 1.
- [ ] Week 76: THM Easy Machines (Blue, Ice, Blasta, Basic Pentesting).

### Month 20: Mock Exams & Exam Crack
- [ ] Week 77: THM - "Jr Penetration Tester" Capstone Network.
- [ ] Week 78: Final Revision of Commands and Payloads.
- [ ] Week 79: Exam Environment Setup (Kali Linux Backup, Stable Internet).
- [ ] Week 80: **Take the eJPT Exam!**

---

## 🛠️ Mandatory Tools Master List
- **OS:** Kali Linux / Parrot OS
- **Scanners:** Nmap, Nikto, Masscan
- **Web Enumeration:** Gobuster, Feroxbuster, Burp Suite
- **Exploitation:** Metasploit Framework, Searchsploit
- **Brute Force:** Hydra, John the Ripper
- **Packet Analysis:** Wireshark

> **Note to Self:** "Enumeration is key. If an exploit fails, enumerate more!"

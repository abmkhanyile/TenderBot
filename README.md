# TenderBot

This software automates the process of sourcing leads and tenders online by employing the use of webcrawlers. The application is designed in Client-Server architecture while this part of the software is the client side. The server part will be uploaded soon. The application relies mostly on the effeciency of the Python BeautifulSoup library hence the bots are developed using Python instead of C++ and Qt. The server side of the appication is responsible for driving the bots at certain times of the day e.g. at 08:00am the server awakens a bot that is responsble for crawling www.capetown.gov.za. The server does this by creating a QProcess object that will drive the bot. All the bots are programmed the dump their sourced data in a share network folder where this data can be easly accessed by end-users.

More spces to follow.

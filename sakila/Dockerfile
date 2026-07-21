# 1. Define the foundation layer
FROM fedora:40

# 2. Install the system packages and clean up cache to save space
RUN dnf install -y community-mysql-server && \
    dnf clean all

# 3. Create the data directory and set correct permissions
RUN mkdir -p /var/lib/mysql /var/run/mysqld && \
    chown -R mysql:mysql /var/lib/mysql /var/run/mysqld

# 4. Define the working directory context
WORKDIR /var/lib/mysql

# 5. Open the MySQL network boundary port
EXPOSE 3306

# 6. Switch execution context to a non-root user for security
USER mysql

# 7. Set the default startup execution behavior
CMD ["mysqld", "--user=mysql", "--console"]

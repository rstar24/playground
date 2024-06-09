# Use the official Ubuntu image as the base image
FROM ubuntu:latest

# Update the package lists and install MongoDB
RUN apt-get update && apt-get install -y mongodb

# Expose port 27017 for MongoDB
EXPOSE 27017

# Start MongoDB service
CMD mongod --bind_ip_all

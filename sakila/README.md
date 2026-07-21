# Objective 
This is a simple docker file for practising sql queries on a containerized instance of fedoar  

I will be collecting the good questions and practising other sql queries here for my own interview preparation 


First login to the docker hub 
```bash
docker login dhi.io
```

Second pull the mysql latest image 

```bash
docker pull dhi.io/mysql:9-debian-dev
```


Third to start the image in a container
```bash

docker run --name mysql-practise \
  -v ~/projects/playground/sakila:/container_scripts:z \
  -e MYSQL_ROOT_PASSWORD=1574 \
  -p 3306:3306 \
  -d dhi.io/mysql:9-debian-dev

```

stop it and then start it in an interactive mode 
```bash
docker exec -it mysql-practise bash
```
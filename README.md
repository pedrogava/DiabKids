<h1 align="center"> DiabKids! </h1>

<p align="center">
<img src="https://img.shields.io/badge/STATUS-em%20Desenvolvimento-green"/>
</p>
<p align="center">
<img src="https://github.com/pedrogava/SustainTech/assets/126473513/78497bf7-146a-4b8c-b9bd-cecf54d3d1a9"/>
</p>


# Introduction

## General Description of the Problem
+ The current challenge is to ensure a healthy life and promote well-being for all ages, especially in the context of diabetic children. The need for awareness and maturation of these children regarding their condition is crucial to ensure effective management of diabetes from childhood.

## Solution Proposal
+ ### DiabKids: Awareness and Maturation
The proposed solution, called DiabKids, aims to develop a comprehensive platform that addresses awareness and maturation of diabetic children regarding their condition. The solution will consist of:
### Interactive Website:
An interactive website aimed at children, offering information about diabetes in a fun and educational way.
Pointing system to encourage participation and continuous learning.
### Points System:
Implementation of a points system, where children accumulate points through active participation on the website, solving diabetes-related challenges and completing educational tasks.
Points can be exchanged for rewards, encouraging healthy behavior and adherence to treatment.
### Monitoring via IoT:
Using IoT (Internet of Things) devices to constantly monitor children's glucose levels.
Data is shared in real time with parents and the responsible doctor, allowing for more accurate and immediate monitoring of health status.



# 📁 Essential resources

## FIWARE

+ ## Software Requirements

Docker and Docker-Compose

Click <a href=https://docs.docker.com/engine/install/ubuntu/> here </a> to see instructions for installing Docker and Docker-Compose on Ubuntu Server LTS.

+ ## Installation and Startup

git clone https://github.com/fabiocabrini/fiware

cd fiware

docker compose up -d

+ ## Turn off

docker compose down

**Note:** FIWARE Uncomplicated uses volumes, so your data will not be lost when you turn it off!

**Volume:** /var/lib/docker/volumes/fiware_db-data/_data

+ ## Hardware Requirements 

Processing Cores - **1vCPU**

RAM memory - **1GB** 

Minimum Secondary Storage - **20GB HD and/or SSD** (Depends on application requirements).

+ ## Freeing Ports on the Firewall

1026/TCP  - **API Orion Context Broker**

1883/TCP  - **Eclipse-Mosquito MQTT** 

4041/TCP  - **API IoT-Agent MQTT**

8666/TCP  - **API STH-Comet**

27017/TCP - **MongoDB**

+ ## Collection do Postman (Material for experimentation)

Here you will find a set of collections designed to be imported by the Postman tool. These collections will help you interact with the Orion Context Broker, IoT Agent MQTT and STH-Comet components, present in the FIWARE Descomplicado architecture.

Click <a href="https://github.com/pedrogava/EDGE_COMPUTING/blob/main/FIWARE.postman_collection.json"> here </a> to access the Postman collection.


# Iot Device

## Prototype:

### Hardware Requirements:

- ESP32
- LCD I2C
- CGM
- 3 LEDs (green, yellow and red)
- WIFI conection
- Click <a href="https://github.com/pedrogava/EDGE_COMPUTING/blob/main/FIWARE.postman_collection.json"> here </a> to see the simulation of a prototype on the wokwi

<h4 align="center"> 
    🚧 Prototype under construction 🚧
</h4>

# Links

-  Wokwi: https://wokwi.com/projects/381957492268331009

- Video explicativo no youtube: https://youtu.be/-N5gnUgwk3A


# Authors: 

Rm 551445 - Pedro Oliveira Valotto

Rm 551043 - Pedro Gava

<h4 align="center"> 
    🚧 Project under construction 🚧
</h4>
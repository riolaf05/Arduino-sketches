#lambda to turn off ec2 instance
import boto3
import json
import os
import logging

logging.basicConfig(level=logging.INFO)
ec2 = boto3.client('ec2', region_name=os.environ['LAMBDA_AWS_REGION'])
iot = boto3.client('iot-data', region_name='us-east-1')
instances = [os.environ['EC2_INSTANCE_ID']]

def lambda_handler(event, context):
    
    # Start lambda
    ec2.start_instances(InstanceIds=instances)
    logging.info('stopped your instances: ' + str(instances))
    
    # Publish on MQTT topic
    response = iot.publish(
        topic='esp8266/ec2_status',
        qos=1,
        payload=json.dumps({"enabled":"true"})
    )
    print(response)
    
    return {
        'statusCode': 200,
        'body': json.dumps('EC2 instance started!')
    }

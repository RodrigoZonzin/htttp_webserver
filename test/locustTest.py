from locust import HttpUser, task, between
 
class SimpleLocustTest(HttpUser):
   wait_time = between(1, 3)
 
   @task
   def get_name(self):
       self.client.get("/home.html")
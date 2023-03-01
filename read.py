import time

start_time = time.time()
if "123.194.235.37" in open("./lists.csv").read():
    # do something
    pass
    
end_time = time.time()

print(f"[python] File check finished in {(end_time - start_time)*1000}ms")

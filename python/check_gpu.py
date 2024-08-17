import tensorflow as tf 

def check_gpu_status():
    gpus = tf.config.list_physical_devices('GPU')
    if not gpus:
        print("No GPU found.")
    else:
        for gpu in gpus:
            print(f"GPU Name: {gpu.name}")
            print("----")

# check_gpu_status()
print(tf.__version__)
print("Is TensorFlow built with CUDA: ", tf.test.is_built_with_cuda())
print("Are GPUs available: ", tf.config.list_physical_devices('GPU'))
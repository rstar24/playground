import tensorflow as tf

# Check if TensorFlow can run a simple operation on the GPU
def test_gpu_computation():
    if tf.config.list_physical_devices('GPU'):
        with tf.device('/GPU:0'):
            # Perform a simple computation
            a = tf.constant([[1.0, 2.0, 3.0], [4.0, 5.0, 6.0]])
            b = tf.constant([[1.0, 2.0, 3.0], [4.0, 5.0, 6.0]])
            c = tf.matmul(a, b, transpose_a=True)
            print(c)
    else:
        print("No GPU available for computation.")

test_gpu_computation()

# CUDA Learning Plan: Programming Massively Parallel Processors (4th Ed.)

**Plan Start Date:** August 6, 2025
**Weekly Time Commitment:** 3 hours (1-1.5 hrs reading + 1.5-2 hrs hands-on)
**Resource:** *Programming Massively Parallel Processors: A Hands-on Approach* (4th Edition)

This plan is designed to build a strong foundational understanding of CUDA programming, with a primary focus on hands-on application. By following this schedule, you will systematically cover key concepts while actively applying them through code.

---

### Week 1: Introduction to Parallel Computing

**Date Range:** Aug 6 - Aug 12

**Weekly Goal:** Set up the development environment and understand the core motivations for parallel computing on GPUs.

**Learning Objectives:**
- Understand the basic concepts of parallel vs. serial computing.
- Learn about the key differences between CPUs and GPUs from a performance perspective.
- Successfully install the NVIDIA CUDA Toolkit, drivers, and necessary tools.

**Hands-on Activities:**
- Install the latest CUDA Toolkit for your operating system.
- Ensure your GPU is supported and configured correctly.
- Compile and run your first "Hello, World!" CUDA program to verify the setup.

**Success Criteria:**
- The CUDA `nvcc` compiler is installed and working.
- A simple CUDA program compiles and executes without errors, displaying output from both the host (CPU) and device (GPU).

**Tips and Notes:**
- Don't rush through the setup. A correct environment is crucial for the entire plan.
- The initial "Hello, World!" program is just a sanity check; you'll get into more complex code soon.

---

### Week 2: First Look at CUDA

**Date Range:** Aug 13 - Aug 19

**Weekly Goal:** Grasp the fundamental CUDA programming model and the relationship between host and device.

**Learning Objectives:**
- Understand the host (CPU) and device (GPU) distinction.
- Learn the syntax and purpose of a CUDA kernel.
- Comprehend the concepts of threads, blocks, and grids.

**Hands-on Activities:**
- Take your "Hello, World!" program and modify it to launch a kernel.
- Experiment with different kernel launch configurations using `<<<...>>>` syntax.
- Try launching a kernel that performs a trivial operation on a small array to see the threads in action.

**Success Criteria:**
- You can write a basic kernel and launch it from the host.
- You can vary the number of blocks and threads and observe how the output changes.

---

### Week 3: The CUDA Memory Model

**Date Range:** Aug 20 - Aug 26

**Weekly Goal:** Implement a foundational parallel algorithm and learn how to manage data between the CPU and GPU.

**Learning Objectives:**
- Understand the primary CUDA memory types: global, shared, and local memory.
- Learn the functions for allocating and transferring memory (`cudaMalloc`, `cudaMemcpy`, `cudaFree`).
- Write a complete, functional CUDA program from scratch.

**Hands-on Activities:**
- Implement a vector addition program.
- Allocate memory on both the host and device.
- Transfer input data from the host to the device, launch the kernel, and transfer the results back.

**Success Criteria:**
- Your vector addition program correctly computes the sum and verifies the result on the CPU.
- You can clearly explain the purpose of each CUDA memory management function used.

---

### Week 4: Review and Consolidation

**Date Range:** Aug 27 - Sep 2

**Weekly Goal:** Reinforce the core concepts of CUDA programming and solidify your understanding of the first three weeks.

**Learning Objectives:**
- Debugging and problem-solving skills for basic CUDA programs.
- Deeper understanding of the kernel launch process and memory transfers.

**Hands-on Activities:**
- Rerun all your previous programs and exercises.
- Create a simple document or set of comments in your code explaining what each part does.
- Intentionally introduce a bug (e.g., a memory leak or a race condition) and practice finding and fixing it.

**Success Criteria:**
- You can troubleshoot a simple CUDA program without external help.
- You have a clear mental model of how the host and device interact.

---

### Week 5: CUDA Memory and Optimization

**Date Range:** Sep 3 - Sep 9

**Weekly Goal:** Begin to think about performance by understanding different memory types and their usage.

**Learning Objectives:**
- Differentiate between global, shared, and constant memory and their access characteristics.
- Learn how to use shared memory to reduce global memory access and improve performance.

**Hands-on Activities:**
- Modify your vector addition program to use a small amount of shared memory for a toy problem.
- Time the execution of both the original and modified versions.
- Observe and analyze the performance difference.

**Success Criteria:**
- You can write a kernel that correctly uses shared memory.
- You can articulate the performance benefits and limitations of using shared memory.

---

### Week 6: Parallel Reduction

**Date Range:** Sep 10 - Sep 16

**Weekly Goal:** Implement a classic parallel algorithm and understand its nuances.

**Learning Objectives:**
- Understand the parallel reduction algorithm and its importance in parallel computing.
- Learn about the "tree-based" reduction approach to avoid race conditions and improve performance.

**Hands-on Activities:**
- Implement a kernel to perform a parallel reduction (e.g., summing all elements in an array).
- Start with a naive implementation and then try to apply the optimization techniques discussed in the book.
- Use atomic operations to handle race conditions if necessary.

**Success Criteria:**
- Your parallel reduction kernel correctly computes the final sum.
- You can explain why a simple parallel reduction without careful synchronization or atomics would fail.

---

### Week 7: Parallel Prefix-Sum (Scan)

**Date Range:** Sep 17 - Sep 23

**Weekly Goal:** Tackle another fundamental parallel algorithm: prefix-sum (scan).

**Learning Objectives:**
- Understand the concept and applications of a parallel prefix-sum.
- Learn the "hill-climb" or "up-sweep/down-sweep" parallel scan algorithm.

**Hands-on Activities:**
- Implement a simple prefix-sum kernel based on the book's description.
- Test your implementation with a few different input arrays.

**Success Criteria:**
- The kernel correctly computes the prefix-sum for a small input array.
- You can explain the high-level steps of the parallel scan algorithm.

---

### Week 8: Review and Consolidation

**Date Range:** Sep 24 - Sep 30

**Weekly Goal:** Revisit and reinforce your understanding of memory optimization and parallel algorithm patterns.

**Learning Objectives:**
- Solidify your knowledge of when to use different memory types.
- Understand the performance benefits of shared memory and how to apply it.
- Reinforce your understanding of parallel reduction and scan.

**Hands-on Activities:**
- Review your parallel reduction and prefix-sum kernels.
- Profile their performance and try to find ways to further optimize them.
- Create a quick write-up of the key takeaways from this section of the book.

---

### Week 9: Parallel Sorting

**Date Range:** Oct 1 - Oct 7

**Weekly Goal:** Explore the challenges and solutions for parallel sorting.

**Learning Objectives:**
- Understand the complexity of parallel sorting algorithms on GPUs.
- Learn about common parallel sorting techniques like bitonic sort or merge sort.

**Hands-on Activities:**
- Implement a small-scale parallel sorting algorithm on the GPU.
- Focus on correctly parallelizing the merge or comparison steps of the algorithm.

**Success Criteria:**
- The kernel correctly sorts a small array of numbers.
- You can describe why a simple bubble sort is not efficient for parallel execution on a GPU.

---

### Week 10: Performance Analysis

**Date Range:** Oct 8 - Oct 14

**Weekly Goal:** Learn to use professional tools to profile and analyze your CUDA code.

**Learning Objectives:**
- Understand the role of profiling in GPU computing.
- Learn how to use NVIDIA's profiling tools (e.g., NVIDIA Nsight) to analyze your kernels.

**Hands-on Activities:**
- Install and configure a profiling tool like NVIDIA Nsight.
- Profile one of your previous kernels (e.g., vector addition or reduction).
- Identify performance bottlenecks such as memory bandwidth limitations or poor kernel utilization.

**Success Criteria:**
- You can successfully profile a kernel and interpret the output to identify at least one performance bottleneck.

---

### Week 11: Multithreaded Processing & Streams

**Date Range:** Oct 15 - Oct 21

**Weekly Goal:** Understand asynchronous execution to overlap computation and data transfer.

**Learning Objectives:**
- Learn about the role of CUDA streams in managing concurrent tasks.
- Understand how `pinned` memory enables asynchronous data transfers.

**Hands-on Activities:**
- Modify a previous program to use CUDA streams.
- Measure the performance to see if you achieved a significant speedup by overlapping memory transfers with kernel execution.

**Success Criteria:**
- Your program correctly uses CUDA streams.
- You can explain how streams can improve overall application throughput.

---

### Week 12: Review and Consolidation

**Date Range:** Oct 22 - Oct 28

**Weekly Goal:** Reflect on advanced topics and synthesize your knowledge of performance optimization.

**Learning Objectives:**
- Connect the concepts of profiling, memory access patterns, and asynchronous execution.
- Think about how these optimizations would apply to real-world robotics or AI problems.

**Hands-on Activities:**
- Revisit your profiling results from Week 10.
- Try to apply one of the optimization techniques you learned to address the identified bottleneck.
- Write a short summary of the most impactful performance optimizations you've learned.

---

### Week 13: High-Level Libraries

**Date Range:** Oct 29 - Nov 4

**Weekly Goal:** Get acquainted with the CUDA ecosystem of high-level libraries.

**Learning Objectives:**
- Understand why high-level libraries (cuBLAS, cuDNN, Thrust) are useful.
- Learn how to use one of these libraries for a common task.

**Hands-on Activities:**
- Choose one library (e.g., cuBLAS) and write a small program to perform a common operation like matrix multiplication using its API.
- Compare the code required for this vs. a custom kernel you would write yourself.

**Success Criteria:**
- You can successfully use a high-level CUDA library to perform a basic operation.
- You can explain the trade-offs between using a library and writing a custom kernel.

---

### Week 14: Final Project/Case Study

**Date Range:** Nov 5 - Nov 11

**Weekly Goal:** Apply all your knowledge to a comprehensive project or case study.

**Learning Objectives:**
- Synthesize all concepts from the book into a single application.
- Practice designing a CUDA-accelerated solution for a complex problem.

**Hands-on Activities:**
- Follow a case study from the book (e.g., image processing, fluid simulation).
- Alternatively, design and implement a small CUDA-accelerated program related to your robotics interests.

**Success Criteria:**
- You have a working, non-trivial CUDA program.
- You can explain the design choices you made regarding memory, kernels, and optimization.

---

### Week 15: Final Review & Next Steps

**Date Range:** Nov 12 - Nov 18

**Weekly Goal:** Consolidate everything you've learned and plan for the future.

**Learning Objectives:**
- Solidify your mastery of CUDA fundamentals.
- Understand how to continue learning and applying CUDA in your career.

**Hands-on Activities:**
- Rerun and optimize your final project.
- Write a blog post (aligned with your personal branding) summarizing your journey and key takeaways.
- Brainstorm your next CUDA project, perhaps one that integrates with Rust or your RISC-V learning.

**Success Criteria:**
- You feel confident in your ability to write, optimize, and debug CUDA code.
- You have a clear vision for how to apply this new skill in your robotics and AI projects.

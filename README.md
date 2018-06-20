#### **概述**
***

　　在算法列表中出现的算法，存储数据时基本都采用了数组结构，但是需要明白的是，算法思想是一个算法的灵魂，与你采用什么样的数据结构是无关的，当然话不能说这么绝对，在一些情况下，确实算法依赖于一些特定的数据结构，在具体算法实现过程中，我会特别强调这一点，最简单的例子就是归并排序，在下面的算法列表中，我分别用数组和链表存储数据，但是归并排序算法的思想精髓并没有因为存储数据的数据结构发生变化而变化。**需要强调的一点是，虽然采用什么样的数据结构，算法思想不会改变，但是对于不同的数据结构，实现其算法的难度不一样，此时还是需要你进行仔细的选择**。在具体的实现中一定要区分清楚什么是算法思想以及数据怎么来存储。数据结构和算法是程序的根本，学习算法并且用某种语言(算法不依赖于特定的语言)实现(能不能实现看你的编程能力，与算法本身无关，尤其需要注意的是算法与你采用什么语言实现无关)。**所有算法的实现都非常注重时间复杂度的最优化，同时也关注了空间复杂度，因为浪费空间的算法，其执行时间会增大**，**因此，我们得出结论：解决问题方法的效率，跟数据的组织方式有关**。基本内容概括如下：
  * **基本算法，如排序算法等（Basic Algorithms）**
  * **树（Tree）**
  * **动态规划（Dynamic Programming）**
  * **递归（Recursive Programming）**
  * **贪心策略（Greedy Programming）**
  * **图算法（Graph Algorithms）**
  * **数据结构（Data Structure）**
  
#### **算法列表**
***

* linearSearchRecursion(int[] arr,int search,int target); 线性查找的递归算法
* linearSearch(int[] arr,int target); 线性查找的非递归算法
* findMaxValue(int[] arr); 寻找一个数组中的全局最大值
* findLocalPeakOneVersion(int[] arr, int start, int end);  寻找数组中的局部最大值点，适合于一维数组
* findLocalPeakTwoVersion(int[] arr, int start, int end);  寻找数组中的局部最大值点，适合于二维数组
* insertSort(int[] arr);  完成插入排序过程
* insertSortRecurtion(int[] arr,int length); 插入排序递归算法
* binarySearch(int[] arr, int start, int end,int target);  完成二分搜索过程，使用了插入排序算法对原数组进行排序
* sumBinarySystemNumber(int[] addNumber1,int[] addNumber2);   实现两个n位二进制数加法操作
* selectionSort(int[] arr);  完成选择排序过程
* bubbleSort(int[] arr); 完成冒泡排序
* twoSum(int[] nums, int target);   LeetCode第一题，寻找一个数组中是否有两个数的和与指定的target数相同，AC
* addTwoNumbers(ListNode l1, ListNode l2);  LeetCode第二题，加两个数，AC
* merge(int[] num1,int[] num2); 合并两个已经排序好的数组
* findMedianSortedArrays(int[] nums1, int[] nums2);  LeetCode第四题，寻找两个已经排序好的数组的中位数，AC
* mergeSort(int[] arr , int start ,int end);  完成归并排序，在归并排序中使用了插入排序，利用了当数据规模很小时，插入排序优于归并排序，如何选择插入排序的最优元素个数是关键
* twoSum(int[] nums, int target); LeetCode第一题，AC
* reverse(int x);  反转整数，LeetCode第七题，AC
* mergeTwoLists(ListNode l1, ListNode l2); 合并两个已经排序好的List，时间复杂度O(m+n)，LeetCode第22题，AC
* threeSum(int[] nums); LeetCode第15题，三个数的和，AC
* addRecursion(int[] nums, int length); 求任意多个数字和的递归算法
* hanoi(int n ,String A, String B, String C ); 汉诺塔问题的递归解法，只能使用递归解法
* trivialFindMaximumSubarray(int[] arr);   平凡的方法实现最大子数组问题，其时间复杂度为O(n^2)
* findMaximumSubarray(int[] arr,int start, int end);  寻找最大子数组问题，采用递归解法，时间复杂度为O(nlogn)，比平凡方法的时间复杂度低
* trivialSquareMatrixMultiply(int[][] nums1, int[][] nums2) 平凡方法实现矩阵乘法，时间复杂度为O(n^3)
* trivialSquareMatrixMultiplyRecursion(int[][] nums1, int[][] nums2 , int nums1RowStart, int nums1RowEnd,
			int nums1ColumnStart , int nums1ColumnEnd , int nums2RowStart , int nums2RowEnd , int nums2ColumnStart , int nums2ColumnEnd)  矩阵分块乘法，只使用与偶数维的情况，局限性很大
* searchMatrix(int[][] matrix, int target);  检索矩阵，时间复杂度为O(nlogn)，LeetCode第74题，平凡方法为O(n^2)，AC
* removeElement(int[] nums, int val);  LeetCode第27题，该算法的时间复杂度为O(n)，AC
* sortList(ListNode head);  对链表使用归并排序，时间复杂度为O(nlogn)
* countPrimes(int n);  统计小于指定数n的所有素数的个数，LeetCode第204题，AC
* listFileRecursive(File[] files,int start , int end); 采用分治递归策略，遍历整个计算机中所有的盘符，并输出其文件名，当然还可以做更复杂的操作
* ZOJ1001Solution(); OJ1000题目解答，AC
* HDU1002Solution(); HDU1002题目解答，AC
* HDU1003Solution(); HDU1003题目解答，AC
* HDU1004Solution(); HDU1004题目解答，AC
* HDU1005Solution(); HDU1005题目解答，实现了普通递归算法，并将普通递归算法修改为尾递归算法，AC
* HDOJ1000();  AC
* HDOJ1001();  AC
* partitionHoare(int arr[], int start, int end); It is used in the quicksort algorithm 
* quicksort(int arr[], int start, int end); the quicksort algorithm, which implements Hoare partition and Lomuto partition
* heapsort(int arr[], int length); the heapsort algorithm
* priorityqueue(int arr[],int length); priority queue is implenented by using maximum heap'
* countingsort(int arr[], int length); counting sort. The time complexity of is linear time. It is not based on the comparsion.
* enhancingMethod(int arr[],int length);  find the maximum and minmum for enhancing method.The number of comparision decreases.
* sortASCII();   sort ASCII by using insertion sort.
* distance();   Computing the distance from node a(x1,y1) to b(x2,y2).
* volumn();   Computing the volumn of ball
* HDU2001(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2002(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2003(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2004(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2005(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2006(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2007(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2008(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2009(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2010(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2011(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2012(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2013(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2014(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2015(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2016(); Practise the C++ language properties in HDUOJ page 11.  AC
* HDU2017();  Practise the C++ language properties in HDUOJ page 11.  AC
* HDU1006(); tick and tick for the clock are roating every second and metting each other many times everyday.
* HDU1066();   Computing the factorical's last non-zero number. AC
* split1(string s); 
* split2(string s); 
* split3(string s); 
* split4(string s);    It is the metods to split a string in C++ languages. And it is hard to split in C++ comparing to the Java and Python.
* topologicalSort();   The implement of topological sort.
* findMaxAndMinValuesRecursive(arr,start,end);  The recursive implements for the find Max and Min values
* gcd1(int numberA, int numberB); 
* gcd2(int numberA,int numberB); 
* gcd3(int numberA, int numberB); 
* gcd4(int numberA, int numberB); 
* gcd5(int numberA, int numberB);  The implements of greater common division. 
* maxSubSeqSum(int arr[], int length);  It is the most efficient method for the max sub sequence problem.
* aAddB();   a + b which a is less than 100 and b is less than 100.

#### **参考资料**

1. Introduction to Algorithms 《算法导论》
2. TAOCP 《计算机程序设计艺术》
3. HDUOJ <a href="http://acm.hdu.edu.cn/">杭州电子科技大学OJ</a> 

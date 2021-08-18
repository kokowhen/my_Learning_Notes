# 桶排序
- 桶排序的步骤
    - 1.定义数组：数组元素的个数决定排序数字的范围，数组元素表示数字出现的次数
    - 2.初始化数组（令数组里的每一个元素初始值都为0）
    - 3.读入数据并进行计数
    - 4.依次判断每个桶内的数据并打印
- 桶排序的特点
    - 快
    - 浪费存储空间
    - 只能排序都是整数或者小数，混合的不行
- 桶排序的时间复杂度
    - 
# 冒泡排序
- 冒泡排序的基本思想
    - 每次比较两个相邻的元素，如果它们的顺序不满足要求就交换顺序
- 冒泡排序的步骤
    - 1.外循环控制排序的趟数
    
    - 2.内循环控制每趟循环比较的次数
      
        - 循环体主要内容
        
        ```c++
        if(a[j]>a[j+1])
        {
            tem = a[j+1];
            a[j] = a[j+1];
            a[j+1] = tem;
        }
        ```
- 冒泡排序的特点
    - 效率不高
- 冒泡排序的时间复杂度
    - 
# 快速排序
- 快速排序的步骤
    - 确定基准数
    - j：从右往左找小于基准数的数
    - i：从左往右找大于基准数的数
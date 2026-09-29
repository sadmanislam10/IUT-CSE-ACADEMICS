// // #include <stdio.h>
// // int main()
// // {
// //     int n;
// //     scanf("%d", &n);

// //     int arr[n];

// //     for (int i = 0; i < n; i++)
// //     {
// //         scanf("%d", &arr[i]);
// //     }

// //     for (int i = 0; i < n - 1; i++)
// //     {
// //         for (int j = i + 1; j < n; j++)
// //         {
// //             if (arr[j] > arr[i])
// //             {
// //                 int temp;
// //                 temp = arr[i];
// //                 arr[i] = arr[j];
// //                 arr[j] = temp;
// //             }
// //         }
// //     }

// //     // for (int i = 0; i < n; i++)
// //     // {
// //     //     printf("%d ", arr[i]);
// //     // }

// //     int sum1 = 0, sum2 = 0;

// //     for (int i = 0; i < n; i = i + 2)
// //     {
// //         sum1 += arr[i];
// //     }

// //     for (int i = 1; i < n; i = i + 2)
// //     {
// //         sum2 += arr[i];
// //     }

// //     printf("%d %d", sum1, sum2);

// //     return 0;
// // }

// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     int arr[n];
//     int sereja[(n/2)+1];
//     int dima[(n/2)+1];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

//     for (int i = 0; i < (n/2)+1; i++)
//     {
//         sereja[i] = 0;
//         dima[i] = 0;
//     }
    

//     int left = arr[0], right = arr[n - 1];

//     int x = n / 2;

//     for (int i = 0; i < x+1; i++)
//     {
//         if (left>right)
//         {
//             sereja[i] += 
//         }
        
//     }
    

//     return 0;
// }


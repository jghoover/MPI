/* CRCW, n processors, n elements
 * function quicksort(A[]):
 *  for i = 0 to n-1 pardo:
 *    for j = 1 to n do: {T=O(n), S=O(n) ???}
 *      if (a_i > a_j) or ((a_i = a_j) and i > j):
 *        p_i writes 1 to c_i
 *      else:
 *        p_i write 0 to c_i
 *    p_i write a_i to (1 + c_i)
 * (then do some stuff to swap them into the proper order????)
 * (I don't really care about this, MPI is EREW?)
 */

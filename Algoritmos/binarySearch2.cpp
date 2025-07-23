while (l <= r) {
  int mid = (l + r) / 2;
  if (check(mid)) r = mid - 1;
  else l = mid + 1;
}

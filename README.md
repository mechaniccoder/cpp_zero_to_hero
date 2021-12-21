### unique_ptr vs shared_ptr

둘 다 스마트 포인터의 종류이다.

unique_ptr: 스코프를 벗어나거나 리셋할때 리소스에 대한 참조를 해제한다.
shared_ptr: 리소스에 대한 참조를 카운팅해서, 레퍼런스 카운트가 0이 되면 메모리를 해제한다.

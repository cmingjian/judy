static ErlNifResourceType* JUDY_RESOURCE;

typedef struct _judy_t
{
  Pvoid_t judy;
  unsigned long num_keys;
} judy_t;

typedef struct _judy_value_t {
  size_t size;
  unsigned char* value;
} judy_value;


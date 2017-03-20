#pragma once

namespace gc{
	namespace memory{
		struct Slice
		{
			void * begin;
			void * end;
			inline ptrdiff_t getDifference() {
				return static_cast<u8 *>(end) - static_cast<u8 *>(begin);
			}
			inline bool operator == (const Slice & other){
				return begin == other.begin && end == other.end;
			}
			inline bool operator != (const Slice & other){
				return begin != other.begin && end != other.end;
			}
		public:
			static Slice null;
		};
		inline void * getNextAligned(void * ptr){
			ptrdiff_t n = reinterpret_cast<ptrdiff_t>(ptr);
			if (n % GC_GET_WORD_SIZE)
				return reinterpret_cast<void *>((n / GC_GET_WORD_SIZE + 1) * GC_GET_WORD_SIZE);
			else return reinterpret_cast<void *>(n);
		}
		inline bool isAligned(void * ptr){
			if (reinterpret_cast<size_t>(ptr) % GC_GET_WORD_SIZE)//if reminder from devision not zero, ptr is not aligned
				return false;
			return true;
		}
	}
}
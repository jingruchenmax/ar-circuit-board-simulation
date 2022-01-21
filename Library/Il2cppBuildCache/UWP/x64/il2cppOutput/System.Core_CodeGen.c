#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Take(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::TakeIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x0000000D System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000E System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderByDescending(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000F System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Intersect(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::IntersectIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000016 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
// 0x00000019 System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>,System.Collections.Generic.IEqualityComparer`1<TKey>)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType(System.Collections.IEnumerable)
// 0x0000001B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfTypeIterator(System.Collections.IEnumerable)
// 0x0000001C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001D System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001E TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000021 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000022 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000023 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Empty()
// 0x00000024 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000025 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Boolean System.Linq.Enumerable::All(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000027 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000028 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000029 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000002A TAccumulate System.Linq.Enumerable::Aggregate(System.Collections.Generic.IEnumerable`1<TSource>,TAccumulate,System.Func`3<TAccumulate,TSource,TAccumulate>)
// 0x0000002B System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x0000002C System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002D TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002F System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000030 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000031 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000032 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000033 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000034 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000035 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000036 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000038 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000039 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000003A System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x0000003B System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003D System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003E System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003F System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000040 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000041 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000042 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000043 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000044 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000045 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000046 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000048 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000049 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x0000004A System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x0000004B System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004C System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004D System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004E System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004F System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x00000050 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000051 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000052 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000053 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000054 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000055 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000056 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000058 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x0000005A TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x0000005B System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005D System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005E System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x00000060 TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000061 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000062 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000063 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000064 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000065 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::.ctor(System.Int32)
// 0x00000066 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.IDisposable.Dispose()
// 0x00000067 System.Boolean System.Linq.Enumerable/<TakeIterator>d__25`1::MoveNext()
// 0x00000068 System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::<>m__Finally1()
// 0x00000069 TSource System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000006A System.Void System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.Reset()
// 0x0000006B System.Object System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerator.get_Current()
// 0x0000006C System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006D System.Collections.IEnumerator System.Linq.Enumerable/<TakeIterator>d__25`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006E System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x0000006F System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000070 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000071 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000072 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000073 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000074 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x00000075 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000076 System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000077 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x00000078 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x00000079 System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x0000007A System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x0000007B System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x0000007C TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007D System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x0000007E System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x0000007F System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000080 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000081 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::.ctor(System.Int32)
// 0x00000082 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.IDisposable.Dispose()
// 0x00000083 System.Boolean System.Linq.Enumerable/<IntersectIterator>d__74`1::MoveNext()
// 0x00000084 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::<>m__Finally1()
// 0x00000085 TSource System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000086 System.Void System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.Reset()
// 0x00000087 System.Object System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerator.get_Current()
// 0x00000088 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000089 System.Collections.IEnumerator System.Linq.Enumerable/<IntersectIterator>d__74`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000008A System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::.ctor(System.Int32)
// 0x0000008B System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.IDisposable.Dispose()
// 0x0000008C System.Boolean System.Linq.Enumerable/<OfTypeIterator>d__97`1::MoveNext()
// 0x0000008D System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::<>m__Finally1()
// 0x0000008E TResult System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008F System.Void System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.Reset()
// 0x00000090 System.Object System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerator.get_Current()
// 0x00000091 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000092 System.Collections.IEnumerator System.Linq.Enumerable/<OfTypeIterator>d__97`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000093 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000094 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000095 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x00000096 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x00000097 TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x00000098 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x00000099 System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000009A System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000009B System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000009C System.Void System.Linq.EmptyEnumerable`1::.cctor()
// 0x0000009D System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009E System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000009F System.Boolean System.Linq.Set`1::Add(TElement)
// 0x000000A0 System.Boolean System.Linq.Set`1::Remove(TElement)
// 0x000000A1 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x000000A2 System.Void System.Linq.Set`1::Resize()
// 0x000000A3 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x000000A4 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x000000A5 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A6 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000A7 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A8 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x000000A9 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x000000AA System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x000000AB System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x000000AC TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x000000AD System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000AE System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000AF System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000B0 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B1 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000B2 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000B3 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000B4 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000B5 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000B6 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000B7 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000B8 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000B9 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000BA TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000C0 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000C2 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000C3 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000C4 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000C5 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000C6 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000C7 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000CA System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000CB System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000CC System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000CD System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000CF System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000D0 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000D1 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000D2 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000D3 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000D4 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000D5 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000D6 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000D7 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000D8 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[216] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[216] = 
{
	6259,
	6259,
	6482,
	6482,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	6168,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[71] = 
{
	{ 0x02000004, { 108, 4 } },
	{ 0x02000005, { 112, 9 } },
	{ 0x02000006, { 123, 7 } },
	{ 0x02000007, { 132, 10 } },
	{ 0x02000008, { 144, 11 } },
	{ 0x02000009, { 158, 9 } },
	{ 0x0200000A, { 170, 12 } },
	{ 0x0200000B, { 185, 1 } },
	{ 0x0200000C, { 186, 2 } },
	{ 0x0200000D, { 188, 12 } },
	{ 0x0200000E, { 200, 8 } },
	{ 0x0200000F, { 208, 11 } },
	{ 0x02000010, { 219, 12 } },
	{ 0x02000011, { 231, 12 } },
	{ 0x02000012, { 243, 6 } },
	{ 0x02000013, { 249, 6 } },
	{ 0x02000014, { 255, 2 } },
	{ 0x02000016, { 257, 8 } },
	{ 0x02000018, { 265, 3 } },
	{ 0x02000019, { 270, 5 } },
	{ 0x0200001A, { 275, 7 } },
	{ 0x0200001B, { 282, 3 } },
	{ 0x0200001C, { 285, 7 } },
	{ 0x0200001D, { 292, 4 } },
	{ 0x0200001E, { 296, 23 } },
	{ 0x02000020, { 319, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 1 } },
	{ 0x0600000C, { 34, 2 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 2 } },
	{ 0x0600000F, { 40, 1 } },
	{ 0x06000010, { 41, 1 } },
	{ 0x06000011, { 42, 2 } },
	{ 0x06000012, { 44, 1 } },
	{ 0x06000013, { 45, 2 } },
	{ 0x06000014, { 47, 1 } },
	{ 0x06000015, { 48, 2 } },
	{ 0x06000016, { 50, 3 } },
	{ 0x06000017, { 53, 2 } },
	{ 0x06000018, { 55, 1 } },
	{ 0x06000019, { 56, 7 } },
	{ 0x0600001A, { 63, 1 } },
	{ 0x0600001B, { 64, 2 } },
	{ 0x0600001C, { 66, 2 } },
	{ 0x0600001D, { 68, 2 } },
	{ 0x0600001E, { 70, 4 } },
	{ 0x0600001F, { 74, 4 } },
	{ 0x06000020, { 78, 4 } },
	{ 0x06000021, { 82, 3 } },
	{ 0x06000022, { 85, 3 } },
	{ 0x06000023, { 88, 1 } },
	{ 0x06000024, { 89, 1 } },
	{ 0x06000025, { 90, 3 } },
	{ 0x06000026, { 93, 3 } },
	{ 0x06000027, { 96, 2 } },
	{ 0x06000028, { 98, 2 } },
	{ 0x06000029, { 100, 5 } },
	{ 0x0600002A, { 105, 3 } },
	{ 0x0600003B, { 121, 2 } },
	{ 0x06000040, { 130, 2 } },
	{ 0x06000045, { 142, 2 } },
	{ 0x0600004B, { 155, 3 } },
	{ 0x06000050, { 167, 3 } },
	{ 0x06000055, { 182, 3 } },
	{ 0x060000A7, { 268, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[321] = 
{
	{ (Il2CppRGCTXDataType)2, 6617 },
	{ (Il2CppRGCTXDataType)3, 24708 },
	{ (Il2CppRGCTXDataType)2, 10434 },
	{ (Il2CppRGCTXDataType)2, 9717 },
	{ (Il2CppRGCTXDataType)3, 42266 },
	{ (Il2CppRGCTXDataType)2, 7279 },
	{ (Il2CppRGCTXDataType)2, 9747 },
	{ (Il2CppRGCTXDataType)3, 42310 },
	{ (Il2CppRGCTXDataType)2, 9730 },
	{ (Il2CppRGCTXDataType)3, 42282 },
	{ (Il2CppRGCTXDataType)2, 6618 },
	{ (Il2CppRGCTXDataType)3, 24709 },
	{ (Il2CppRGCTXDataType)2, 10466 },
	{ (Il2CppRGCTXDataType)2, 9760 },
	{ (Il2CppRGCTXDataType)3, 42326 },
	{ (Il2CppRGCTXDataType)2, 7306 },
	{ (Il2CppRGCTXDataType)2, 9786 },
	{ (Il2CppRGCTXDataType)3, 42468 },
	{ (Il2CppRGCTXDataType)2, 9773 },
	{ (Il2CppRGCTXDataType)3, 42391 },
	{ (Il2CppRGCTXDataType)2, 1177 },
	{ (Il2CppRGCTXDataType)3, 182 },
	{ (Il2CppRGCTXDataType)3, 183 },
	{ (Il2CppRGCTXDataType)2, 3751 },
	{ (Il2CppRGCTXDataType)3, 15283 },
	{ (Il2CppRGCTXDataType)2, 1178 },
	{ (Il2CppRGCTXDataType)3, 192 },
	{ (Il2CppRGCTXDataType)3, 193 },
	{ (Il2CppRGCTXDataType)2, 3770 },
	{ (Il2CppRGCTXDataType)3, 15292 },
	{ (Il2CppRGCTXDataType)3, 47436 },
	{ (Il2CppRGCTXDataType)2, 1221 },
	{ (Il2CppRGCTXDataType)3, 383 },
	{ (Il2CppRGCTXDataType)3, 47442 },
	{ (Il2CppRGCTXDataType)2, 1229 },
	{ (Il2CppRGCTXDataType)3, 419 },
	{ (Il2CppRGCTXDataType)2, 7938 },
	{ (Il2CppRGCTXDataType)3, 33291 },
	{ (Il2CppRGCTXDataType)2, 7939 },
	{ (Il2CppRGCTXDataType)3, 33292 },
	{ (Il2CppRGCTXDataType)3, 20174 },
	{ (Il2CppRGCTXDataType)3, 47373 },
	{ (Il2CppRGCTXDataType)2, 1184 },
	{ (Il2CppRGCTXDataType)3, 249 },
	{ (Il2CppRGCTXDataType)3, 47486 },
	{ (Il2CppRGCTXDataType)2, 1232 },
	{ (Il2CppRGCTXDataType)3, 442 },
	{ (Il2CppRGCTXDataType)3, 47391 },
	{ (Il2CppRGCTXDataType)2, 1210 },
	{ (Il2CppRGCTXDataType)3, 341 },
	{ (Il2CppRGCTXDataType)2, 1532 },
	{ (Il2CppRGCTXDataType)3, 2544 },
	{ (Il2CppRGCTXDataType)3, 2545 },
	{ (Il2CppRGCTXDataType)2, 7280 },
	{ (Il2CppRGCTXDataType)3, 26778 },
	{ (Il2CppRGCTXDataType)3, 47470 },
	{ (Il2CppRGCTXDataType)2, 2339 },
	{ (Il2CppRGCTXDataType)3, 6611 },
	{ (Il2CppRGCTXDataType)2, 4313 },
	{ (Il2CppRGCTXDataType)2, 4613 },
	{ (Il2CppRGCTXDataType)3, 15290 },
	{ (Il2CppRGCTXDataType)3, 15291 },
	{ (Il2CppRGCTXDataType)3, 6612 },
	{ (Il2CppRGCTXDataType)3, 47400 },
	{ (Il2CppRGCTXDataType)2, 1213 },
	{ (Il2CppRGCTXDataType)3, 355 },
	{ (Il2CppRGCTXDataType)2, 4264 },
	{ (Il2CppRGCTXDataType)3, 47314 },
	{ (Il2CppRGCTXDataType)2, 1181 },
	{ (Il2CppRGCTXDataType)3, 235 },
	{ (Il2CppRGCTXDataType)2, 5707 },
	{ (Il2CppRGCTXDataType)2, 4040 },
	{ (Il2CppRGCTXDataType)2, 4281 },
	{ (Il2CppRGCTXDataType)2, 4603 },
	{ (Il2CppRGCTXDataType)2, 5708 },
	{ (Il2CppRGCTXDataType)2, 4041 },
	{ (Il2CppRGCTXDataType)2, 4282 },
	{ (Il2CppRGCTXDataType)2, 4604 },
	{ (Il2CppRGCTXDataType)2, 5709 },
	{ (Il2CppRGCTXDataType)2, 4042 },
	{ (Il2CppRGCTXDataType)2, 4283 },
	{ (Il2CppRGCTXDataType)2, 4605 },
	{ (Il2CppRGCTXDataType)2, 4284 },
	{ (Il2CppRGCTXDataType)2, 4606 },
	{ (Il2CppRGCTXDataType)3, 15284 },
	{ (Il2CppRGCTXDataType)2, 5706 },
	{ (Il2CppRGCTXDataType)2, 4280 },
	{ (Il2CppRGCTXDataType)2, 4602 },
	{ (Il2CppRGCTXDataType)2, 2614 },
	{ (Il2CppRGCTXDataType)2, 4260 },
	{ (Il2CppRGCTXDataType)2, 4261 },
	{ (Il2CppRGCTXDataType)2, 4600 },
	{ (Il2CppRGCTXDataType)3, 15282 },
	{ (Il2CppRGCTXDataType)2, 4259 },
	{ (Il2CppRGCTXDataType)2, 4599 },
	{ (Il2CppRGCTXDataType)3, 15281 },
	{ (Il2CppRGCTXDataType)2, 4039 },
	{ (Il2CppRGCTXDataType)2, 4279 },
	{ (Il2CppRGCTXDataType)2, 4038 },
	{ (Il2CppRGCTXDataType)3, 47351 },
	{ (Il2CppRGCTXDataType)3, 14110 },
	{ (Il2CppRGCTXDataType)2, 3553 },
	{ (Il2CppRGCTXDataType)2, 4263 },
	{ (Il2CppRGCTXDataType)2, 4601 },
	{ (Il2CppRGCTXDataType)2, 4842 },
	{ (Il2CppRGCTXDataType)2, 4310 },
	{ (Il2CppRGCTXDataType)2, 4612 },
	{ (Il2CppRGCTXDataType)3, 15511 },
	{ (Il2CppRGCTXDataType)3, 24710 },
	{ (Il2CppRGCTXDataType)3, 24712 },
	{ (Il2CppRGCTXDataType)2, 854 },
	{ (Il2CppRGCTXDataType)3, 24711 },
	{ (Il2CppRGCTXDataType)3, 24720 },
	{ (Il2CppRGCTXDataType)2, 6621 },
	{ (Il2CppRGCTXDataType)2, 9731 },
	{ (Il2CppRGCTXDataType)3, 42283 },
	{ (Il2CppRGCTXDataType)3, 24721 },
	{ (Il2CppRGCTXDataType)2, 4374 },
	{ (Il2CppRGCTXDataType)2, 4659 },
	{ (Il2CppRGCTXDataType)3, 15300 },
	{ (Il2CppRGCTXDataType)3, 47317 },
	{ (Il2CppRGCTXDataType)2, 9774 },
	{ (Il2CppRGCTXDataType)3, 42392 },
	{ (Il2CppRGCTXDataType)3, 24713 },
	{ (Il2CppRGCTXDataType)2, 6620 },
	{ (Il2CppRGCTXDataType)2, 9718 },
	{ (Il2CppRGCTXDataType)3, 42267 },
	{ (Il2CppRGCTXDataType)3, 15299 },
	{ (Il2CppRGCTXDataType)3, 24714 },
	{ (Il2CppRGCTXDataType)3, 47316 },
	{ (Il2CppRGCTXDataType)2, 9761 },
	{ (Il2CppRGCTXDataType)3, 42327 },
	{ (Il2CppRGCTXDataType)3, 24727 },
	{ (Il2CppRGCTXDataType)2, 6622 },
	{ (Il2CppRGCTXDataType)2, 9748 },
	{ (Il2CppRGCTXDataType)3, 42311 },
	{ (Il2CppRGCTXDataType)3, 26840 },
	{ (Il2CppRGCTXDataType)3, 12192 },
	{ (Il2CppRGCTXDataType)3, 15301 },
	{ (Il2CppRGCTXDataType)3, 12191 },
	{ (Il2CppRGCTXDataType)3, 24728 },
	{ (Il2CppRGCTXDataType)3, 47318 },
	{ (Il2CppRGCTXDataType)2, 9787 },
	{ (Il2CppRGCTXDataType)3, 42469 },
	{ (Il2CppRGCTXDataType)3, 24741 },
	{ (Il2CppRGCTXDataType)2, 6624 },
	{ (Il2CppRGCTXDataType)2, 9776 },
	{ (Il2CppRGCTXDataType)3, 42394 },
	{ (Il2CppRGCTXDataType)3, 24742 },
	{ (Il2CppRGCTXDataType)2, 4377 },
	{ (Il2CppRGCTXDataType)2, 4662 },
	{ (Il2CppRGCTXDataType)3, 15305 },
	{ (Il2CppRGCTXDataType)3, 15304 },
	{ (Il2CppRGCTXDataType)2, 9733 },
	{ (Il2CppRGCTXDataType)3, 42285 },
	{ (Il2CppRGCTXDataType)3, 47324 },
	{ (Il2CppRGCTXDataType)2, 9775 },
	{ (Il2CppRGCTXDataType)3, 42393 },
	{ (Il2CppRGCTXDataType)3, 24734 },
	{ (Il2CppRGCTXDataType)2, 6623 },
	{ (Il2CppRGCTXDataType)2, 9763 },
	{ (Il2CppRGCTXDataType)3, 42329 },
	{ (Il2CppRGCTXDataType)3, 15303 },
	{ (Il2CppRGCTXDataType)3, 15302 },
	{ (Il2CppRGCTXDataType)3, 24735 },
	{ (Il2CppRGCTXDataType)2, 9732 },
	{ (Il2CppRGCTXDataType)3, 42284 },
	{ (Il2CppRGCTXDataType)3, 47323 },
	{ (Il2CppRGCTXDataType)2, 9762 },
	{ (Il2CppRGCTXDataType)3, 42328 },
	{ (Il2CppRGCTXDataType)3, 24748 },
	{ (Il2CppRGCTXDataType)2, 6625 },
	{ (Il2CppRGCTXDataType)2, 9789 },
	{ (Il2CppRGCTXDataType)3, 42471 },
	{ (Il2CppRGCTXDataType)3, 26841 },
	{ (Il2CppRGCTXDataType)3, 12194 },
	{ (Il2CppRGCTXDataType)3, 15307 },
	{ (Il2CppRGCTXDataType)3, 15306 },
	{ (Il2CppRGCTXDataType)3, 12193 },
	{ (Il2CppRGCTXDataType)3, 24749 },
	{ (Il2CppRGCTXDataType)2, 9734 },
	{ (Il2CppRGCTXDataType)3, 42286 },
	{ (Il2CppRGCTXDataType)3, 47325 },
	{ (Il2CppRGCTXDataType)2, 9788 },
	{ (Il2CppRGCTXDataType)3, 42470 },
	{ (Il2CppRGCTXDataType)3, 15296 },
	{ (Il2CppRGCTXDataType)3, 15297 },
	{ (Il2CppRGCTXDataType)3, 15308 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)2, 4363 },
	{ (Il2CppRGCTXDataType)2, 4651 },
	{ (Il2CppRGCTXDataType)3, 15298 },
	{ (Il2CppRGCTXDataType)2, 4400 },
	{ (Il2CppRGCTXDataType)2, 4691 },
	{ (Il2CppRGCTXDataType)3, 388 },
	{ (Il2CppRGCTXDataType)2, 1075 },
	{ (Il2CppRGCTXDataType)2, 1222 },
	{ (Il2CppRGCTXDataType)3, 384 },
	{ (Il2CppRGCTXDataType)3, 387 },
	{ (Il2CppRGCTXDataType)3, 421 },
	{ (Il2CppRGCTXDataType)2, 4366 },
	{ (Il2CppRGCTXDataType)2, 4653 },
	{ (Il2CppRGCTXDataType)3, 423 },
	{ (Il2CppRGCTXDataType)2, 850 },
	{ (Il2CppRGCTXDataType)2, 1230 },
	{ (Il2CppRGCTXDataType)3, 420 },
	{ (Il2CppRGCTXDataType)3, 422 },
	{ (Il2CppRGCTXDataType)3, 251 },
	{ (Il2CppRGCTXDataType)2, 9000 },
	{ (Il2CppRGCTXDataType)3, 38637 },
	{ (Il2CppRGCTXDataType)2, 4356 },
	{ (Il2CppRGCTXDataType)2, 4646 },
	{ (Il2CppRGCTXDataType)3, 38638 },
	{ (Il2CppRGCTXDataType)3, 253 },
	{ (Il2CppRGCTXDataType)2, 843 },
	{ (Il2CppRGCTXDataType)2, 1185 },
	{ (Il2CppRGCTXDataType)3, 250 },
	{ (Il2CppRGCTXDataType)3, 252 },
	{ (Il2CppRGCTXDataType)3, 444 },
	{ (Il2CppRGCTXDataType)3, 445 },
	{ (Il2CppRGCTXDataType)2, 9004 },
	{ (Il2CppRGCTXDataType)3, 38642 },
	{ (Il2CppRGCTXDataType)2, 4369 },
	{ (Il2CppRGCTXDataType)2, 4655 },
	{ (Il2CppRGCTXDataType)3, 38643 },
	{ (Il2CppRGCTXDataType)3, 447 },
	{ (Il2CppRGCTXDataType)2, 852 },
	{ (Il2CppRGCTXDataType)2, 1233 },
	{ (Il2CppRGCTXDataType)3, 443 },
	{ (Il2CppRGCTXDataType)3, 446 },
	{ (Il2CppRGCTXDataType)3, 343 },
	{ (Il2CppRGCTXDataType)2, 9002 },
	{ (Il2CppRGCTXDataType)3, 38639 },
	{ (Il2CppRGCTXDataType)2, 4359 },
	{ (Il2CppRGCTXDataType)2, 4648 },
	{ (Il2CppRGCTXDataType)3, 38640 },
	{ (Il2CppRGCTXDataType)3, 38641 },
	{ (Il2CppRGCTXDataType)3, 345 },
	{ (Il2CppRGCTXDataType)2, 845 },
	{ (Il2CppRGCTXDataType)2, 1211 },
	{ (Il2CppRGCTXDataType)3, 342 },
	{ (Il2CppRGCTXDataType)3, 344 },
	{ (Il2CppRGCTXDataType)3, 357 },
	{ (Il2CppRGCTXDataType)2, 847 },
	{ (Il2CppRGCTXDataType)3, 359 },
	{ (Il2CppRGCTXDataType)2, 1214 },
	{ (Il2CppRGCTXDataType)3, 356 },
	{ (Il2CppRGCTXDataType)3, 358 },
	{ (Il2CppRGCTXDataType)3, 237 },
	{ (Il2CppRGCTXDataType)2, 841 },
	{ (Il2CppRGCTXDataType)3, 239 },
	{ (Il2CppRGCTXDataType)2, 1182 },
	{ (Il2CppRGCTXDataType)3, 236 },
	{ (Il2CppRGCTXDataType)3, 238 },
	{ (Il2CppRGCTXDataType)2, 10479 },
	{ (Il2CppRGCTXDataType)2, 2615 },
	{ (Il2CppRGCTXDataType)3, 14152 },
	{ (Il2CppRGCTXDataType)2, 3570 },
	{ (Il2CppRGCTXDataType)2, 10904 },
	{ (Il2CppRGCTXDataType)3, 38634 },
	{ (Il2CppRGCTXDataType)3, 38635 },
	{ (Il2CppRGCTXDataType)2, 4859 },
	{ (Il2CppRGCTXDataType)3, 38636 },
	{ (Il2CppRGCTXDataType)2, 758 },
	{ (Il2CppRGCTXDataType)2, 1187 },
	{ (Il2CppRGCTXDataType)3, 263 },
	{ (Il2CppRGCTXDataType)3, 33266 },
	{ (Il2CppRGCTXDataType)2, 7940 },
	{ (Il2CppRGCTXDataType)3, 33293 },
	{ (Il2CppRGCTXDataType)2, 1533 },
	{ (Il2CppRGCTXDataType)3, 2546 },
	{ (Il2CppRGCTXDataType)3, 33272 },
	{ (Il2CppRGCTXDataType)3, 12135 },
	{ (Il2CppRGCTXDataType)2, 884 },
	{ (Il2CppRGCTXDataType)3, 33267 },
	{ (Il2CppRGCTXDataType)2, 7935 },
	{ (Il2CppRGCTXDataType)3, 2971 },
	{ (Il2CppRGCTXDataType)2, 1554 },
	{ (Il2CppRGCTXDataType)2, 2798 },
	{ (Il2CppRGCTXDataType)3, 12153 },
	{ (Il2CppRGCTXDataType)3, 33268 },
	{ (Il2CppRGCTXDataType)3, 12130 },
	{ (Il2CppRGCTXDataType)3, 12131 },
	{ (Il2CppRGCTXDataType)3, 12129 },
	{ (Il2CppRGCTXDataType)3, 12132 },
	{ (Il2CppRGCTXDataType)2, 2794 },
	{ (Il2CppRGCTXDataType)2, 10535 },
	{ (Il2CppRGCTXDataType)3, 15294 },
	{ (Il2CppRGCTXDataType)3, 12134 },
	{ (Il2CppRGCTXDataType)2, 4191 },
	{ (Il2CppRGCTXDataType)3, 12133 },
	{ (Il2CppRGCTXDataType)2, 4046 },
	{ (Il2CppRGCTXDataType)2, 10473 },
	{ (Il2CppRGCTXDataType)2, 4314 },
	{ (Il2CppRGCTXDataType)2, 4614 },
	{ (Il2CppRGCTXDataType)3, 14131 },
	{ (Il2CppRGCTXDataType)2, 3563 },
	{ (Il2CppRGCTXDataType)3, 16157 },
	{ (Il2CppRGCTXDataType)3, 16158 },
	{ (Il2CppRGCTXDataType)3, 16163 },
	{ (Il2CppRGCTXDataType)2, 4853 },
	{ (Il2CppRGCTXDataType)3, 16160 },
	{ (Il2CppRGCTXDataType)3, 48495 },
	{ (Il2CppRGCTXDataType)2, 2802 },
	{ (Il2CppRGCTXDataType)3, 12183 },
	{ (Il2CppRGCTXDataType)1, 4182 },
	{ (Il2CppRGCTXDataType)2, 10485 },
	{ (Il2CppRGCTXDataType)3, 16159 },
	{ (Il2CppRGCTXDataType)1, 10485 },
	{ (Il2CppRGCTXDataType)1, 4853 },
	{ (Il2CppRGCTXDataType)2, 10902 },
	{ (Il2CppRGCTXDataType)2, 10485 },
	{ (Il2CppRGCTXDataType)2, 4320 },
	{ (Il2CppRGCTXDataType)2, 4618 },
	{ (Il2CppRGCTXDataType)3, 16164 },
	{ (Il2CppRGCTXDataType)3, 16162 },
	{ (Il2CppRGCTXDataType)3, 16161 },
	{ (Il2CppRGCTXDataType)2, 648 },
	{ (Il2CppRGCTXDataType)3, 12195 },
	{ (Il2CppRGCTXDataType)2, 863 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	216,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	71,
	s_rgctxIndices,
	321,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

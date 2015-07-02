﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>
struct Enumerator_t2887;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.String,System.Object>
struct Dictionary_2_t109;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_0.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4MethodDeclarations.h"
#define Enumerator__ctor_m13997(__this, ___dictionary, method) (void)Enumerator__ctor_m13487_gshared((Enumerator_t2836 *)__this, (Dictionary_2_t2829 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m13998(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m13488_gshared((Enumerator_t2836 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13999(__this, method) (DictionaryEntry_t1564 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m13489_gshared((Enumerator_t2836 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14000(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m13490_gshared((Enumerator_t2836 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14001(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m13491_gshared((Enumerator_t2836 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::MoveNext()
#define Enumerator_MoveNext_m14002(__this, method) (bool)Enumerator_MoveNext_m13492_gshared((Enumerator_t2836 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_Current()
 KeyValuePair_2_t74  Enumerator_get_Current_m14003 (Enumerator_t2887 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m14004(__this, method) (String_t*)Enumerator_get_CurrentKey_m13494_gshared((Enumerator_t2836 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m14005(__this, method) (Object_t *)Enumerator_get_CurrentValue_m13495_gshared((Enumerator_t2836 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::VerifyState()
#define Enumerator_VerifyState_m14006(__this, method) (void)Enumerator_VerifyState_m13496_gshared((Enumerator_t2836 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m14007(__this, method) (void)Enumerator_VerifyCurrent_m13497_gshared((Enumerator_t2836 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,System.Object>::Dispose()
#define Enumerator_Dispose_m14008(__this, method) (void)Enumerator_Dispose_m13498_gshared((Enumerator_t2836 *)__this, method)
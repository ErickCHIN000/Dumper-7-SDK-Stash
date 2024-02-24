#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DEBUG_InfiniteRest.GE_DEBUG_InfiniteRest_C
// (None)

class UClass* UGE_DEBUG_InfiniteRest_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DEBUG_InfiniteRest_C");

	return Clss;
}


// GE_DEBUG_InfiniteRest_C GE_DEBUG_InfiniteRest.Default__GE_DEBUG_InfiniteRest_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DEBUG_InfiniteRest_C* UGE_DEBUG_InfiniteRest_C::GetDefaultObj()
{
	static class UGE_DEBUG_InfiniteRest_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DEBUG_InfiniteRest_C*>(UGE_DEBUG_InfiniteRest_C::StaticClass()->DefaultObject);

	return Default;
}

}



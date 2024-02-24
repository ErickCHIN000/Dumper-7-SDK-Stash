#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DEBUG_InfiniteFed.GE_DEBUG_InfiniteFed_C
// (None)

class UClass* UGE_DEBUG_InfiniteFed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DEBUG_InfiniteFed_C");

	return Clss;
}


// GE_DEBUG_InfiniteFed_C GE_DEBUG_InfiniteFed.Default__GE_DEBUG_InfiniteFed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DEBUG_InfiniteFed_C* UGE_DEBUG_InfiniteFed_C::GetDefaultObj()
{
	static class UGE_DEBUG_InfiniteFed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DEBUG_InfiniteFed_C*>(UGE_DEBUG_InfiniteFed_C::StaticClass()->DefaultObject);

	return Default;
}

}



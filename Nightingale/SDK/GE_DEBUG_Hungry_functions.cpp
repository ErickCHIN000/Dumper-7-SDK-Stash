#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DEBUG_Hungry.GE_DEBUG_Hungry_C
// (None)

class UClass* UGE_DEBUG_Hungry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DEBUG_Hungry_C");

	return Clss;
}


// GE_DEBUG_Hungry_C GE_DEBUG_Hungry.Default__GE_DEBUG_Hungry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DEBUG_Hungry_C* UGE_DEBUG_Hungry_C::GetDefaultObj()
{
	static class UGE_DEBUG_Hungry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DEBUG_Hungry_C*>(UGE_DEBUG_Hungry_C::StaticClass()->DefaultObject);

	return Default;
}

}



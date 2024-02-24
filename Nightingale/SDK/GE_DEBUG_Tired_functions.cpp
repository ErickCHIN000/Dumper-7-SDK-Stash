#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_DEBUG_Tired.GE_DEBUG_Tired_C
// (None)

class UClass* UGE_DEBUG_Tired_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_DEBUG_Tired_C");

	return Clss;
}


// GE_DEBUG_Tired_C GE_DEBUG_Tired.Default__GE_DEBUG_Tired_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_DEBUG_Tired_C* UGE_DEBUG_Tired_C::GetDefaultObj()
{
	static class UGE_DEBUG_Tired_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_DEBUG_Tired_C*>(UGE_DEBUG_Tired_C::StaticClass()->DefaultObject);

	return Default;
}

}



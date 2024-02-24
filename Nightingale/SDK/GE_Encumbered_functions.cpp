#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Encumbered.GE_Encumbered_C
// (None)

class UClass* UGE_Encumbered_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Encumbered_C");

	return Clss;
}


// GE_Encumbered_C GE_Encumbered.Default__GE_Encumbered_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Encumbered_C* UGE_Encumbered_C::GetDefaultObj()
{
	static class UGE_Encumbered_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Encumbered_C*>(UGE_Encumbered_C::StaticClass()->DefaultObject);

	return Default;
}

}



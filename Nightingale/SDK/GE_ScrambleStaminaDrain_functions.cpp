#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ScrambleStaminaDrain.GE_ScrambleStaminaDrain_C
// (None)

class UClass* UGE_ScrambleStaminaDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ScrambleStaminaDrain_C");

	return Clss;
}


// GE_ScrambleStaminaDrain_C GE_ScrambleStaminaDrain.Default__GE_ScrambleStaminaDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ScrambleStaminaDrain_C* UGE_ScrambleStaminaDrain_C::GetDefaultObj()
{
	static class UGE_ScrambleStaminaDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ScrambleStaminaDrain_C*>(UGE_ScrambleStaminaDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}



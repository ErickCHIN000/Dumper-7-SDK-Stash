#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StaminaRecover.GE_StaminaRecover_C
// (None)

class UClass* UGE_StaminaRecover_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StaminaRecover_C");

	return Clss;
}


// GE_StaminaRecover_C GE_StaminaRecover.Default__GE_StaminaRecover_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StaminaRecover_C* UGE_StaminaRecover_C::GetDefaultObj()
{
	static class UGE_StaminaRecover_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StaminaRecover_C*>(UGE_StaminaRecover_C::StaticClass()->DefaultObject);

	return Default;
}

}



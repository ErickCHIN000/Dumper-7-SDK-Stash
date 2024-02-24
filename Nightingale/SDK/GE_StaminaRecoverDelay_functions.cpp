#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StaminaRecoverDelay.GE_StaminaRecoverDelay_C
// (None)

class UClass* UGE_StaminaRecoverDelay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StaminaRecoverDelay_C");

	return Clss;
}


// GE_StaminaRecoverDelay_C GE_StaminaRecoverDelay.Default__GE_StaminaRecoverDelay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StaminaRecoverDelay_C* UGE_StaminaRecoverDelay_C::GetDefaultObj()
{
	static class UGE_StaminaRecoverDelay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StaminaRecoverDelay_C*>(UGE_StaminaRecoverDelay_C::StaticClass()->DefaultObject);

	return Default;
}

}



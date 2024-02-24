#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StaminaFull.GE_StaminaFull_C
// (None)

class UClass* UGE_StaminaFull_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StaminaFull_C");

	return Clss;
}


// GE_StaminaFull_C GE_StaminaFull.Default__GE_StaminaFull_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StaminaFull_C* UGE_StaminaFull_C::GetDefaultObj()
{
	static class UGE_StaminaFull_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StaminaFull_C*>(UGE_StaminaFull_C::StaticClass()->DefaultObject);

	return Default;
}

}



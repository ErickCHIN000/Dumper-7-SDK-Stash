#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Favour_StaminaRegen.GE_Favour_StaminaRegen_C
// (None)

class UClass* UGE_Favour_StaminaRegen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Favour_StaminaRegen_C");

	return Clss;
}


// GE_Favour_StaminaRegen_C GE_Favour_StaminaRegen.Default__GE_Favour_StaminaRegen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Favour_StaminaRegen_C* UGE_Favour_StaminaRegen_C::GetDefaultObj()
{
	static class UGE_Favour_StaminaRegen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Favour_StaminaRegen_C*>(UGE_Favour_StaminaRegen_C::StaticClass()->DefaultObject);

	return Default;
}

}



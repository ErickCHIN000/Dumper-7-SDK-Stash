#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_InitStamina.GE_InitStamina_C
// (None)

class UClass* UGE_InitStamina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_InitStamina_C");

	return Clss;
}


// GE_InitStamina_C GE_InitStamina.Default__GE_InitStamina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_InitStamina_C* UGE_InitStamina_C::GetDefaultObj()
{
	static class UGE_InitStamina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_InitStamina_C*>(UGE_InitStamina_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HasStamina.GE_HasStamina_C
// (None)

class UClass* UGE_HasStamina_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HasStamina_C");

	return Clss;
}


// GE_HasStamina_C GE_HasStamina.Default__GE_HasStamina_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HasStamina_C* UGE_HasStamina_C::GetDefaultObj()
{
	static class UGE_HasStamina_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HasStamina_C*>(UGE_HasStamina_C::StaticClass()->DefaultObject);

	return Default;
}

}



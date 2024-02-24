#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_MeleeCooldown.GE_MeleeCooldown_C
// (None)

class UClass* UGE_MeleeCooldown_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_MeleeCooldown_C");

	return Clss;
}


// GE_MeleeCooldown_C GE_MeleeCooldown.Default__GE_MeleeCooldown_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_MeleeCooldown_C* UGE_MeleeCooldown_C::GetDefaultObj()
{
	static class UGE_MeleeCooldown_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_MeleeCooldown_C*>(UGE_MeleeCooldown_C::StaticClass()->DefaultObject);

	return Default;
}

}



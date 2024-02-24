#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Knockback.GE_Knockback_C
// (None)

class UClass* UGE_Knockback_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Knockback_C");

	return Clss;
}


// GE_Knockback_C GE_Knockback.Default__GE_Knockback_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Knockback_C* UGE_Knockback_C::GetDefaultObj()
{
	static class UGE_Knockback_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Knockback_C*>(UGE_Knockback_C::StaticClass()->DefaultObject);

	return Default;
}

}



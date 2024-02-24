#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Burn.GE_Burn_C
// (None)

class UClass* UGE_Burn_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Burn_C");

	return Clss;
}


// GE_Burn_C GE_Burn.Default__GE_Burn_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Burn_C* UGE_Burn_C::GetDefaultObj()
{
	static class UGE_Burn_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Burn_C*>(UGE_Burn_C::StaticClass()->DefaultObject);

	return Default;
}

}



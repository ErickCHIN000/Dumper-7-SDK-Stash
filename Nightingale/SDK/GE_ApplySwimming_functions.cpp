#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ApplySwimming.GE_ApplySwimming_C
// (None)

class UClass* UGE_ApplySwimming_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ApplySwimming_C");

	return Clss;
}


// GE_ApplySwimming_C GE_ApplySwimming.Default__GE_ApplySwimming_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ApplySwimming_C* UGE_ApplySwimming_C::GetDefaultObj()
{
	static class UGE_ApplySwimming_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ApplySwimming_C*>(UGE_ApplySwimming_C::StaticClass()->DefaultObject);

	return Default;
}

}



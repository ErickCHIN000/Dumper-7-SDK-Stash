#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ApplyClimbing.GE_ApplyClimbing_C
// (None)

class UClass* UGE_ApplyClimbing_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ApplyClimbing_C");

	return Clss;
}


// GE_ApplyClimbing_C GE_ApplyClimbing.Default__GE_ApplyClimbing_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ApplyClimbing_C* UGE_ApplyClimbing_C::GetDefaultObj()
{
	static class UGE_ApplyClimbing_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ApplyClimbing_C*>(UGE_ApplyClimbing_C::StaticClass()->DefaultObject);

	return Default;
}

}



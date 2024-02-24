#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_HeavySlow.GE_HeavySlow_C
// (None)

class UClass* UGE_HeavySlow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_HeavySlow_C");

	return Clss;
}


// GE_HeavySlow_C GE_HeavySlow.Default__GE_HeavySlow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_HeavySlow_C* UGE_HeavySlow_C::GetDefaultObj()
{
	static class UGE_HeavySlow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_HeavySlow_C*>(UGE_HeavySlow_C::StaticClass()->DefaultObject);

	return Default;
}

}



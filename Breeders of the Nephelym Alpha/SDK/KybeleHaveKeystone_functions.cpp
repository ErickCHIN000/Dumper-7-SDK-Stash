#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleHaveKeystone.KybeleHaveKeystone_C
// (None)

class UClass* UKybeleHaveKeystone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleHaveKeystone_C");

	return Clss;
}


// KybeleHaveKeystone_C KybeleHaveKeystone.Default__KybeleHaveKeystone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleHaveKeystone_C* UKybeleHaveKeystone_C::GetDefaultObj()
{
	static class UKybeleHaveKeystone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleHaveKeystone_C*>(UKybeleHaveKeystone_C::StaticClass()->DefaultObject);

	return Default;
}

}



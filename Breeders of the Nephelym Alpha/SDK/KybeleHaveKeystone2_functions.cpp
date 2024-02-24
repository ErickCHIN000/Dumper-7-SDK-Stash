#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleHaveKeystone2.KybeleHaveKeystone2_C
// (None)

class UClass* UKybeleHaveKeystone2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleHaveKeystone2_C");

	return Clss;
}


// KybeleHaveKeystone2_C KybeleHaveKeystone2.Default__KybeleHaveKeystone2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleHaveKeystone2_C* UKybeleHaveKeystone2_C::GetDefaultObj()
{
	static class UKybeleHaveKeystone2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleHaveKeystone2_C*>(UKybeleHaveKeystone2_C::StaticClass()->DefaultObject);

	return Default;
}

}



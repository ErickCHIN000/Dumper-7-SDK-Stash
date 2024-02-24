#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeHaveKeystone1.BeeHaveKeystone1_C
// (None)

class UClass* UBeeHaveKeystone1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeHaveKeystone1_C");

	return Clss;
}


// BeeHaveKeystone1_C BeeHaveKeystone1.Default__BeeHaveKeystone1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeHaveKeystone1_C* UBeeHaveKeystone1_C::GetDefaultObj()
{
	static class UBeeHaveKeystone1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeHaveKeystone1_C*>(UBeeHaveKeystone1_C::StaticClass()->DefaultObject);

	return Default;
}

}



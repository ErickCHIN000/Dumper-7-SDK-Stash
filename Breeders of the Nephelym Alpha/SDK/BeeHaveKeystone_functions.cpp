#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BeeHaveKeystone.BeeHaveKeystone_C
// (None)

class UClass* UBeeHaveKeystone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BeeHaveKeystone_C");

	return Clss;
}


// BeeHaveKeystone_C BeeHaveKeystone.Default__BeeHaveKeystone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBeeHaveKeystone_C* UBeeHaveKeystone_C::GetDefaultObj()
{
	static class UBeeHaveKeystone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBeeHaveKeystone_C*>(UBeeHaveKeystone_C::StaticClass()->DefaultObject);

	return Default;
}

}



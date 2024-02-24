#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PetraGetKeystone.PetraGetKeystone_C
// (None)

class UClass* UPetraGetKeystone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PetraGetKeystone_C");

	return Clss;
}


// PetraGetKeystone_C PetraGetKeystone.Default__PetraGetKeystone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPetraGetKeystone_C* UPetraGetKeystone_C::GetDefaultObj()
{
	static class UPetraGetKeystone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPetraGetKeystone_C*>(UPetraGetKeystone_C::StaticClass()->DefaultObject);

	return Default;
}

}



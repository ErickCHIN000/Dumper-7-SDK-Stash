#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadHaveKeystone.DryadHaveKeystone_C
// (None)

class UClass* UDryadHaveKeystone_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadHaveKeystone_C");

	return Clss;
}


// DryadHaveKeystone_C DryadHaveKeystone.Default__DryadHaveKeystone_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadHaveKeystone_C* UDryadHaveKeystone_C::GetDefaultObj()
{
	static class UDryadHaveKeystone_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadHaveKeystone_C*>(UDryadHaveKeystone_C::StaticClass()->DefaultObject);

	return Default;
}

}



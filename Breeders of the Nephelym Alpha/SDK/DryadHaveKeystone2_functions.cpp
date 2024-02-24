#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadHaveKeystone2.DryadHaveKeystone2_C
// (None)

class UClass* UDryadHaveKeystone2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadHaveKeystone2_C");

	return Clss;
}


// DryadHaveKeystone2_C DryadHaveKeystone2.Default__DryadHaveKeystone2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadHaveKeystone2_C* UDryadHaveKeystone2_C::GetDefaultObj()
{
	static class UDryadHaveKeystone2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadHaveKeystone2_C*>(UDryadHaveKeystone2_C::StaticClass()->DefaultObject);

	return Default;
}

}



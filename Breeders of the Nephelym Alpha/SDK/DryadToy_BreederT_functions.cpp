#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadToy_BreederT.DryadToy_BreederT_C
// (None)

class UClass* UDryadToy_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadToy_BreederT_C");

	return Clss;
}


// DryadToy_BreederT_C DryadToy_BreederT.Default__DryadToy_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadToy_BreederT_C* UDryadToy_BreederT_C::GetDefaultObj()
{
	static class UDryadToy_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadToy_BreederT_C*>(UDryadToy_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}



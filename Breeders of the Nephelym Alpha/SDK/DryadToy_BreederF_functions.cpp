#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadToy_BreederF.DryadToy_BreederF_C
// (None)

class UClass* UDryadToy_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadToy_BreederF_C");

	return Clss;
}


// DryadToy_BreederF_C DryadToy_BreederF.Default__DryadToy_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadToy_BreederF_C* UDryadToy_BreederF_C::GetDefaultObj()
{
	static class UDryadToy_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadToy_BreederF_C*>(UDryadToy_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}



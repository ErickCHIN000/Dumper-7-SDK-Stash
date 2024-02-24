#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadToyF.DryadToyF_C
// (None)

class UClass* UDryadToyF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadToyF_C");

	return Clss;
}


// DryadToyF_C DryadToyF.Default__DryadToyF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadToyF_C* UDryadToyF_C::GetDefaultObj()
{
	static class UDryadToyF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadToyF_C*>(UDryadToyF_C::StaticClass()->DefaultObject);

	return Default;
}

}



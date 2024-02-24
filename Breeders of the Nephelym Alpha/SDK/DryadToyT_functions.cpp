#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadToyT.DryadToyT_C
// (None)

class UClass* UDryadToyT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadToyT_C");

	return Clss;
}


// DryadToyT_C DryadToyT.Default__DryadToyT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadToyT_C* UDryadToyT_C::GetDefaultObj()
{
	static class UDryadToyT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadToyT_C*>(UDryadToyT_C::StaticClass()->DefaultObject);

	return Default;
}

}



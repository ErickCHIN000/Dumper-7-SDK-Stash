#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadCherry_BreederT.DryadCherry_BreederT_C
// (None)

class UClass* UDryadCherry_BreederT_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadCherry_BreederT_C");

	return Clss;
}


// DryadCherry_BreederT_C DryadCherry_BreederT.Default__DryadCherry_BreederT_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadCherry_BreederT_C* UDryadCherry_BreederT_C::GetDefaultObj()
{
	static class UDryadCherry_BreederT_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadCherry_BreederT_C*>(UDryadCherry_BreederT_C::StaticClass()->DefaultObject);

	return Default;
}

}



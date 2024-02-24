#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass DryadCherry_BreederF.DryadCherry_BreederF_C
// (None)

class UClass* UDryadCherry_BreederF_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DryadCherry_BreederF_C");

	return Clss;
}


// DryadCherry_BreederF_C DryadCherry_BreederF.Default__DryadCherry_BreederF_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDryadCherry_BreederF_C* UDryadCherry_BreederF_C::GetDefaultObj()
{
	static class UDryadCherry_BreederF_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDryadCherry_BreederF_C*>(UDryadCherry_BreederF_C::StaticClass()->DefaultObject);

	return Default;
}

}



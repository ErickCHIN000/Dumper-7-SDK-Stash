#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RifleDamage.RifleDamage_C
// (None)

class UClass* URifleDamage_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RifleDamage_C");

	return Clss;
}


// RifleDamage_C RifleDamage.Default__RifleDamage_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URifleDamage_C* URifleDamage_C::GetDefaultObj()
{
	static class URifleDamage_C* Default = nullptr;

	if (!Default)
		Default = static_cast<URifleDamage_C*>(URifleDamage_C::StaticClass()->DefaultObject);

	return Default;
}

}



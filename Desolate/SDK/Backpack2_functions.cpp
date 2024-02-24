#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Backpack2.Backpack2_C
// (Actor)

class UClass* ABackpack2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Backpack2_C");

	return Clss;
}


// Backpack2_C Backpack2.Default__Backpack2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABackpack2_C* ABackpack2_C::GetDefaultObj()
{
	static class ABackpack2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABackpack2_C*>(ABackpack2_C::StaticClass()->DefaultObject);

	return Default;
}

}



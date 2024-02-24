#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Backpack4.Backpack4_C
// (Actor)

class UClass* ABackpack4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Backpack4_C");

	return Clss;
}


// Backpack4_C Backpack4.Default__Backpack4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABackpack4_C* ABackpack4_C::GetDefaultObj()
{
	static class ABackpack4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABackpack4_C*>(ABackpack4_C::StaticClass()->DefaultObject);

	return Default;
}

}



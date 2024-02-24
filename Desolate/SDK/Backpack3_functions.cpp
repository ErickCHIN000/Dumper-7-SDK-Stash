#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Backpack3.Backpack3_C
// (Actor)

class UClass* ABackpack3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Backpack3_C");

	return Clss;
}


// Backpack3_C Backpack3.Default__Backpack3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABackpack3_C* ABackpack3_C::GetDefaultObj()
{
	static class ABackpack3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABackpack3_C*>(ABackpack3_C::StaticClass()->DefaultObject);

	return Default;
}

}



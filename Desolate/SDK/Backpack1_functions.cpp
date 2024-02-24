#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Backpack1.Backpack1_C
// (Actor)

class UClass* ABackpack1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Backpack1_C");

	return Clss;
}


// Backpack1_C Backpack1.Default__Backpack1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABackpack1_C* ABackpack1_C::GetDefaultObj()
{
	static class ABackpack1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABackpack1_C*>(ABackpack1_C::StaticClass()->DefaultObject);

	return Default;
}

}



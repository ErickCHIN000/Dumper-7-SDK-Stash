#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Backpack5.Backpack5_C
// (Actor)

class UClass* ABackpack5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Backpack5_C");

	return Clss;
}


// Backpack5_C Backpack5.Default__Backpack5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABackpack5_C* ABackpack5_C::GetDefaultObj()
{
	static class ABackpack5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABackpack5_C*>(ABackpack5_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Usable_Horned_Rock_Tablet.Usable_Horned_Rock_Tablet_C
// (Actor)

class UClass* AUsable_Horned_Rock_Tablet_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Usable_Horned_Rock_Tablet_C");

	return Clss;
}


// Usable_Horned_Rock_Tablet_C Usable_Horned_Rock_Tablet.Default__Usable_Horned_Rock_Tablet_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AUsable_Horned_Rock_Tablet_C* AUsable_Horned_Rock_Tablet_C::GetDefaultObj()
{
	static class AUsable_Horned_Rock_Tablet_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AUsable_Horned_Rock_Tablet_C*>(AUsable_Horned_Rock_Tablet_C::StaticClass()->DefaultObject);

	return Default;
}

}



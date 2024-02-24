#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stick_Bleed1.Stick_Bleed1_C
// (Actor)

class UClass* AStick_Bleed1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stick_Bleed1_C");

	return Clss;
}


// Stick_Bleed1_C Stick_Bleed1.Default__Stick_Bleed1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStick_Bleed1_C* AStick_Bleed1_C::GetDefaultObj()
{
	static class AStick_Bleed1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStick_Bleed1_C*>(AStick_Bleed1_C::StaticClass()->DefaultObject);

	return Default;
}

}



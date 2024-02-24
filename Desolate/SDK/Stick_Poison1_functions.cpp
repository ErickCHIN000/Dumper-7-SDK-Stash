#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stick_Poison1.Stick_Poison1_C
// (Actor)

class UClass* AStick_Poison1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stick_Poison1_C");

	return Clss;
}


// Stick_Poison1_C Stick_Poison1.Default__Stick_Poison1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStick_Poison1_C* AStick_Poison1_C::GetDefaultObj()
{
	static class AStick_Poison1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStick_Poison1_C*>(AStick_Poison1_C::StaticClass()->DefaultObject);

	return Default;
}

}



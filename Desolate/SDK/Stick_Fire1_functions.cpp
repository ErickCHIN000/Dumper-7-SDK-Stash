#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stick_Fire1.Stick_Fire1_C
// (Actor)

class UClass* AStick_Fire1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stick_Fire1_C");

	return Clss;
}


// Stick_Fire1_C Stick_Fire1.Default__Stick_Fire1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStick_Fire1_C* AStick_Fire1_C::GetDefaultObj()
{
	static class AStick_Fire1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStick_Fire1_C*>(AStick_Fire1_C::StaticClass()->DefaultObject);

	return Default;
}

}



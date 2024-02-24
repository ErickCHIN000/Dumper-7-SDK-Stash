#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stick_Strong1.Stick_Strong1_C
// (Actor)

class UClass* AStick_Strong1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stick_Strong1_C");

	return Clss;
}


// Stick_Strong1_C Stick_Strong1.Default__Stick_Strong1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStick_Strong1_C* AStick_Strong1_C::GetDefaultObj()
{
	static class AStick_Strong1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStick_Strong1_C*>(AStick_Strong1_C::StaticClass()->DefaultObject);

	return Default;
}

}



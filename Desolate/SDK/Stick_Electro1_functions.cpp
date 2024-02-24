#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Stick_Electro1.Stick_Electro1_C
// (Actor)

class UClass* AStick_Electro1_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Stick_Electro1_C");

	return Clss;
}


// Stick_Electro1_C Stick_Electro1.Default__Stick_Electro1_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AStick_Electro1_C* AStick_Electro1_C::GetDefaultObj()
{
	static class AStick_Electro1_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AStick_Electro1_C*>(AStick_Electro1_C::StaticClass()->DefaultObject);

	return Default;
}

}



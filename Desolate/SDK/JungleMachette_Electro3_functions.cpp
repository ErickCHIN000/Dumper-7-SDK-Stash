#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JungleMachette_Electro3.JungleMachette_Electro3_C
// (Actor)

class UClass* AJungleMachette_Electro3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JungleMachette_Electro3_C");

	return Clss;
}


// JungleMachette_Electro3_C JungleMachette_Electro3.Default__JungleMachette_Electro3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AJungleMachette_Electro3_C* AJungleMachette_Electro3_C::GetDefaultObj()
{
	static class AJungleMachette_Electro3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AJungleMachette_Electro3_C*>(AJungleMachette_Electro3_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JungleMachette_Poison3.JungleMachette_Poison3_C
// (Actor)

class UClass* AJungleMachette_Poison3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JungleMachette_Poison3_C");

	return Clss;
}


// JungleMachette_Poison3_C JungleMachette_Poison3.Default__JungleMachette_Poison3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AJungleMachette_Poison3_C* AJungleMachette_Poison3_C::GetDefaultObj()
{
	static class AJungleMachette_Poison3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AJungleMachette_Poison3_C*>(AJungleMachette_Poison3_C::StaticClass()->DefaultObject);

	return Default;
}

}



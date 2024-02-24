#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JungleMachette_Bleed3.JungleMachette_Bleed3_C
// (Actor)

class UClass* AJungleMachette_Bleed3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JungleMachette_Bleed3_C");

	return Clss;
}


// JungleMachette_Bleed3_C JungleMachette_Bleed3.Default__JungleMachette_Bleed3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AJungleMachette_Bleed3_C* AJungleMachette_Bleed3_C::GetDefaultObj()
{
	static class AJungleMachette_Bleed3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AJungleMachette_Bleed3_C*>(AJungleMachette_Bleed3_C::StaticClass()->DefaultObject);

	return Default;
}

}



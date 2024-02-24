#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JungleMachette_Fire3.JungleMachette_Fire3_C
// (Actor)

class UClass* AJungleMachette_Fire3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JungleMachette_Fire3_C");

	return Clss;
}


// JungleMachette_Fire3_C JungleMachette_Fire3.Default__JungleMachette_Fire3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AJungleMachette_Fire3_C* AJungleMachette_Fire3_C::GetDefaultObj()
{
	static class AJungleMachette_Fire3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AJungleMachette_Fire3_C*>(AJungleMachette_Fire3_C::StaticClass()->DefaultObject);

	return Default;
}

}



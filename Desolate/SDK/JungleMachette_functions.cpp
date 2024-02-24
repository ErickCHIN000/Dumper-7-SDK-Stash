#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JungleMachette.JungleMachette_C
// (Actor)

class UClass* AJungleMachette_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JungleMachette_C");

	return Clss;
}


// JungleMachette_C JungleMachette.Default__JungleMachette_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AJungleMachette_C* AJungleMachette_C::GetDefaultObj()
{
	static class AJungleMachette_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AJungleMachette_C*>(AJungleMachette_C::StaticClass()->DefaultObject);

	return Default;
}

}



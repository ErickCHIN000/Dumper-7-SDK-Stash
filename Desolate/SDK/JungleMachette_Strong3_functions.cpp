#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass JungleMachette_Strong3.JungleMachette_Strong3_C
// (Actor)

class UClass* AJungleMachette_Strong3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JungleMachette_Strong3_C");

	return Clss;
}


// JungleMachette_Strong3_C JungleMachette_Strong3.Default__JungleMachette_Strong3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AJungleMachette_Strong3_C* AJungleMachette_Strong3_C::GetDefaultObj()
{
	static class AJungleMachette_Strong3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AJungleMachette_Strong3_C*>(AJungleMachette_Strong3_C::StaticClass()->DefaultObject);

	return Default;
}

}



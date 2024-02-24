#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass bp_DialoguActor.bp_DialoguActor_C
// (Actor)

class UClass* Abp_DialoguActor_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("bp_DialoguActor_C");

	return Clss;
}


// bp_DialoguActor_C bp_DialoguActor.Default__bp_DialoguActor_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class Abp_DialoguActor_C* Abp_DialoguActor_C::GetDefaultObj()
{
	static class Abp_DialoguActor_C* Default = nullptr;

	if (!Default)
		Default = static_cast<Abp_DialoguActor_C*>(Abp_DialoguActor_C::StaticClass()->DefaultObject);

	return Default;
}

}



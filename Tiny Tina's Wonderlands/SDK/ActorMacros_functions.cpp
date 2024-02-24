#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass ActorMacros.ActorMacros_C
// (Actor)

class UClass* AActorMacros_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ActorMacros_C");

	return Clss;
}


// ActorMacros_C ActorMacros.Default__ActorMacros_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AActorMacros_C* AActorMacros_C::GetDefaultObj()
{
	static class AActorMacros_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AActorMacros_C*>(AActorMacros_C::StaticClass()->DefaultObject);

	return Default;
}

}



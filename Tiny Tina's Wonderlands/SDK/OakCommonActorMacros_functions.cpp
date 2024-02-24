#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OakCommonActorMacros.OakCommonActorMacros_C
// (Actor)

class UClass* AOakCommonActorMacros_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OakCommonActorMacros_C");

	return Clss;
}


// OakCommonActorMacros_C OakCommonActorMacros.Default__OakCommonActorMacros_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AOakCommonActorMacros_C* AOakCommonActorMacros_C::GetDefaultObj()
{
	static class AOakCommonActorMacros_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AOakCommonActorMacros_C*>(AOakCommonActorMacros_C::StaticClass()->DefaultObject);

	return Default;
}

}



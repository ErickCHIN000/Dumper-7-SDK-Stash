#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass RadiateDamageActor_Lightning_Mod_02_Channel.RadiateDamageActor_Lightning_Mod_02_Channel_C
// (Actor)

class UClass* ARadiateDamageActor_Lightning_Mod_02_Channel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("RadiateDamageActor_Lightning_Mod_02_Channel_C");

	return Clss;
}


// RadiateDamageActor_Lightning_Mod_02_Channel_C RadiateDamageActor_Lightning_Mod_02_Channel.Default__RadiateDamageActor_Lightning_Mod_02_Channel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ARadiateDamageActor_Lightning_Mod_02_Channel_C* ARadiateDamageActor_Lightning_Mod_02_Channel_C::GetDefaultObj()
{
	static class ARadiateDamageActor_Lightning_Mod_02_Channel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ARadiateDamageActor_Lightning_Mod_02_Channel_C*>(ARadiateDamageActor_Lightning_Mod_02_Channel_C::StaticClass()->DefaultObject);

	return Default;
}

}



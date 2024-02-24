#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MegaSlimePlayT_RL.MegaSlimePlayT_RL_C
// (None)

class UClass* UMegaSlimePlayT_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MegaSlimePlayT_RL_C");

	return Clss;
}


// MegaSlimePlayT_RL_C MegaSlimePlayT_RL.Default__MegaSlimePlayT_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMegaSlimePlayT_RL_C* UMegaSlimePlayT_RL_C::GetDefaultObj()
{
	static class UMegaSlimePlayT_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMegaSlimePlayT_RL_C*>(UMegaSlimePlayT_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



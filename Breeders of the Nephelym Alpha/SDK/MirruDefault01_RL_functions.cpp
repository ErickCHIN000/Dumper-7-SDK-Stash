#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass MirruDefault01_RL.MirruDefault01_RL_C
// (None)

class UClass* UMirruDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MirruDefault01_RL_C");

	return Clss;
}


// MirruDefault01_RL_C MirruDefault01_RL.Default__MirruDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UMirruDefault01_RL_C* UMirruDefault01_RL_C::GetDefaultObj()
{
	static class UMirruDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UMirruDefault01_RL_C*>(UMirruDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



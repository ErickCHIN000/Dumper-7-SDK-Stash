#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlossomDefault01_RL_F.BlossomDefault01_RL_F_C
// (None)

class UClass* UBlossomDefault01_RL_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlossomDefault01_RL_F_C");

	return Clss;
}


// BlossomDefault01_RL_F_C BlossomDefault01_RL_F.Default__BlossomDefault01_RL_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlossomDefault01_RL_F_C* UBlossomDefault01_RL_F_C::GetDefaultObj()
{
	static class UBlossomDefault01_RL_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlossomDefault01_RL_F_C*>(UBlossomDefault01_RL_F_C::StaticClass()->DefaultObject);

	return Default;
}

}



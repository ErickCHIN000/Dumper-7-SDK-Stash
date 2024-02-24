#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlossomDefault_R03_RL.BlossomDefault_R03_RL_C
// (None)

class UClass* UBlossomDefault_R03_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlossomDefault_R03_RL_C");

	return Clss;
}


// BlossomDefault_R03_RL_C BlossomDefault_R03_RL.Default__BlossomDefault_R03_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlossomDefault_R03_RL_C* UBlossomDefault_R03_RL_C::GetDefaultObj()
{
	static class UBlossomDefault_R03_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlossomDefault_R03_RL_C*>(UBlossomDefault_R03_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



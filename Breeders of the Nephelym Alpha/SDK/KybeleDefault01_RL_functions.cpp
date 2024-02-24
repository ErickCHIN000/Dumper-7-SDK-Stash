#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass KybeleDefault01_RL.KybeleDefault01_RL_C
// (None)

class UClass* UKybeleDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KybeleDefault01_RL_C");

	return Clss;
}


// KybeleDefault01_RL_C KybeleDefault01_RL.Default__KybeleDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UKybeleDefault01_RL_C* UKybeleDefault01_RL_C::GetDefaultObj()
{
	static class UKybeleDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UKybeleDefault01_RL_C*>(UKybeleDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



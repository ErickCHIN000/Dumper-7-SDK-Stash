#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FaleneDefault01_RL.FaleneDefault01_RL_C
// (None)

class UClass* UFaleneDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FaleneDefault01_RL_C");

	return Clss;
}


// FaleneDefault01_RL_C FaleneDefault01_RL.Default__FaleneDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFaleneDefault01_RL_C* UFaleneDefault01_RL_C::GetDefaultObj()
{
	static class UFaleneDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFaleneDefault01_RL_C*>(UFaleneDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



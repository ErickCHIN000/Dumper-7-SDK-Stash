#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcDefault01_RL.OrcDefault01_RL_C
// (None)

class UClass* UOrcDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcDefault01_RL_C");

	return Clss;
}


// OrcDefault01_RL_C OrcDefault01_RL.Default__OrcDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcDefault01_RL_C* UOrcDefault01_RL_C::GetDefaultObj()
{
	static class UOrcDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcDefault01_RL_C*>(UOrcDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



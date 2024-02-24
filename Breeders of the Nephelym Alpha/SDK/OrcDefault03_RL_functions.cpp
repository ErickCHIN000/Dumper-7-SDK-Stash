#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcDefault03_RL.OrcDefault03_RL_C
// (None)

class UClass* UOrcDefault03_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcDefault03_RL_C");

	return Clss;
}


// OrcDefault03_RL_C OrcDefault03_RL.Default__OrcDefault03_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcDefault03_RL_C* UOrcDefault03_RL_C::GetDefaultObj()
{
	static class UOrcDefault03_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcDefault03_RL_C*>(UOrcDefault03_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



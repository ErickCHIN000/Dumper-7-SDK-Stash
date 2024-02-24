#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass OrcDefault02_RL.OrcDefault02_RL_C
// (None)

class UClass* UOrcDefault02_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OrcDefault02_RL_C");

	return Clss;
}


// OrcDefault02_RL_C OrcDefault02_RL.Default__OrcDefault02_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOrcDefault02_RL_C* UOrcDefault02_RL_C::GetDefaultObj()
{
	static class UOrcDefault02_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOrcDefault02_RL_C*>(UOrcDefault02_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



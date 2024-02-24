#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CamillaDefault01_RL.CamillaDefault01_RL_C
// (None)

class UClass* UCamillaDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CamillaDefault01_RL_C");

	return Clss;
}


// CamillaDefault01_RL_C CamillaDefault01_RL.Default__CamillaDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCamillaDefault01_RL_C* UCamillaDefault01_RL_C::GetDefaultObj()
{
	static class UCamillaDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCamillaDefault01_RL_C*>(UCamillaDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



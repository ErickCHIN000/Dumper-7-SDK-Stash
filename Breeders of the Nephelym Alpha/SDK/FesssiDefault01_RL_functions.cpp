#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiDefault01_RL.FesssiDefault01_RL_C
// (None)

class UClass* UFesssiDefault01_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiDefault01_RL_C");

	return Clss;
}


// FesssiDefault01_RL_C FesssiDefault01_RL.Default__FesssiDefault01_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiDefault01_RL_C* UFesssiDefault01_RL_C::GetDefaultObj()
{
	static class UFesssiDefault01_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiDefault01_RL_C*>(UFesssiDefault01_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



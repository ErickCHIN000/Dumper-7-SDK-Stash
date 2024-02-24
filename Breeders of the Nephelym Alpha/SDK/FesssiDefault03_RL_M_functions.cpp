#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiDefault03_RL_M.FesssiDefault03_RL_M_C
// (None)

class UClass* UFesssiDefault03_RL_M_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiDefault03_RL_M_C");

	return Clss;
}


// FesssiDefault03_RL_M_C FesssiDefault03_RL_M.Default__FesssiDefault03_RL_M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiDefault03_RL_M_C* UFesssiDefault03_RL_M_C::GetDefaultObj()
{
	static class UFesssiDefault03_RL_M_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiDefault03_RL_M_C*>(UFesssiDefault03_RL_M_C::StaticClass()->DefaultObject);

	return Default;
}

}



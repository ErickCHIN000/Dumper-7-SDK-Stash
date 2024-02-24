#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FesssiDefault02_RL.FesssiDefault02_RL_C
// (None)

class UClass* UFesssiDefault02_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FesssiDefault02_RL_C");

	return Clss;
}


// FesssiDefault02_RL_C FesssiDefault02_RL.Default__FesssiDefault02_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFesssiDefault02_RL_C* UFesssiDefault02_RL_C::GetDefaultObj()
{
	static class UFesssiDefault02_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFesssiDefault02_RL_C*>(UFesssiDefault02_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



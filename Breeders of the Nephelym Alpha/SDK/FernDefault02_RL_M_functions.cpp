#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDefault02_RL_M.FernDefault02_RL_M_C
// (None)

class UClass* UFernDefault02_RL_M_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDefault02_RL_M_C");

	return Clss;
}


// FernDefault02_RL_M_C FernDefault02_RL_M.Default__FernDefault02_RL_M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDefault02_RL_M_C* UFernDefault02_RL_M_C::GetDefaultObj()
{
	static class UFernDefault02_RL_M_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDefault02_RL_M_C*>(UFernDefault02_RL_M_C::StaticClass()->DefaultObject);

	return Default;
}

}



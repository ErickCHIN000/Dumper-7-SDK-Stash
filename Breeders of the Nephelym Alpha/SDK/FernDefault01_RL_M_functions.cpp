#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDefault01_RL_M.FernDefault01_RL_M_C
// (None)

class UClass* UFernDefault01_RL_M_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDefault01_RL_M_C");

	return Clss;
}


// FernDefault01_RL_M_C FernDefault01_RL_M.Default__FernDefault01_RL_M_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDefault01_RL_M_C* UFernDefault01_RL_M_C::GetDefaultObj()
{
	static class UFernDefault01_RL_M_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDefault01_RL_M_C*>(UFernDefault01_RL_M_C::StaticClass()->DefaultObject);

	return Default;
}

}



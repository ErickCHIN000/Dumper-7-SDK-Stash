#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDefault02_RL_T.FernDefault02_RL_T_C
// (None)

class UClass* UFernDefault02_RL_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDefault02_RL_T_C");

	return Clss;
}


// FernDefault02_RL_T_C FernDefault02_RL_T.Default__FernDefault02_RL_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDefault02_RL_T_C* UFernDefault02_RL_T_C::GetDefaultObj()
{
	static class UFernDefault02_RL_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDefault02_RL_T_C*>(UFernDefault02_RL_T_C::StaticClass()->DefaultObject);

	return Default;
}

}



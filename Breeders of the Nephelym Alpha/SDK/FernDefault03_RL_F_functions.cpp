#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FernDefault03_RL_F.FernDefault03_RL_F_C
// (None)

class UClass* UFernDefault03_RL_F_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FernDefault03_RL_F_C");

	return Clss;
}


// FernDefault03_RL_F_C FernDefault03_RL_F.Default__FernDefault03_RL_F_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFernDefault03_RL_F_C* UFernDefault03_RL_F_C::GetDefaultObj()
{
	static class UFernDefault03_RL_F_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFernDefault03_RL_F_C*>(UFernDefault03_RL_F_C::StaticClass()->DefaultObject);

	return Default;
}

}


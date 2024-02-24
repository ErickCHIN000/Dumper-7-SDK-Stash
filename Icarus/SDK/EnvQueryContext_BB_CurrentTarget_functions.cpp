#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass EnvQueryContext_BB_CurrentTarget.EnvQueryContext_BB_CurrentTarget_C
// (None)

class UClass* UEnvQueryContext_BB_CurrentTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EnvQueryContext_BB_CurrentTarget_C");

	return Clss;
}


// EnvQueryContext_BB_CurrentTarget_C EnvQueryContext_BB_CurrentTarget.Default__EnvQueryContext_BB_CurrentTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UEnvQueryContext_BB_CurrentTarget_C* UEnvQueryContext_BB_CurrentTarget_C::GetDefaultObj()
{
	static class UEnvQueryContext_BB_CurrentTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UEnvQueryContext_BB_CurrentTarget_C*>(UEnvQueryContext_BB_CurrentTarget_C::StaticClass()->DefaultObject);

	return Default;
}

}



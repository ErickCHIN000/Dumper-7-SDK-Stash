#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDemon_RL.PrideDemon_RL_C
// (None)

class UClass* UPrideDemon_RL_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDemon_RL_C");

	return Clss;
}


// PrideDemon_RL_C PrideDemon_RL.Default__PrideDemon_RL_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDemon_RL_C* UPrideDemon_RL_C::GetDefaultObj()
{
	static class UPrideDemon_RL_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDemon_RL_C*>(UPrideDemon_RL_C::StaticClass()->DefaultObject);

	return Default;
}

}



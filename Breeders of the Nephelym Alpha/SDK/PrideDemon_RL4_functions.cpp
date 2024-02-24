#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDemon_RL4.PrideDemon_RL4_C
// (None)

class UClass* UPrideDemon_RL4_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDemon_RL4_C");

	return Clss;
}


// PrideDemon_RL4_C PrideDemon_RL4.Default__PrideDemon_RL4_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDemon_RL4_C* UPrideDemon_RL4_C::GetDefaultObj()
{
	static class UPrideDemon_RL4_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDemon_RL4_C*>(UPrideDemon_RL4_C::StaticClass()->DefaultObject);

	return Default;
}

}



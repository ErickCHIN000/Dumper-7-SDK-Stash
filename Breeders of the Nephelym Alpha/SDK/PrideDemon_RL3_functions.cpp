#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDemon_RL3.PrideDemon_RL3_C
// (None)

class UClass* UPrideDemon_RL3_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDemon_RL3_C");

	return Clss;
}


// PrideDemon_RL3_C PrideDemon_RL3.Default__PrideDemon_RL3_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDemon_RL3_C* UPrideDemon_RL3_C::GetDefaultObj()
{
	static class UPrideDemon_RL3_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDemon_RL3_C*>(UPrideDemon_RL3_C::StaticClass()->DefaultObject);

	return Default;
}

}



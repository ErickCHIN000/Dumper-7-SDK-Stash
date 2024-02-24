#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDemon_RL2.PrideDemon_RL2_C
// (None)

class UClass* UPrideDemon_RL2_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDemon_RL2_C");

	return Clss;
}


// PrideDemon_RL2_C PrideDemon_RL2.Default__PrideDemon_RL2_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDemon_RL2_C* UPrideDemon_RL2_C::GetDefaultObj()
{
	static class UPrideDemon_RL2_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDemon_RL2_C*>(UPrideDemon_RL2_C::StaticClass()->DefaultObject);

	return Default;
}

}



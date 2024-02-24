#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDemon_RL5.PrideDemon_RL5_C
// (None)

class UClass* UPrideDemon_RL5_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDemon_RL5_C");

	return Clss;
}


// PrideDemon_RL5_C PrideDemon_RL5.Default__PrideDemon_RL5_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDemon_RL5_C* UPrideDemon_RL5_C::GetDefaultObj()
{
	static class UPrideDemon_RL5_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDemon_RL5_C*>(UPrideDemon_RL5_C::StaticClass()->DefaultObject);

	return Default;
}

}



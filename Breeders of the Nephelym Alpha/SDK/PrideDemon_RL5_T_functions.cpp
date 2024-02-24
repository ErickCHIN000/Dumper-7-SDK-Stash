#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PrideDemon_RL5_T.PrideDemon_RL5_T_C
// (None)

class UClass* UPrideDemon_RL5_T_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PrideDemon_RL5_T_C");

	return Clss;
}


// PrideDemon_RL5_T_C PrideDemon_RL5_T.Default__PrideDemon_RL5_T_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPrideDemon_RL5_T_C* UPrideDemon_RL5_T_C::GetDefaultObj()
{
	static class UPrideDemon_RL5_T_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPrideDemon_RL5_T_C*>(UPrideDemon_RL5_T_C::StaticClass()->DefaultObject);

	return Default;
}

}



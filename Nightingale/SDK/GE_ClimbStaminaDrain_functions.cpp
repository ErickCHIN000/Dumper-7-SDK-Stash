#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ClimbStaminaDrain.GE_ClimbStaminaDrain_C
// (None)

class UClass* UGE_ClimbStaminaDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ClimbStaminaDrain_C");

	return Clss;
}


// GE_ClimbStaminaDrain_C GE_ClimbStaminaDrain.Default__GE_ClimbStaminaDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ClimbStaminaDrain_C* UGE_ClimbStaminaDrain_C::GetDefaultObj()
{
	static class UGE_ClimbStaminaDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ClimbStaminaDrain_C*>(UGE_ClimbStaminaDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}



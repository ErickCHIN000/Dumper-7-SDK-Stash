#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_JumpStaminaDrain.GE_JumpStaminaDrain_C
// (None)

class UClass* UGE_JumpStaminaDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_JumpStaminaDrain_C");

	return Clss;
}


// GE_JumpStaminaDrain_C GE_JumpStaminaDrain.Default__GE_JumpStaminaDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_JumpStaminaDrain_C* UGE_JumpStaminaDrain_C::GetDefaultObj()
{
	static class UGE_JumpStaminaDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_JumpStaminaDrain_C*>(UGE_JumpStaminaDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SprintStaminaDrain.GE_SprintStaminaDrain_C
// (None)

class UClass* UGE_SprintStaminaDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SprintStaminaDrain_C");

	return Clss;
}


// GE_SprintStaminaDrain_C GE_SprintStaminaDrain.Default__GE_SprintStaminaDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SprintStaminaDrain_C* UGE_SprintStaminaDrain_C::GetDefaultObj()
{
	static class UGE_SprintStaminaDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SprintStaminaDrain_C*>(UGE_SprintStaminaDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}



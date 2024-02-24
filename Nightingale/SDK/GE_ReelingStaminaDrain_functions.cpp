#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_ReelingStaminaDrain.GE_ReelingStaminaDrain_C
// (None)

class UClass* UGE_ReelingStaminaDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_ReelingStaminaDrain_C");

	return Clss;
}


// GE_ReelingStaminaDrain_C GE_ReelingStaminaDrain.Default__GE_ReelingStaminaDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_ReelingStaminaDrain_C* UGE_ReelingStaminaDrain_C::GetDefaultObj()
{
	static class UGE_ReelingStaminaDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_ReelingStaminaDrain_C*>(UGE_ReelingStaminaDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}



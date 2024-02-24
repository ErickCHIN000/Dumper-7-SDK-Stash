#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_StaminaDrain.GE_StaminaDrain_C
// (None)

class UClass* UGE_StaminaDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_StaminaDrain_C");

	return Clss;
}


// GE_StaminaDrain_C GE_StaminaDrain.Default__GE_StaminaDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_StaminaDrain_C* UGE_StaminaDrain_C::GetDefaultObj()
{
	static class UGE_StaminaDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_StaminaDrain_C*>(UGE_StaminaDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}



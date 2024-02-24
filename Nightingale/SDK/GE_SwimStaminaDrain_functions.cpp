#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_SwimStaminaDrain.GE_SwimStaminaDrain_C
// (None)

class UClass* UGE_SwimStaminaDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_SwimStaminaDrain_C");

	return Clss;
}


// GE_SwimStaminaDrain_C GE_SwimStaminaDrain.Default__GE_SwimStaminaDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_SwimStaminaDrain_C* UGE_SwimStaminaDrain_C::GetDefaultObj()
{
	static class UGE_SwimStaminaDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_SwimStaminaDrain_C*>(UGE_SwimStaminaDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}



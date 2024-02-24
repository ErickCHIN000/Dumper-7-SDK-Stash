#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_GlideStaminaDrain.GE_GlideStaminaDrain_C
// (None)

class UClass* UGE_GlideStaminaDrain_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_GlideStaminaDrain_C");

	return Clss;
}


// GE_GlideStaminaDrain_C GE_GlideStaminaDrain.Default__GE_GlideStaminaDrain_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_GlideStaminaDrain_C* UGE_GlideStaminaDrain_C::GetDefaultObj()
{
	static class UGE_GlideStaminaDrain_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_GlideStaminaDrain_C*>(UGE_GlideStaminaDrain_C::StaticClass()->DefaultObject);

	return Default;
}

}



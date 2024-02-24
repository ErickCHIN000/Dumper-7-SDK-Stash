#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass GE_Campfire_Warm.GE_Campfire_Warm_C
// (None)

class UClass* UGE_Campfire_Warm_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("GE_Campfire_Warm_C");

	return Clss;
}


// GE_Campfire_Warm_C GE_Campfire_Warm.Default__GE_Campfire_Warm_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGE_Campfire_Warm_C* UGE_Campfire_Warm_C::GetDefaultObj()
{
	static class UGE_Campfire_Warm_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UGE_Campfire_Warm_C*>(UGE_Campfire_Warm_C::StaticClass()->DefaultObject);

	return Default;
}

}



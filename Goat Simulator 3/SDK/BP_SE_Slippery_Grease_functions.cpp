#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SE_Slippery_Grease.BP_SE_Slippery_Grease_C
// (Actor)

class UClass* ABP_SE_Slippery_Grease_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SE_Slippery_Grease_C");

	return Clss;
}


// BP_SE_Slippery_Grease_C BP_SE_Slippery_Grease.Default__BP_SE_Slippery_Grease_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_SE_Slippery_Grease_C* ABP_SE_Slippery_Grease_C::GetDefaultObj()
{
	static class ABP_SE_Slippery_Grease_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_SE_Slippery_Grease_C*>(ABP_SE_Slippery_Grease_C::StaticClass()->DefaultObject);

	return Default;
}

}



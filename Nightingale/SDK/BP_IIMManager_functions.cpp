#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_IIMManager.BP_IIMManager_C
// (Actor)

class UClass* ABP_IIMManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_IIMManager_C");

	return Clss;
}


// BP_IIMManager_C BP_IIMManager.Default__BP_IIMManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABP_IIMManager_C* ABP_IIMManager_C::GetDefaultObj()
{
	static class ABP_IIMManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABP_IIMManager_C*>(ABP_IIMManager_C::StaticClass()->DefaultObject);

	return Default;
}

}



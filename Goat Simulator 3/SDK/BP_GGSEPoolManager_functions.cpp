#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGSEPoolManager.BP_GGSEPoolManager_C
// (None)

class UClass* UBP_GGSEPoolManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGSEPoolManager_C");

	return Clss;
}


// BP_GGSEPoolManager_C BP_GGSEPoolManager.Default__BP_GGSEPoolManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GGSEPoolManager_C* UBP_GGSEPoolManager_C::GetDefaultObj()
{
	static class UBP_GGSEPoolManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GGSEPoolManager_C*>(UBP_GGSEPoolManager_C::StaticClass()->DefaultObject);

	return Default;
}

}



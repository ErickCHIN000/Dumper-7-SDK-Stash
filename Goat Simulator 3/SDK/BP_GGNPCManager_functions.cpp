#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGNPCManager.BP_GGNPCManager_C
// (None)

class UClass* UBP_GGNPCManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGNPCManager_C");

	return Clss;
}


// BP_GGNPCManager_C BP_GGNPCManager.Default__BP_GGNPCManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GGNPCManager_C* UBP_GGNPCManager_C::GetDefaultObj()
{
	static class UBP_GGNPCManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GGNPCManager_C*>(UBP_GGNPCManager_C::StaticClass()->DefaultObject);

	return Default;
}

}



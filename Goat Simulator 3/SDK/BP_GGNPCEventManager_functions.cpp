#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_GGNPCEventManager.BP_GGNPCEventManager_C
// (None)

class UClass* UBP_GGNPCEventManager_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_GGNPCEventManager_C");

	return Clss;
}


// BP_GGNPCEventManager_C BP_GGNPCEventManager.Default__BP_GGNPCEventManager_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_GGNPCEventManager_C* UBP_GGNPCEventManager_C::GetDefaultObj()
{
	static class UBP_GGNPCEventManager_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_GGNPCEventManager_C*>(UBP_GGNPCEventManager_C::StaticClass()->DefaultObject);

	return Default;
}

}



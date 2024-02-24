#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Hunter_SyncService.Hunter_SyncService_C
// (None)

class UClass* UHunter_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Hunter_SyncService_C");

	return Clss;
}


// Hunter_SyncService_C Hunter_SyncService.Default__Hunter_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UHunter_SyncService_C* UHunter_SyncService_C::GetDefaultObj()
{
	static class UHunter_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UHunter_SyncService_C*>(UHunter_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Butcher_SyncService.Butcher_SyncService_C
// (None)

class UClass* UButcher_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Butcher_SyncService_C");

	return Clss;
}


// Butcher_SyncService_C Butcher_SyncService.Default__Butcher_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UButcher_SyncService_C* UButcher_SyncService_C::GetDefaultObj()
{
	static class UButcher_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UButcher_SyncService_C*>(UButcher_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}

}



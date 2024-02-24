#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BlindMan_SyncService.BlindMan_SyncService_C
// (None)

class UClass* UBlindMan_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlindMan_SyncService_C");

	return Clss;
}


// BlindMan_SyncService_C BlindMan_SyncService.Default__BlindMan_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBlindMan_SyncService_C* UBlindMan_SyncService_C::GetDefaultObj()
{
	static class UBlindMan_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlindMan_SyncService_C*>(UBlindMan_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}

}



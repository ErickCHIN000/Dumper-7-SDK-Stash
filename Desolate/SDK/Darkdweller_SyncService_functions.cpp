#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Darkdweller_SyncService.Darkdweller_SyncService_C
// (None)

class UClass* UDarkdweller_SyncService_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Darkdweller_SyncService_C");

	return Clss;
}


// Darkdweller_SyncService_C Darkdweller_SyncService.Default__Darkdweller_SyncService_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDarkdweller_SyncService_C* UDarkdweller_SyncService_C::GetDefaultObj()
{
	static class UDarkdweller_SyncService_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UDarkdweller_SyncService_C*>(UDarkdweller_SyncService_C::StaticClass()->DefaultObject);

	return Default;
}

}



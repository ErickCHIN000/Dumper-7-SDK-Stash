#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BPWidget_VaultRewardNotification.BPWidget_VaultRewardNotification_C
// (None)

class UClass* UBPWidget_VaultRewardNotification_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWidget_VaultRewardNotification_C");

	return Clss;
}


// BPWidget_VaultRewardNotification_C BPWidget_VaultRewardNotification.Default__BPWidget_VaultRewardNotification_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWidget_VaultRewardNotification_C* UBPWidget_VaultRewardNotification_C::GetDefaultObj()
{
	static class UBPWidget_VaultRewardNotification_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWidget_VaultRewardNotification_C*>(UBPWidget_VaultRewardNotification_C::StaticClass()->DefaultObject);

	return Default;
}

}



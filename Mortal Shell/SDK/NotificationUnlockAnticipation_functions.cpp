#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NotificationUnlockAnticipation.NotificationUnlockAnticipation_C
// (None)

class UClass* UNotificationUnlockAnticipation_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotificationUnlockAnticipation_C");

	return Clss;
}


// NotificationUnlockAnticipation_C NotificationUnlockAnticipation.Default__NotificationUnlockAnticipation_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotificationUnlockAnticipation_C* UNotificationUnlockAnticipation_C::GetDefaultObj()
{
	static class UNotificationUnlockAnticipation_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotificationUnlockAnticipation_C*>(UNotificationUnlockAnticipation_C::StaticClass()->DefaultObject);

	return Default;
}

}



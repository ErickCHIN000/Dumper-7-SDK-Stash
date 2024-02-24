#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass NotificationUnlockHit.NotificationUnlockHit_C
// (None)

class UClass* UNotificationUnlockHit_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NotificationUnlockHit_C");

	return Clss;
}


// NotificationUnlockHit_C NotificationUnlockHit.Default__NotificationUnlockHit_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNotificationUnlockHit_C* UNotificationUnlockHit_C::GetDefaultObj()
{
	static class UNotificationUnlockHit_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UNotificationUnlockHit_C*>(UNotificationUnlockHit_C::StaticClass()->DefaultObject);

	return Default;
}

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass IOnProspectNotificationDisplay.IOnProspectNotificationDisplay_C
class IIOnProspectNotificationDisplay_C : public IInterface
{
public:

	static class UClass* StaticClass();
	static class IIOnProspectNotificationDisplay_C* GetDefaultObj();

	void QueueNotification(class UUMG_OnProspectNotificationBase_C* NotificationToShow, float DurationToShowFor);
};

}



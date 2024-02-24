#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IOnProspectNotificationDisplay.IOnProspectNotificationDisplay_C
// (None)

class UClass* IIOnProspectNotificationDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IOnProspectNotificationDisplay_C");

	return Clss;
}


// IOnProspectNotificationDisplay_C IOnProspectNotificationDisplay.Default__IOnProspectNotificationDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIOnProspectNotificationDisplay_C* IIOnProspectNotificationDisplay_C::GetDefaultObj()
{
	static class IIOnProspectNotificationDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIOnProspectNotificationDisplay_C*>(IIOnProspectNotificationDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IOnProspectNotificationDisplay.IOnProspectNotificationDisplay_C.QueueNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_OnProspectNotificationBase_C*NotificationToShow                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              DurationToShowFor                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void IIOnProspectNotificationDisplay_C::QueueNotification(class UUMG_OnProspectNotificationBase_C* NotificationToShow, float DurationToShowFor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IOnProspectNotificationDisplay_C", "QueueNotification");

	Params::IIOnProspectNotificationDisplay_C_QueueNotification_Params Parms{};

	Parms.NotificationToShow = NotificationToShow;
	Parms.DurationToShowFor = DurationToShowFor;

	UObject::ProcessEvent(Func, &Parms);

}

}



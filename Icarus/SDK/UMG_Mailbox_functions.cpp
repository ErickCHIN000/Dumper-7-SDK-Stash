#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Mailbox.UMG_Mailbox_C
// (None)

class UClass* UUMG_Mailbox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Mailbox_C");

	return Clss;
}


// UMG_Mailbox_C UMG_Mailbox.Default__UMG_Mailbox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Mailbox_C* UUMG_Mailbox_C::GetDefaultObj()
{
	static class UUMG_Mailbox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Mailbox_C*>(UUMG_Mailbox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Mailbox.UMG_Mailbox_C.Opened
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Mailbox_C::Opened()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "Opened");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mailbox.UMG_Mailbox_C.Closed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Mailbox_C::Closed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "Closed");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mailbox.UMG_Mailbox_C.ShowNotification
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FNotification               Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_Mailbox_C::ShowNotification(const struct FNotification& Notification, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "ShowNotification");

	Params::UUMG_Mailbox_C_ShowNotification_Params Parms{};

	Parms.Notification = Notification;
	Parms.Index = Index;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mailbox.UMG_Mailbox_C.Refresh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUMG_NotificationButton_C*   CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class UNotificationSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FNotification>       CallFunc_GetNotifications_ReturnValue                            (ReferenceParm)
// struct FNotification               CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Mailbox_C::Refresh(class UUMG_NotificationButton_C* CallFunc_Create_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNotificationSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, TArray<struct FNotification>& CallFunc_GetNotifications_ReturnValue, const struct FNotification& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "Refresh");

	Params::UUMG_Mailbox_C_Refresh_Params Parms{};

	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_GetNotifications_ReturnValue = CallFunc_GetNotifications_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mailbox.UMG_Mailbox_C.HideMail
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Mailbox_C::HideMail()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "HideMail");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mailbox.UMG_Mailbox_C.OnNotificationsUpdated
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Mailbox_C::OnNotificationsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "OnNotificationsUpdated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mailbox.UMG_Mailbox_C.CollectRewards
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_Mailbox_C::CollectRewards(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "CollectRewards");

	Params::UUMG_Mailbox_C_CollectRewards_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mailbox.UMG_Mailbox_C.DeleteNotification
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_Mailbox_C::DeleteNotification(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "DeleteNotification");

	Params::UUMG_Mailbox_C_DeleteNotification_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mailbox.UMG_Mailbox_C.ReadMail
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      ID                                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UUMG_Mailbox_C::ReadMail(const class FString& ID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "ReadMail");

	Params::UUMG_Mailbox_C_ReadMail_Params Parms{};

	Parms.ID = ID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mailbox.UMG_Mailbox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Mailbox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mailbox.UMG_Mailbox_C.ExecuteUbergraph_UMG_Mailbox
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// class UNotificationSubsystem*      CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      K2Node_CustomEvent_ID_2                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ID_1                                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_ID                                            (ZeroConstructor, HasGetValueTypeHash)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent_1        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBackendProxyComponent*      CallFunc_GetBackendProxyComponent_BackendProxyComponent_2        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetBackendProxyComponent_bSuccess_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FFMODEventInstance          CallFunc_PlayEvent2D_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Mailbox_C::ExecuteUbergraph_UMG_Mailbox(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UNotificationSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& K2Node_CustomEvent_ID_2, const class FString& K2Node_CustomEvent_ID_1, const class FString& K2Node_CustomEvent_ID, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent, bool CallFunc_GetBackendProxyComponent_bSuccess, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent_1, bool CallFunc_GetBackendProxyComponent_bSuccess_1, class UBackendProxyComponent* CallFunc_GetBackendProxyComponent_BackendProxyComponent_2, bool CallFunc_GetBackendProxyComponent_bSuccess_2, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "ExecuteUbergraph_UMG_Mailbox");

	Params::UUMG_Mailbox_C_ExecuteUbergraph_UMG_Mailbox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_CustomEvent_ID_2 = K2Node_CustomEvent_ID_2;
	Parms.K2Node_CustomEvent_ID_1 = K2Node_CustomEvent_ID_1;
	Parms.K2Node_CustomEvent_ID = K2Node_CustomEvent_ID;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent = CallFunc_GetBackendProxyComponent_BackendProxyComponent;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess = CallFunc_GetBackendProxyComponent_bSuccess;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent_1 = CallFunc_GetBackendProxyComponent_BackendProxyComponent_1;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess_1 = CallFunc_GetBackendProxyComponent_bSuccess_1;
	Parms.CallFunc_GetBackendProxyComponent_BackendProxyComponent_2 = CallFunc_GetBackendProxyComponent_BackendProxyComponent_2;
	Parms.CallFunc_GetBackendProxyComponent_bSuccess_2 = CallFunc_GetBackendProxyComponent_bSuccess_2;
	Parms.CallFunc_PlayEvent2D_ReturnValue = CallFunc_PlayEvent2D_ReturnValue;
	Parms.CallFunc_PlayEvent2D_ReturnValue_1 = CallFunc_PlayEvent2D_ReturnValue_1;
	Parms.CallFunc_PlayEvent2D_ReturnValue_2 = CallFunc_PlayEvent2D_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Mailbox.UMG_Mailbox_C.DeleteMailEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Mailbox_C::DeleteMailEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "DeleteMailEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Mailbox.UMG_Mailbox_C.CloseWindowEvent__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_Mailbox_C::CloseWindowEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Mailbox_C", "CloseWindowEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}



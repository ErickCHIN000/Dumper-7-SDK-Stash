#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C
// (None)

class UClass* UWBP_EncounterDetailsUpdater_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_EncounterDetailsUpdater_C");

	return Clss;
}


// WBP_EncounterDetailsUpdater_C WBP_EncounterDetailsUpdater.Default__WBP_EncounterDetailsUpdater_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_EncounterDetailsUpdater_C* UWBP_EncounterDetailsUpdater_C::GetDefaultObj()
{
	static class UWBP_EncounterDetailsUpdater_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_EncounterDetailsUpdater_C*>(UWBP_EncounterDetailsUpdater_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.GetEncounterDetailsViaInstanceID
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       EncounterInstance                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Encounter_UI_Details     Details                                                          (Parm, OutParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FEncounterDynamicData>DynamicData                                                      (Edit, BlueprintVisible)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEncounterDynamicData       CallFunc_Array_Get_Item                                          (None)
// bool                               CallFunc_EqualEqual_GuidGuid_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDA_EncounterDetailsDataAsset_C*K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterProgressTracker*   CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FEncounterDynamicData>CallFunc_GetAllDynamicData_OutData                               (ReferenceParm)

void UWBP_EncounterDetailsUpdater_C::GetEncounterDetailsViaInstanceID(const struct FGuid& EncounterInstance, bool* Success, struct FS_Encounter_UI_Details* Details, const TArray<struct FEncounterDynamicData>& DynamicData, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, const struct FEncounterDynamicData& CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_GuidGuid_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UDA_EncounterDetailsDataAsset_C* K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset, bool K2Node_DynamicCast_bSuccess, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class UEncounterProgressTracker* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<struct FEncounterDynamicData>& CallFunc_GetAllDynamicData_OutData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "GetEncounterDetailsViaInstanceID");

	Params::UWBP_EncounterDetailsUpdater_C_GetEncounterDetailsViaInstanceID_Params Parms{};

	Parms.EncounterInstance = EncounterInstance;
	Parms.DynamicData = DynamicData;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_EqualEqual_GuidGuid_ReturnValue = CallFunc_EqualEqual_GuidGuid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset = K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetAllDynamicData_OutData = CallFunc_GetAllDynamicData_OutData;

	UObject::ProcessEvent(Func, &Parms);

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Details != nullptr)
		*Details = std::move(Parms.Details);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.SetupUIDataFromStruct
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FS_Encounter_UI_Details     S_Encounter_UI_Details                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array_1                                         (ReferenceParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue_1                                    (None)
// bool                               CallFunc_EqualEqual_TextText_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            (None)

void UWBP_EncounterDetailsUpdater_C::SetupUIDataFromStruct(struct FS_Encounter_UI_Details& S_Encounter_UI_Details, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, bool Temp_bool_Variable, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_EqualEqual_TextText_ReturnValue, class FText K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "SetupUIDataFromStruct");

	Params::UWBP_EncounterDetailsUpdater_C_SetupUIDataFromStruct_Params Parms{};

	Parms.S_Encounter_UI_Details = S_Encounter_UI_Details;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Format_ReturnValue_1 = CallFunc_Format_ReturnValue_1;
	Parms.CallFunc_EqualEqual_TextText_ReturnValue = CallFunc_EqualEqual_TextText_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.PlayNotificationUpdate
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IEncounterUIDataInterface>EncounterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      Notification                                                     (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_EncounterDetailsUpdater_C::PlayNotificationUpdate(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const struct FNotificationEncounter& Notification)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "PlayNotificationUpdate");

	Params::UWBP_EncounterDetailsUpdater_C_PlayNotificationUpdate_Params Parms{};

	Parms.EncounterData = EncounterData;
	Parms.Notification = Notification;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.PlayNofication_Outro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EncounterDetailsUpdater_C::PlayNofication_Outro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "PlayNofication_Outro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.HidePanel
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EncounterDetailsUpdater_C::HidePanel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "HidePanel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.ShowPanel_HoverEncounter
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IEncounterUIDataInterface>EncounterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncounterDetailsUpdater_C::ShowPanel_HoverEncounter(TScriptInterface<class IEncounterUIDataInterface> EncounterData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "ShowPanel_HoverEncounter");

	Params::UWBP_EncounterDetailsUpdater_C_ShowPanel_HoverEncounter_Params Parms{};

	Parms.EncounterData = EncounterData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.PlayNotifcation_Intro
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EncounterDetailsUpdater_C::PlayNotifcation_Intro()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "PlayNotifcation_Intro");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.RefreshEncounterPane
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TScriptInterface<class IEncounterUIDataInterface>EncounterData                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      EncounterInstanceID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UWBP_EncounterDetailsUpdater_C::RefreshEncounterPane(TScriptInterface<class IEncounterUIDataInterface> EncounterData, const class FString& EncounterInstanceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "RefreshEncounterPane");

	Params::UWBP_EncounterDetailsUpdater_C_RefreshEncounterPane_Params Parms{};

	Parms.EncounterData = EncounterData;
	Parms.EncounterInstanceID = EncounterInstanceID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.ResetPanelAfterAnim
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_EncounterDetailsUpdater_C::ResetPanelAfterAnim()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "ResetPanelAfterAnim");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_EncounterDetailsUpdater_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncounterDetailsUpdater_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "PreConstruct");

	Params::UWBP_EncounterDetailsUpdater_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.RefreshViaEncounterID
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGuid                       EncounterInstanceID                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncounterDetailsUpdater_C::RefreshViaEncounterID(const struct FGuid& EncounterInstanceID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "RefreshViaEncounterID");

	Params::UWBP_EncounterDetailsUpdater_C_RefreshViaEncounterID_Params Parms{};

	Parms.EncounterInstanceID = EncounterInstanceID;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_EncounterDetailsUpdater.WBP_EncounterDetailsUpdater_C.ExecuteUbergraph_WBP_EncounterDetailsUpdater
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetEncounterDetailsViaInstanceID_Success                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_Encounter_UI_Details     CallFunc_GetEncounterDetailsViaInstanceID_Details                (ContainsInstancedReference, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterUIDataInterface>K2Node_CustomEvent_EncounterData_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterUIDataInterface>K2Node_CustomEvent_EncounterData                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_EncounterInstanceID_1                         (ZeroConstructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UEncounterDetailsDataAssetBase*CallFunc_GetEncounterDetailsDataAsset_EncounterDetailsAsset      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_InterfaceToObject_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDA_EncounterDetailsDataAsset_C*K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IEncounterUIDataInterface>K2Node_CustomEvent_EncounterData_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FNotificationEncounter      K2Node_CustomEvent_Notification                                  (None)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       K2Node_CustomEvent_EncounterInstanceID                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_EncounterDetailsUpdater_C::ExecuteUbergraph_WBP_EncounterDetailsUpdater(int32 EntryPoint, bool CallFunc_GetEncounterDetailsViaInstanceID_Success, const struct FS_Encounter_UI_Details& CallFunc_GetEncounterDetailsViaInstanceID_Details, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, TScriptInterface<class IEncounterUIDataInterface> K2Node_CustomEvent_EncounterData_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, TScriptInterface<class IEncounterUIDataInterface> K2Node_CustomEvent_EncounterData, const class FString& K2Node_CustomEvent_EncounterInstanceID_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UEncounterDetailsDataAssetBase* CallFunc_GetEncounterDetailsDataAsset_EncounterDetailsAsset, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, class UDA_EncounterDetailsDataAsset_C* K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, TScriptInterface<class IEncounterUIDataInterface> K2Node_CustomEvent_EncounterData_2, const struct FNotificationEncounter& K2Node_CustomEvent_Notification, bool K2Node_Event_IsDesignTime, const struct FGuid& K2Node_CustomEvent_EncounterInstanceID, float CallFunc_Delay_Duration_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_EncounterDetailsUpdater_C", "ExecuteUbergraph_WBP_EncounterDetailsUpdater");

	Params::UWBP_EncounterDetailsUpdater_C_ExecuteUbergraph_WBP_EncounterDetailsUpdater_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetEncounterDetailsViaInstanceID_Success = CallFunc_GetEncounterDetailsViaInstanceID_Success;
	Parms.CallFunc_GetEncounterDetailsViaInstanceID_Details = CallFunc_GetEncounterDetailsViaInstanceID_Details;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_CustomEvent_EncounterData_1 = K2Node_CustomEvent_EncounterData_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.K2Node_CustomEvent_EncounterData = K2Node_CustomEvent_EncounterData;
	Parms.K2Node_CustomEvent_EncounterInstanceID_1 = K2Node_CustomEvent_EncounterInstanceID_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetEncounterDetailsDataAsset_EncounterDetailsAsset = CallFunc_GetEncounterDetailsDataAsset_EncounterDetailsAsset;
	Parms.CallFunc_Conv_InterfaceToObject_ReturnValue = CallFunc_Conv_InterfaceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset = K2Node_DynamicCast_AsDA_Encounter_Details_Data_Asset;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_4 = CallFunc_PlayAnimation_ReturnValue_4;
	Parms.K2Node_CustomEvent_EncounterData_2 = K2Node_CustomEvent_EncounterData_2;
	Parms.K2Node_CustomEvent_Notification = K2Node_CustomEvent_Notification;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_EncounterInstanceID = K2Node_CustomEvent_EncounterInstanceID;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Redemption_Screen.WBP_Redemption_Screen_C
// (None)

class UClass* UWBP_Redemption_Screen_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Redemption_Screen_C");

	return Clss;
}


// WBP_Redemption_Screen_C WBP_Redemption_Screen.Default__WBP_Redemption_Screen_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Redemption_Screen_C* UWBP_Redemption_Screen_C::GetDefaultObj()
{
	static class UWBP_Redemption_Screen_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Redemption_Screen_C*>(UWBP_Redemption_Screen_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.OnClaimRedemptionResponseReceivedHandler
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      RewardName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetRedemptionId_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// struct FRedemptionEntry            CallFunc_GetCurrentRedemptionEntry_CurrentRedemptionEntry        (None)
// class FString                      CallFunc_GetRedemptionId_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StriStri_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_Screen_C::OnClaimRedemptionResponseReceivedHandler(bool bSuccess, const class FString& RewardName, const class FString& CallFunc_GetRedemptionId_ReturnValue, const struct FRedemptionEntry& CallFunc_GetCurrentRedemptionEntry_CurrentRedemptionEntry, const class FString& CallFunc_GetRedemptionId_ReturnValue_1, bool CallFunc_EqualEqual_StriStri_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "OnClaimRedemptionResponseReceivedHandler");

	Params::UWBP_Redemption_Screen_C_OnClaimRedemptionResponseReceivedHandler_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.RewardName = RewardName;
	Parms.CallFunc_GetRedemptionId_ReturnValue = CallFunc_GetRedemptionId_ReturnValue;
	Parms.CallFunc_GetCurrentRedemptionEntry_CurrentRedemptionEntry = CallFunc_GetCurrentRedemptionEntry_CurrentRedemptionEntry;
	Parms.CallFunc_GetRedemptionId_ReturnValue_1 = CallFunc_GetRedemptionId_ReturnValue_1;
	Parms.CallFunc_EqualEqual_StriStri_ReturnValue = CallFunc_EqualEqual_StriStri_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.UpdateDetailsPanel
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRedemptionEntry            RedemptionEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               LIsRedemptionValid                                               (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRedemptionValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_Screen_C::UpdateDetailsPanel(const struct FRedemptionEntry& RedemptionEntry, bool LIsRedemptionValid, bool Temp_bool_Variable, bool CallFunc_IsRedemptionValid_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "UpdateDetailsPanel");

	Params::UWBP_Redemption_Screen_C_UpdateDetailsPanel_Params Parms{};

	Parms.RedemptionEntry = RedemptionEntry;
	Parms.LIsRedemptionValid = LIsRedemptionValid;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsRedemptionValid_ReturnValue = CallFunc_IsRedemptionValid_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.OnEntryDoubleClickedHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRedemptionEntry            RedemptionEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Redemption_Screen_C::OnEntryDoubleClickedHandler(const struct FRedemptionEntry& RedemptionEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "OnEntryDoubleClickedHandler");

	Params::UWBP_Redemption_Screen_C_OnEntryDoubleClickedHandler_Params Parms{};

	Parms.RedemptionEntry = RedemptionEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.OnEntryUnhoveredHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Redemption_Screen_C::OnEntryUnhoveredHandler()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "OnEntryUnhoveredHandler");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.OnEntryHoveredHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRedemptionEntry            RedemptionEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Redemption_Screen_C::OnEntryHoveredHandler(const struct FRedemptionEntry& RedemptionEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "OnEntryHoveredHandler");

	Params::UWBP_Redemption_Screen_C_OnEntryHoveredHandler_Params Parms{};

	Parms.RedemptionEntry = RedemptionEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.OnEntrySelectedHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRedemptionEntry            RedemptionEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)

void UWBP_Redemption_Screen_C::OnEntrySelectedHandler(const struct FRedemptionEntry& RedemptionEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "OnEntrySelectedHandler");

	Params::UWBP_Redemption_Screen_C_OnEntrySelectedHandler_Params Parms{};

	Parms.RedemptionEntry = RedemptionEntry;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.OnCurrentRedemptionsUpdatedHandler
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FRedemptionEntry>    LCurrentRedemptions                                              (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Redemption_Entry_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRedemptionEntry            CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FRedemptionEntry>    CallFunc_GetCurrentRedemptions_ReturnValue                       (ReferenceParm)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsEmpty_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_Screen_C::OnCurrentRedemptionsUpdatedHandler(const TArray<struct FRedemptionEntry>& LCurrentRedemptions, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Redemption_Entry_C* CallFunc_Create_ReturnValue, const struct FRedemptionEntry& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TArray<struct FRedemptionEntry>& CallFunc_GetCurrentRedemptions_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, bool CallFunc_Array_IsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "OnCurrentRedemptionsUpdatedHandler");

	Params::UWBP_Redemption_Screen_C_OnCurrentRedemptionsUpdatedHandler_Params Parms{};

	Parms.LCurrentRedemptions = LCurrentRedemptions;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCurrentRedemptions_ReturnValue = CallFunc_GetCurrentRedemptions_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;
	Parms.CallFunc_Array_IsEmpty_ReturnValue = CallFunc_Array_IsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.SetupEntryBindings
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UWBP_Redemption_Entry_C*     EntryWidget                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_Screen_C::SetupEntryBindings(class UWBP_Redemption_Entry_C* EntryWidget, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "SetupEntryBindings");

	Params::UWBP_Redemption_Screen_C_SetupEntryBindings_Params Parms{};

	Parms.EntryWidget = EntryWidget;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWBP_Redemption_Entry_C*     CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPanelSlot*                  CallFunc_AddChild_ReturnValue                                    (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_Screen_C::InitializeDesignerPreview(int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_Redemption_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "InitializeDesignerPreview");

	Params::UWBP_Redemption_Screen_C_InitializeDesignerPreview_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChild_ReturnValue = CallFunc_AddChild_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.BP_OnActivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Redemption_Screen_C::BP_OnActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "BP_OnActivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.BP_OnDeactivated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_Redemption_Screen_C::BP_OnDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "BP_OnDeactivated");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.BndEvt__WBP_Rewards_Screen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_Screen_C::BndEvt__WBP_Rewards_Screen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "BndEvt__WBP_Rewards_Screen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Redemption_Screen_C_BndEvt__WBP_Rewards_Screen_CBU_Close_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_Screen.WBP_Redemption_Screen_C.ExecuteUbergraph_WBP_Redemption_Screen
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_Screen_C::ExecuteUbergraph_WBP_Redemption_Screen(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_Screen_C", "ExecuteUbergraph_WBP_Redemption_Screen");

	Params::UWBP_Redemption_Screen_C_ExecuteUbergraph_WBP_Redemption_Screen_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;

	UObject::ProcessEvent(Func, &Parms);

}

}



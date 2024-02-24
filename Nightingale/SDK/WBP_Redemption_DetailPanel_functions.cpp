#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C
// (None)

class UClass* UWBP_Redemption_DetailPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Redemption_DetailPanel_C");

	return Clss;
}


// WBP_Redemption_DetailPanel_C WBP_Redemption_DetailPanel.Default__WBP_Redemption_DetailPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Redemption_DetailPanel_C* UWBP_Redemption_DetailPanel_C::GetDefaultObj()
{
	static class UWBP_Redemption_DetailPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Redemption_DetailPanel_C*>(UWBP_Redemption_DetailPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.GetCurrentRedemptionEntry
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRedemptionEntry            CurrentRedemptionEntry                                           (Parm, OutParm)

void UWBP_Redemption_DetailPanel_C::GetCurrentRedemptionEntry(struct FRedemptionEntry* CurrentRedemptionEntry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_DetailPanel_C", "GetCurrentRedemptionEntry");

	Params::UWBP_Redemption_DetailPanel_C_GetCurrentRedemptionEntry_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (CurrentRedemptionEntry != nullptr)
		*CurrentRedemptionEntry = std::move(Parms.CurrentRedemptionEntry);

}


// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.ClearCurrentRedemptionEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Redemption_DetailPanel_C::ClearCurrentRedemptionEntry()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_DetailPanel_C", "ClearCurrentRedemptionEntry");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.InitializeDesignerPreview
// (Event, Protected, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Redemption_DetailPanel_C::InitializeDesignerPreview()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_DetailPanel_C", "InitializeDesignerPreview");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.TryClaimReward
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      CallFunc_GetRedemptionId_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)

void UWBP_Redemption_DetailPanel_C::TryClaimReward(const class FString& CallFunc_GetRedemptionId_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_DetailPanel_C", "TryClaimReward");

	Params::UWBP_Redemption_DetailPanel_C_TryClaimReward_Params Parms{};

	Parms.CallFunc_GetRedemptionId_ReturnValue = CallFunc_GetRedemptionId_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.OnClaimRedemptionResponseHandler
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bSuccess                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      RewardName                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_DetailPanel_C::OnClaimRedemptionResponseHandler(bool bSuccess, const class FString& RewardName, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_DetailPanel_C", "OnClaimRedemptionResponseHandler");

	Params::UWBP_Redemption_DetailPanel_C_OnClaimRedemptionResponseHandler_Params Parms{};

	Parms.bSuccess = bSuccess;
	Parms.RewardName = RewardName;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.UpdateDisplay
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               LSoftObjectReference                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRedeemableRewardUIData     CallFunc_TryGetRedemptionUIData_OutData                          (None)
// enum class EGetResult              CallFunc_TryGetRedemptionUIData_OutBranches                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRedemptionValid_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftObjectReference_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_DetailPanel_C::UpdateDisplay(bool LSoftObjectReference, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default, const struct FRedeemableRewardUIData& CallFunc_TryGetRedemptionUIData_OutData, enum class EGetResult CallFunc_TryGetRedemptionUIData_OutBranches, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsRedemptionValid_ReturnValue, bool CallFunc_IsValidSoftObjectReference_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_DetailPanel_C", "UpdateDisplay");

	Params::UWBP_Redemption_DetailPanel_C_UpdateDisplay_Params Parms{};

	Parms.LSoftObjectReference = LSoftObjectReference;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_TryGetRedemptionUIData_OutData = CallFunc_TryGetRedemptionUIData_OutData;
	Parms.CallFunc_TryGetRedemptionUIData_OutBranches = CallFunc_TryGetRedemptionUIData_OutBranches;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsRedemptionValid_ReturnValue = CallFunc_IsRedemptionValid_ReturnValue;
	Parms.CallFunc_IsValidSoftObjectReference_ReturnValue = CallFunc_IsValidSoftObjectReference_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.UpdateCurrentRedemptionEntry
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FRedemptionEntry            RedemptionEntry                                                  (BlueprintVisible, BlueprintReadOnly, Parm)
// class FString                      CallFunc_GetRedemptionId_ReturnValue                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetRedemptionId_ReturnValue_1                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_StriStri_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_DetailPanel_C::UpdateCurrentRedemptionEntry(const struct FRedemptionEntry& RedemptionEntry, const class FString& CallFunc_GetRedemptionId_ReturnValue, const class FString& CallFunc_GetRedemptionId_ReturnValue_1, bool CallFunc_NotEqual_StriStri_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_DetailPanel_C", "UpdateCurrentRedemptionEntry");

	Params::UWBP_Redemption_DetailPanel_C_UpdateCurrentRedemptionEntry_Params Parms{};

	Parms.RedemptionEntry = RedemptionEntry;
	Parms.CallFunc_GetRedemptionId_ReturnValue = CallFunc_GetRedemptionId_ReturnValue;
	Parms.CallFunc_GetRedemptionId_ReturnValue_1 = CallFunc_GetRedemptionId_ReturnValue_1;
	Parms.CallFunc_NotEqual_StriStri_ReturnValue = CallFunc_NotEqual_StriStri_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Redemption_DetailPanel_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_DetailPanel_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Redemption_DetailPanel_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_DetailPanel_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.BndEvt__WBP_Redemption_DetailPanel_CBU_Claim_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UCommonButtonBase*           Button                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_DetailPanel_C::BndEvt__WBP_Redemption_DetailPanel_CBU_Claim_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_DetailPanel_C", "BndEvt__WBP_Redemption_DetailPanel_CBU_Claim_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature");

	Params::UWBP_Redemption_DetailPanel_C_BndEvt__WBP_Redemption_DetailPanel_CBU_Claim_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature_Params Parms{};

	Parms.Button = Button;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Redemption_DetailPanel.WBP_Redemption_DetailPanel_C.ExecuteUbergraph_WBP_Redemption_DetailPanel
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UCommonButtonBase*           K2Node_ComponentBoundEvent_Button                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerController*        CallFunc_GetOwningPlayerController_ReturnValue                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Redemption_DetailPanel_C::ExecuteUbergraph_WBP_Redemption_DetailPanel(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, class ANWXPlayerController* CallFunc_GetOwningPlayerController_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Redemption_DetailPanel_C", "ExecuteUbergraph_WBP_Redemption_DetailPanel");

	Params::UWBP_Redemption_DetailPanel_C_ExecuteUbergraph_WBP_Redemption_DetailPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_ComponentBoundEvent_Button = K2Node_ComponentBoundEvent_Button;
	Parms.CallFunc_GetOwningPlayerController_ReturnValue = CallFunc_GetOwningPlayerController_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



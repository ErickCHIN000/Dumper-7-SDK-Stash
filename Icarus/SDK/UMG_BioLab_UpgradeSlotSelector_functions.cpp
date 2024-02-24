#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C
// (None)

class UClass* UUMG_BioLab_UpgradeSlotSelector_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BioLab_UpgradeSlotSelector_C");

	return Clss;
}


// UMG_BioLab_UpgradeSlotSelector_C UMG_BioLab_UpgradeSlotSelector.Default__UMG_BioLab_UpgradeSlotSelector_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BioLab_UpgradeSlotSelector_C* UUMG_BioLab_UpgradeSlotSelector_C::GetDefaultObj()
{
	static class UUMG_BioLab_UpgradeSlotSelector_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BioLab_UpgradeSlotSelector_C*>(UUMG_BioLab_UpgradeSlotSelector_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.GetBaseMargin
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   BaseSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotSelector_C::GetBaseMargin(struct FVector2D* BaseSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "GetBaseMargin");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_GetBaseMargin_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BaseSize != nullptr)
		*BaseSize = std::move(Parms.BaseSize);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.GetBaseSize
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FVector2D                   BaseSize                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotSelector_C::GetBaseSize(struct FVector2D* BaseSize)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "GetBaseSize");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_GetBaseSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (BaseSize != nullptr)
		*BaseSize = std::move(Parms.BaseSize);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.CanChooseUpgrades
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FLivingItemSlotState        LivingItemSlotState                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UUMG_BioLab_UpgradeSlotSelector_C::CanChooseUpgrades(struct FLivingItemSlotState& LivingItemSlotState, bool CallFunc_IsRowHandleValid_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "CanChooseUpgrades");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_CanChooseUpgrades_Params Parms{};

	Parms.LivingItemSlotState = LivingItemSlotState;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.SetSlotState
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLivingItemSlotState        SlotState                                                        (BlueprintVisible, BlueprintReadOnly, Parm)

void UUMG_BioLab_UpgradeSlotSelector_C::SetSlotState(const struct FLivingItemSlotState& SlotState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "SetSlotState");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_SetSlotState_Params Parms{};

	Parms.SlotState = SlotState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotSelector_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnMainSlotClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotSelector_C::OnMainSlotClicked()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "OnMainSlotClicked");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.ShowChoices
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotSelector_C::ShowChoices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "ShowChoices");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.HideChoices
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotSelector_C::HideChoices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "HideChoices");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.UpgradeChoiceClicked
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotSelector_C::UpgradeChoiceClicked(const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "UpgradeChoiceClicked");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_UpgradeChoiceClicked_Params Parms{};

	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.CancelChangeUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotSelector_C::CancelChangeUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "CancelChangeUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.ConfirmChangeUpgrade
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotSelector_C::ConfirmChangeUpgrade()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "ConfirmChangeUpgrade");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.ShowCannotAffordPrompt
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotSelector_C::ShowCannotAffordPrompt()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "ShowCannotAffordPrompt");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.Nothing
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotSelector_C::Nothing()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "Nothing");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.ChoiceHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotSelector_C::ChoiceHovered(const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "ChoiceHovered");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_ChoiceHovered_Params Parms{};

	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.ChoiceUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotSelector_C::ChoiceUnhovered(const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "ChoiceUnhovered");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_ChoiceUnhovered_Params Parms{};

	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.FinishHideChoices
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotSelector_C::FinishHideChoices()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "FinishHideChoices");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnMouseLeave
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FPointerEvent               MouseEvent                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UUMG_BioLab_UpgradeSlotSelector_C::OnMouseLeave(struct FPointerEvent& MouseEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "OnMouseLeave");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_OnMouseLeave_Params Parms{};

	Parms.MouseEvent = MouseEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnSlotHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_BioLab_UpgradeSlotSelector_C::OnSlotHovered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "OnSlotHovered");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.ExecuteUbergraph_UMG_BioLab_UpgradeSlotSelector
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FLivingItemUpgradeData      CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades          (None)
// enum class EValid                  CallFunc_GetLivingItemUpgradesStruct_Paths                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails                       (ContainsInstancedReference)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UUMG_BioLab_PurchaseUpgradeDetails_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemSlotState        K2Node_CustomEvent_SlotState                                     (None)
// bool                               CallFunc_CanChooseUpgrades_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLivingItemUpgradesRowHandleCallFunc_Array_Get_Item                                          (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_BioLab_UpgradeSlotChoice_C*CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UHorizontalBoxSlot*          CallFunc_AddChildToHorizontalBox_ReturnValue                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleK2Node_CustomEvent_Upgrade_2                                     (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerDataComponent*        CallFunc_GetPlayerDataComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ClientOnly_CanAffordWorkshopCosts_ReturnValue           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class APlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUIControllerInterface_C>K2Node_DynamicCast_AsUIController_Interface_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_UserInterface_Base_C*   CallFunc_GetUserInterface_UserInterface_1                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_ConfirmationPopup_C*    CallFunc_GetConfirmationWindow_ConfirmationWidget_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleK2Node_CustomEvent_Upgrade_1                                     (NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleK2Node_CustomEvent_Upgrade                                       (NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FPointerEvent               K2Node_Event_MouseEvent                                          (ConstParm)
// struct FConfirmationPopupDetails   K2Node_MakeStruct_ConfirmationPopupDetails_1                     (ContainsInstancedReference)

void UUMG_BioLab_UpgradeSlotSelector_C::ExecuteUbergraph_UMG_BioLab_UpgradeSlotSelector(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FLivingItemUpgradeData& CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades, enum class EValid CallFunc_GetLivingItemUpgradesStruct_Paths, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMG_BioLab_PurchaseUpgradeDetails_C* CallFunc_Create_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, int32 Temp_int_Array_Index_Variable, const struct FLivingItemSlotState& K2Node_CustomEvent_SlotState, bool CallFunc_CanChooseUpgrades_ReturnValue, const struct FLivingItemUpgradesRowHandle& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_BioLab_UpgradeSlotChoice_C* CallFunc_Create_ReturnValue_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_ClientOnly_CanAffordWorkshopCosts_ReturnValue, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, bool K2Node_SwitchEnum_CmpSuccess_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_1, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade_1, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, const struct FPointerEvent& K2Node_Event_MouseEvent, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "ExecuteUbergraph_UMG_BioLab_UpgradeSlotSelector");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_ExecuteUbergraph_UMG_BioLab_UpgradeSlotSelector_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades = CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades;
	Parms.CallFunc_GetLivingItemUpgradesStruct_Paths = CallFunc_GetLivingItemUpgradesStruct_Paths;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails = K2Node_MakeStruct_ConfirmationPopupDetails;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.K2Node_CustomEvent_SlotState = K2Node_CustomEvent_SlotState;
	Parms.CallFunc_CanChooseUpgrades_ReturnValue = CallFunc_CanChooseUpgrades_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_AddChildToHorizontalBox_ReturnValue = CallFunc_AddChildToHorizontalBox_ReturnValue;
	Parms.K2Node_CustomEvent_Upgrade_2 = K2Node_CustomEvent_Upgrade_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface = K2Node_DynamicCast_AsUIController_Interface;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetPlayerDataComponent_ReturnValue = CallFunc_GetPlayerDataComponent_ReturnValue;
	Parms.CallFunc_GetUserInterface_UserInterface = CallFunc_GetUserInterface_UserInterface;
	Parms.CallFunc_ClientOnly_CanAffordWorkshopCosts_ReturnValue = CallFunc_ClientOnly_CanAffordWorkshopCosts_ReturnValue;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget = CallFunc_GetConfirmationWindow_ConfirmationWidget;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.K2Node_DynamicCast_AsUIController_Interface_1 = K2Node_DynamicCast_AsUIController_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetUserInterface_UserInterface_1 = CallFunc_GetUserInterface_UserInterface_1;
	Parms.CallFunc_GetConfirmationWindow_ConfirmationWidget_1 = CallFunc_GetConfirmationWindow_ConfirmationWidget_1;
	Parms.K2Node_CustomEvent_Upgrade_1 = K2Node_CustomEvent_Upgrade_1;
	Parms.K2Node_CustomEvent_Upgrade = K2Node_CustomEvent_Upgrade;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_MouseEvent = K2Node_Event_MouseEvent;
	Parms.K2Node_MakeStruct_ConfirmationPopupDetails_1 = K2Node_MakeStruct_ConfirmationPopupDetails_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnSlotUnfocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotSelector_C::OnSlotUnfocused__DelegateSignature(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "OnSlotUnfocused__DelegateSignature");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_OnSlotUnfocused__DelegateSignature_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnSlotFocused__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotSelector_C::OnSlotFocused__DelegateSignature(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "OnSlotFocused__DelegateSignature");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_OnSlotFocused__DelegateSignature_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnChoiceUnhovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotSelector_C::OnChoiceUnhovered__DelegateSignature(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "OnChoiceUnhovered__DelegateSignature");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_OnChoiceUnhovered__DelegateSignature_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnChoiceHovered__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotSelector_C::OnChoiceHovered__DelegateSignature(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "OnChoiceHovered__DelegateSignature");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_OnChoiceHovered__DelegateSignature_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.OnShowChoices__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotSelector_C::OnShowChoices__DelegateSignature(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "OnShowChoices__DelegateSignature");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_OnShowChoices__DelegateSignature_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_UpgradeSlotSelector.UMG_BioLab_UpgradeSlotSelector_C.CommitSlotChange__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_UpgradeSlotSelector_C::CommitSlotChange__DelegateSignature(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_UpgradeSlotSelector_C", "CommitSlotChange__DelegateSignature");

	Params::UUMG_BioLab_UpgradeSlotSelector_C_CommitSlotChange__DelegateSignature_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}

}



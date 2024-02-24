#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C
// (None)

class UClass* UUMG_BioLab_CustomisationPanel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BioLab_CustomisationPanel_C");

	return Clss;
}


// UMG_BioLab_CustomisationPanel_C UMG_BioLab_CustomisationPanel.Default__UMG_BioLab_CustomisationPanel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BioLab_CustomisationPanel_C* UUMG_BioLab_CustomisationPanel_C::GetDefaultObj()
{
	static class UUMG_BioLab_CustomisationPanel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BioLab_CustomisationPanel_C*>(UUMG_BioLab_CustomisationPanel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.SelectItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemData                   Item                                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)

void UUMG_BioLab_CustomisationPanel_C::SelectItem(const struct FItemData& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_CustomisationPanel_C", "SelectItem");

	Params::UUMG_BioLab_CustomisationPanel_C_SelectItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.OnShowChoices
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_CustomisationPanel_C::OnShowChoices(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_CustomisationPanel_C", "OnShowChoices");

	Params::UUMG_BioLab_CustomisationPanel_C_OnShowChoices_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.OnChoiceHovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_CustomisationPanel_C::OnChoiceHovered(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_CustomisationPanel_C", "OnChoiceHovered");

	Params::UUMG_BioLab_CustomisationPanel_C_OnChoiceHovered_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.OnChoiceUnhovered
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_CustomisationPanel_C::OnChoiceUnhovered(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_CustomisationPanel_C", "OnChoiceUnhovered");

	Params::UUMG_BioLab_CustomisationPanel_C_OnChoiceUnhovered_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.CommitSlotChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleUpgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_CustomisationPanel_C::CommitSlotChange(int32 SlotIndex, const struct FLivingItemUpgradesRowHandle& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_CustomisationPanel_C", "CommitSlotChange");

	Params::UUMG_BioLab_CustomisationPanel_C_CommitSlotChange_Params Parms{};

	Parms.SlotIndex = SlotIndex;
	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.OnInitialized
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BioLab_CustomisationPanel_C::OnInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_CustomisationPanel_C", "OnInitialized");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.OnSlotFocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_CustomisationPanel_C::OnSlotFocused(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_CustomisationPanel_C", "OnSlotFocused");

	Params::UUMG_BioLab_CustomisationPanel_C_OnSlotFocused_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.OnSlotUnfocused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              SlotIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_BioLab_CustomisationPanel_C::OnSlotUnfocused(int32 SlotIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_CustomisationPanel_C", "OnSlotUnfocused");

	Params::UUMG_BioLab_CustomisationPanel_C_OnSlotUnfocused_Params Parms{};

	Parms.SlotIndex = SlotIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BioLab_CustomisationPanel.UMG_BioLab_CustomisationPanel_C.ExecuteUbergraph_UMG_BioLab_CustomisationPanel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemData                   K2Node_CustomEvent_Item                                          (ConstParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SlotIndex_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SlotIndex_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleK2Node_CustomEvent_Upgrade_2                                     (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SlotIndex_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleK2Node_CustomEvent_Upgrade_1                                     (NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SlotIndex_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemUpgradesRowHandleK2Node_CustomEvent_Upgrade                                       (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// struct FLivingItemUpgradeData      CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades          (None)
// enum class EValid                  CallFunc_GetLivingItemUpgradesStruct_Paths                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FLivingItemSlotState>CallFunc_GetLivingItemSlotStates_Slots                           (ReferenceParm)
// bool                               CallFunc_GetLivingItemSlotStates_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   K2Node_Copy_ReturnValue                                          (ContainsInstancedReference)
// class UUMG_BioLab_UpgradeSlotSelector_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EValid                  CallFunc_GetIcarusPlayerController_IsValid                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AIcarusPlayerController*     CallFunc_GetIcarusPlayerController_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerDataComponent*        CallFunc_GetPlayerDataComponent_ReturnValue                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLivingItemSlotState        CallFunc_Array_Get_Item_1                                        (None)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_ClientOnly_PurchaseItemUpdate_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   K2Node_Copy_ReturnValue_1                                        (ContainsInstancedReference)
// class ABP_LivingItemPreview_C*     CallFunc_GetActorOfClass_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FAnchors                    K2Node_MakeStruct_Anchors                                        (NoDestructor)
// class UUMG_BioLab_UpgradeSlotSelector_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// struct FVector2D                   CallFunc_GetBaseSize_BaseSize                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_LivingItemPreview_C*     CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAnchors                    K2Node_MakeStruct_Anchors_1                                      (NoDestructor)
// class UUMG_WirePin_C*              CallFunc_Create_ReturnValue_1                                    (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPinSize_Size                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_WirePin_C*              CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Divide_Vector2DFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Subtract_Vector2DVector2D_ReturnValue_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_AddChildToCanvas_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_SlotIndex_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetLivingItemUpgrade_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              K2Node_CustomEvent_SlotIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// class UUMG_BioLab_UpgradeSlotSelector_C*CallFunc_Array_Get_Item_3                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetLivingItemUpgrade_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMG_BioLab_UpgradeSlotSelector_C*CallFunc_Array_Get_Item_4                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMG_BioLab_UpgradeSlotSelector_C*CallFunc_Array_Get_Item_5                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BioLab_CustomisationPanel_C::ExecuteUbergraph_UMG_BioLab_CustomisationPanel(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FItemData& K2Node_CustomEvent_Item, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 K2Node_CustomEvent_SlotIndex_5, int32 K2Node_CustomEvent_SlotIndex_4, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade_2, int32 K2Node_CustomEvent_SlotIndex_3, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade_1, int32 K2Node_CustomEvent_SlotIndex_2, const struct FLivingItemUpgradesRowHandle& K2Node_CustomEvent_Upgrade, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FLivingItemUpgradeData& CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades, enum class EValid CallFunc_GetLivingItemUpgradesStruct_Paths, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<struct FLivingItemSlotState>& CallFunc_GetLivingItemSlotStates_Slots, bool CallFunc_GetLivingItemSlotStates_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, const struct FItemData& K2Node_Copy_ReturnValue, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, int32 Temp_int_Array_Index_Variable_1, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, const struct FLivingItemSlotState& CallFunc_Array_Get_Item_1, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_ClientOnly_PurchaseItemUpdate_ReturnValue, const struct FItemData& K2Node_Copy_ReturnValue_1, class ABP_LivingItemPreview_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Create_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FVector2D& CallFunc_GetBaseSize_BaseSize, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue, class ABP_LivingItemPreview_C* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue, const struct FAnchors& K2Node_MakeStruct_Anchors_1, class UUMG_WirePin_C* CallFunc_Create_ReturnValue_1, const struct FVector2D& CallFunc_GetPinSize_Size, class UUMG_WirePin_C* CallFunc_Array_Get_Item_2, const struct FVector2D& CallFunc_Divide_Vector2DFloat_ReturnValue_1, const struct FVector2D& CallFunc_Subtract_Vector2DVector2D_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 CallFunc_Array_Add_ReturnValue_1, class UCanvasPanelSlot* CallFunc_AddChildToCanvas_ReturnValue_1, int32 K2Node_CustomEvent_SlotIndex_1, bool CallFunc_SetLivingItemUpgrade_ReturnValue, int32 K2Node_CustomEvent_SlotIndex, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Array_Get_Item_3, bool CallFunc_SetLivingItemUpgrade_ReturnValue_1, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Array_Get_Item_4, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_3, class UUMG_BioLab_UpgradeSlotSelector_C* CallFunc_Array_Get_Item_5, bool CallFunc_Less_IntInt_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BioLab_CustomisationPanel_C", "ExecuteUbergraph_UMG_BioLab_CustomisationPanel");

	Params::UUMG_BioLab_CustomisationPanel_C_ExecuteUbergraph_UMG_BioLab_CustomisationPanel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.K2Node_CustomEvent_SlotIndex_5 = K2Node_CustomEvent_SlotIndex_5;
	Parms.K2Node_CustomEvent_SlotIndex_4 = K2Node_CustomEvent_SlotIndex_4;
	Parms.K2Node_CustomEvent_Upgrade_2 = K2Node_CustomEvent_Upgrade_2;
	Parms.K2Node_CustomEvent_SlotIndex_3 = K2Node_CustomEvent_SlotIndex_3;
	Parms.K2Node_CustomEvent_Upgrade_1 = K2Node_CustomEvent_Upgrade_1;
	Parms.K2Node_CustomEvent_SlotIndex_2 = K2Node_CustomEvent_SlotIndex_2;
	Parms.K2Node_CustomEvent_Upgrade = K2Node_CustomEvent_Upgrade;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades = CallFunc_GetLivingItemUpgradesStruct_LivingItemUpgrades;
	Parms.CallFunc_GetLivingItemUpgradesStruct_Paths = CallFunc_GetLivingItemUpgradesStruct_Paths;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_GetLivingItemSlotStates_Slots = CallFunc_GetLivingItemSlotStates_Slots;
	Parms.CallFunc_GetLivingItemSlotStates_ReturnValue = CallFunc_GetLivingItemSlotStates_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_Copy_ReturnValue = K2Node_Copy_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetIcarusPlayerController_IsValid = CallFunc_GetIcarusPlayerController_IsValid;
	Parms.CallFunc_GetIcarusPlayerController_ReturnValue = CallFunc_GetIcarusPlayerController_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GetPlayerDataComponent_ReturnValue = CallFunc_GetPlayerDataComponent_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_ClientOnly_PurchaseItemUpdate_ReturnValue = CallFunc_ClientOnly_PurchaseItemUpdate_ReturnValue;
	Parms.K2Node_Copy_ReturnValue_1 = K2Node_Copy_ReturnValue_1;
	Parms.CallFunc_GetActorOfClass_ReturnValue = CallFunc_GetActorOfClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors = K2Node_MakeStruct_Anchors;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.CallFunc_GetBaseSize_BaseSize = CallFunc_GetBaseSize_BaseSize;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue = CallFunc_Divide_Vector2DFloat_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue = CallFunc_Subtract_Vector2DVector2D_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_AddChildToCanvas_ReturnValue = CallFunc_AddChildToCanvas_ReturnValue;
	Parms.K2Node_MakeStruct_Anchors_1 = K2Node_MakeStruct_Anchors_1;
	Parms.CallFunc_Create_ReturnValue_1 = CallFunc_Create_ReturnValue_1;
	Parms.CallFunc_GetPinSize_Size = CallFunc_GetPinSize_Size;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Divide_Vector2DFloat_ReturnValue_1 = CallFunc_Divide_Vector2DFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_Vector2DVector2D_ReturnValue_1 = CallFunc_Subtract_Vector2DVector2D_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_AddChildToCanvas_ReturnValue_1 = CallFunc_AddChildToCanvas_ReturnValue_1;
	Parms.K2Node_CustomEvent_SlotIndex_1 = K2Node_CustomEvent_SlotIndex_1;
	Parms.CallFunc_SetLivingItemUpgrade_ReturnValue = CallFunc_SetLivingItemUpgrade_ReturnValue;
	Parms.K2Node_CustomEvent_SlotIndex = K2Node_CustomEvent_SlotIndex;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_SetLivingItemUpgrade_ReturnValue_1 = CallFunc_SetLivingItemUpgrade_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Array_Get_Item_5 = CallFunc_Array_Get_Item_5;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}



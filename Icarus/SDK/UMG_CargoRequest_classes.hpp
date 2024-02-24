#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x2C0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_CargoRequest.UMG_CargoRequest_C
class UUMG_CargoRequest_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      AnimateIn;                                         // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UUMG_Inventory_C*                      MainInventory;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  RequestButton;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Rerequest;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DropCargo_C*                      UMG_DropCargo;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_InsurancePanel_C*                 UMG_InsurancePanel;                                // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ItemsOnDropsList_C*               UMG_ItemsOnDropsList;                              // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnRequestButtonClicked;                            // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         RequestButtonLockedByTimer;                        // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6327[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UInventory*                            CargoInventory;                                    // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_CargoRequest_C* GetDefaultObj();

	void GetSelectedLoadoutData(struct FPlayerLoadoutData* LoadoutData, const TArray<struct FItemData>& Items, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, bool CallFunc_GetInsuranceEnabled_Insured, const struct FPlayerLoadoutData& K2Node_MakeStruct_PlayerLoadoutData, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, int32 CallFunc_Array_Length_ReturnValue, const struct FInventorySlot& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess_1);
	void GetInsuranceEnabled(bool* Insured, bool CallFunc_GetInsuranceEnabled_Insured);
	void PlayOpenAnimation();
	void Construct();
	void InitInventory(class UInventory* CargoInventory, class UInventory* MetaInventory);
	void BndEvt__UMG_CargoRequest_RequestButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void UpdateRequestTime(class FText RemainingTimeText);
	void SetRequestTimeVisibility(bool Visible);
	void SetRequestButtonEnabled(bool Enabled);
	void UpdateRequestButtonEnabled();
	void OnCargoInventoryItemChanged(class UInventory* Inventory, int32 Location);
	void SetInsuranceLocked(bool Locked);
	void ExecuteUbergraph_UMG_CargoRequest(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, const struct FPlayerLoadoutData& CallFunc_GetCurrentLoadout_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UInventory* K2Node_CustomEvent_CargoInventory, class UInventory* K2Node_CustomEvent_MetaInventory, enum class ESlateVisibility Temp_byte_Variable_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, class FText K2Node_CustomEvent_RemainingTimeText, bool Temp_bool_Variable, bool K2Node_CustomEvent_Visible, bool K2Node_CustomEvent_Enabled, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_HasItems_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, bool K2Node_CustomEvent_Locked);
	void OnRequestButtonClicked__DelegateSignature();
};

}



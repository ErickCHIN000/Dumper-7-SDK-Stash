#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x71 (0x2D1 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ContainerInventory.UMG_ContainerInventory_C
class UUMG_ContainerInventory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_Inventory_C*                      Inventory;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              InventoryOverlay;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Sort;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 TakeAllButtonInput;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DarkTitlebar_C*                   UMG_DarkTitlebar;                                  // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Sort_C*                           UMG_Sort;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                LinkedActor;                                       // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryIDEnum                      Inventory_ID;                                      // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ShowTakeAll;                                       // 0x2B0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4659[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            LootAll;                                           // 0x2B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UInventory*                            ContainerInventory;                                // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         TakeAllShouldSkipBags;                             // 0x2D0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UUMG_ContainerInventory_C* GetDefaultObj();

	void Initialise(const struct FItemData& ItemData);
	void LootAllKeyPress();
	void Destruct();
	void BndEvt__UMG_ContainerInventory_TakeAllButtonInput_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_ContainerInventory(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const struct FItemData& K2Node_CustomEvent_ItemData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FItemableData& CallFunc_GetItemableData_ItemableData, enum class EDataValid CallFunc_GetItemableData_Paths, bool K2Node_SwitchEnum_CmpSuccess, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool K2Node_SwitchEnum_CmpSuccess_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, class FText CallFunc_Format_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, bool K2Node_SwitchEnum_CmpSuccess_2, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FInventoryInfo& CallFunc_GetInventoryData_OutData, bool CallFunc_GetInventoryData_ReturnValue, bool CallFunc_IsRemoveOnly_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue, bool CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue_1, bool CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid_1, bool CallFunc_IsValid_ReturnValue_2, const struct FInventoryIDEnum& CallFunc_GetInventoryID_ReturnValue, class UInventory* CallFunc_GetInventoryContainer_Inventory, enum class EDataValid CallFunc_GetInventoryContainer_Paths, bool K2Node_SwitchEnum_CmpSuccess_3, bool K2Node_Event_IsDesignTime);
	void LootAll__DelegateSignature();
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2E0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_DeviceInventory.UMG_DeviceInventory_C
class UUMG_DeviceInventory_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUMG_Inventory_C*                      Inventory;                                         // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              InventoryOverlay;                                  // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_Sort;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 TakeAllButtonInput;                                // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Capacity;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DarkTitlebar_C*                   UMG_DarkTitlebar;                                  // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FillableProgressBar_C*            UMG_FillableProgressBar;                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Sort_C*                           UMG_Sort;                                          // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AActor*                                LinkedActor;                                       // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FInventoryIDEnum                      Inventory_ID;                                      // 0x2B0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         ShowTakeAll;                                       // 0x2C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2096[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            LootAll;                                           // 0x2C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	struct FTimerHandle                          UpdateFillableTimer;                               // 0x2D8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_DeviceInventory_C* GetDefaultObj();

	void Initialise(class AActor* LinkedActor);
	void BndEvt__TakeAllButtonInput_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void LootAllKeyPress();
	void Destruct();
	void UpdateFillable();
	void ExecuteUbergraph_UMG_DeviceInventory(int32 EntryPoint, class AActor* K2Node_CustomEvent_LinkedActor, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, const struct FFMODEventInstance& CallFunc_PlayEvent2D_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_2, class UInventory* CallFunc_GetInventory_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, bool CallFunc_IsValid_ReturnValue_4, const struct FInventoryInfo& CallFunc_GetInventoryData_OutData, bool CallFunc_GetInventoryData_ReturnValue, bool CallFunc_IsRemoveOnly_ReturnValue, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue, bool CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValid_ReturnValue_5, class ABP_IcarusPlayerControllerSurvival_C* CallFunc_GetIcarusPlayerControllerSurvivalBP_ReturnValue_1, bool CallFunc_GetIcarusPlayerControllerSurvivalBP_Valid_1, bool CallFunc_IsValid_ReturnValue_6, enum class EValid CallFunc_GetTrait_Paths_2, class UFillableComponent* CallFunc_GetTrait_ReturnValue_2, int32 CallFunc_GetStoredUnits_ReturnValue, const struct FFillableData& CallFunc_GetFillableData_OutData, bool CallFunc_GetFillableData_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, enum class EIcarusResourceType CallFunc_Array_Get_Item, class FText CallFunc_Format_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void LootAll__DelegateSignature();
};

}



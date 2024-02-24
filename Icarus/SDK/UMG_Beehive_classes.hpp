#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0x338 - 0x280)
// WidgetBlueprintGeneratedClass UMG_Beehive.UMG_Beehive_C
class UUMG_Beehive_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      ShelterWarning;                                    // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OpenMenu;                                          // 0x290(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      DeviceWarningPulse;                                // 0x298(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            BenchName;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BenchName_1;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  CloseButton;                                       // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  EnergyActivationButton;                            // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ExtractorUpgrade;                                  // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_105;                                         // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ResourcesPerMin;                                   // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ResourcesPerMin_1;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BeehiveBreeding_C*                UMG_BeehiveBreeding;                               // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BeehiveInventory_C*               UMG_BeehiveInventory;                              // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BeehiveUpgradeLock_C*             UMG_BeehiveUpgradeLock;                            // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BeehiveUpgrades_C*                UMG_BeehiveUpgrades;                               // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_DeployableModifiersList_C*        UMG_DeployableModifiersList_C_1;                   // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ExtractionElement_C*              UMG_ExtractionElement;                             // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ExtractionElement_C*              UMG_ExtractionElement_1;                           // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_FuelInventory_C*                  UMG_FuelInventory;                                 // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ItemDisplay_C*                    UMG_ItemDisplay;                                   // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_ItemDisplay_C*                    UMG_ItemDisplay_1;                                 // 0x328(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_PlayerInventory_C*                UMG_PlayerInventory;                               // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_Beehive_C* GetDefaultObj();

	void UpdateEnergyState(enum class EValid CallFunc_GetTrait_Paths, class UEnergyComponent* CallFunc_GetTrait_ReturnValue, bool CallFunc_HasConnectedNetwork_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateUpgrades(class UInventory* Inventory, bool Extraction, bool Breeding, bool U2, bool U1, const struct FItemData& CallFunc_GetItem_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& CallFunc_GetItem_ReturnValue_1, const struct FItemData& CallFunc_GetItem_ReturnValue_2, enum class EDataValid CallFunc_ItemDataValid_Paths_1, enum class EDataValid CallFunc_ItemDataValid_Paths_2, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, const struct FItemData& CallFunc_GetItem_ReturnValue_3, enum class EDataValid CallFunc_ItemDataValid_Paths_3, bool K2Node_SwitchEnum_CmpSuccess_3);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void CloseUI(class AActor* Actor, enum class EEndPlayReason EndPlayReason);
	void Construct();
	void OnInventoryItemChanged(class UInventory* Inventory, int32 Location);
	void BndEvt__CloseButton_K2Node_ComponentBoundEvent_7_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__EnergyActivationButton_K2Node_ComponentBoundEvent_4_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void OnResourceNetworkUpdated();
	void ExecuteUbergraph_UMG_Beehive(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class AActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class ABP_Beehive_C* K2Node_DynamicCast_AsBP_Beehive, bool K2Node_DynamicCast_bSuccess, float CallFunc_Divide_FloatFloat_ReturnValue, class ABP_Beehive_C* K2Node_DynamicCast_AsBP_Beehive_1, bool K2Node_DynamicCast_bSuccess_1, class UInventory* K2Node_CustomEvent_Inventory, int32 K2Node_CustomEvent_Location, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class ABP_Beehive_C* K2Node_DynamicCast_AsBP_Beehive_2, bool K2Node_DynamicCast_bSuccess_2, class FText CallFunc_Format_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_2, class ABP_Beehive_C* K2Node_DynamicCast_AsBP_Beehive_3, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_Divide_FloatFloat_ReturnValue_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class ABP_Beehive_C* K2Node_DynamicCast_AsBP_Beehive_4, bool K2Node_DynamicCast_bSuccess_4, const struct FItemData& K2Node_MakeStruct_ItemData, const struct FItemData& K2Node_MakeStruct_ItemData_1, float CallFunc_Divide_FloatFloat_ReturnValue_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class ABP_Beehive_C* K2Node_DynamicCast_AsBP_Beehive_5, bool K2Node_DynamicCast_bSuccess_5, float CallFunc_Divide_FloatFloat_ReturnValue_5, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, enum class ESlateVisibility K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess_6, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, bool CallFunc_IsValid_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UEnergyComponent* CallFunc_GetTrait_ReturnValue_1, class UNetworkProxyComponent* CallFunc_GetNetworkProxyComponent_ReturnValue, class UBP_NetworkProxyComponent_C* K2Node_DynamicCast_AsBP_Network_Proxy_Component, bool K2Node_DynamicCast_bSuccess_7, bool CallFunc_Not_PreBool_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1, bool K2Node_SwitchEnum_CmpSuccess_2, enum class EValid CallFunc_GetTrait_Paths_2, class UEnergyComponent* CallFunc_GetTrait_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_3);
};

}



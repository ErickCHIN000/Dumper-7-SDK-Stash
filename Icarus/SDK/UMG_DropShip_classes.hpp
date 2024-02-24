#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC0 (0x340 - 0x280)
// WidgetBlueprintGeneratedClass UMG_DropShip.UMG_DropShip_C
class UUMG_DropShip_C : public UUMG_IcarusLinkedActorPanel_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                AnglePiece;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Inventory_C*                      Backpack;                                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  CloseButton;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            DropshipInventoryPrompt;                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Inventory_C*                      Equipment;                                         // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Gradient;                                          // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_106;                                         // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_Inventory_C*                      Loadout;                                           // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            MissionEndPrompt;                                  // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_BasicButton_2_C*                  Return;                                            // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUMG_IconTextButton_C*                 TakeAllButton;                                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FInventoryIDEnum                      Inventory_ID;                                      // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FFactionMissionsRowHandle             Mission;                                           // 0x2F8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FProspectListRowHandle                Mission_Prospect;                                  // 0x310(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FSessionFlagsRowHandle                Session_Flag;                                      // 0x328(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_DropShip_C* GetDefaultObj();

	void GetIcarusMap(struct FTalentArchetypesRowHandle* Archetype, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, const struct FIcarusProspect& CallFunc_GetActiveProspectData_ReturnValue, bool CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue, bool CallFunc_EqualEqual_FTerrainsRowHandleFTerrainsRowHandle_ReturnValue_1);
	void IsHostWithClients(bool* Result, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsLocalPlayerController_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess_1);
	void Construct();
	void BndEvt__Return_K2Node_ComponentBoundEvent_2_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void BndEvt__UMG_BasicButton_2_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(class UUMG_ButtonBase_C* Button);
	void ReturnToStation();
	void HostConfirmation();
	void DoNothing();
	void BndEvt__UMG_DropShip_TakeAllButton_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void ExecuteUbergraph_UMG_DropShip(int32 EntryPoint, enum class EValid CallFunc_GetIcarusPlayerController_IsValid, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class UProspectSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FProspectListRowHandle& CallFunc_GetActiveProspectRowHandle_ReturnValue, class FText Temp_wildcard_Variable, const struct FIcarusProspect& CallFunc_GetProspectListStruct_ProspectList, enum class EValid CallFunc_GetProspectListStruct_Paths, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool K2Node_SwitchEnum_CmpSuccess_1, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button_1, enum class EValid CallFunc_GetTrait_Paths, class UInventoryComponent* CallFunc_GetTrait_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UInventory* CallFunc_GetInventory_ReturnValue, class UInventory* CallFunc_GetInventory_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool K2Node_SwitchEnum_CmpSuccess_2, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, enum class EValid CallFunc_GetTrait_Paths_1, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_1, class UInventory* CallFunc_GetInventory_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_3, class UUMG_ButtonBase_C* K2Node_ComponentBoundEvent_Button, class FText CallFunc_MakeLiteralText_ReturnValue, class FText CallFunc_MakeLiteralText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_MakeLiteralText_ReturnValue_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails, class FText CallFunc_Format_ReturnValue_1, bool CallFunc_IsHostWithClients_Result, const struct FConfirmationPopupDetails& K2Node_MakeStruct_ConfirmationPopupDetails_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_2, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_2, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_1, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget, class UUMG_ConfirmationPopup_C* CallFunc_GetConfirmationWindow_ConfirmationWidget_1, bool K2Node_SwitchEnum_CmpSuccess_4, bool K2Node_SwitchEnum_CmpSuccess_5, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_3, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_3, enum class EValid CallFunc_GetIcarusPlayerController_IsValid_4, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue_4, class AIcarusPlayerControllerSurvival* K2Node_DynamicCast_AsIcarus_Player_Controller_Survival, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_2, bool K2Node_DynamicCast_bSuccess_3, TScriptInterface<class IUIControllerInterface_C> K2Node_DynamicCast_AsUIController_Interface_3, bool K2Node_DynamicCast_bSuccess_4, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_2, class UUMG_UserInterface_Base_C* CallFunc_GetUserInterface_UserInterface_3, bool K2Node_SwitchEnum_CmpSuccess_6, bool K2Node_SwitchEnum_CmpSuccess_7, enum class EValid CallFunc_GetTrait_Paths_2, class UInventoryComponent* CallFunc_GetTrait_ReturnValue_2, bool K2Node_SwitchEnum_CmpSuccess_8, class UInventory* CallFunc_GetInventory_ReturnValue_3);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x480 - 0x468)
// BlueprintGeneratedClass BP_ActionableBehaviour_SimplePlaceWithVariants.BP_ActionableBehaviour_SimplePlaceWithVariants_C
class UBP_ActionableBehaviour_SimplePlaceWithVariants_C : public UBP_ActionableBehaviour_SimplePlace_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x468(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UContextMenuWidget*                    CurrentRadialMenu;                                 // 0x470(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_IcarusPlayerCharacterSurvival_C*   OwningPlayer;                                      // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ActionableBehaviour_SimplePlaceWithVariants_C* GetDefaultObj();

	void CreateMenuItem(class AContextMenuFactory* ContextMenuFactory, struct FContextMenuItemData& ContextMenuItemData, int32 ItemIndex, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void GetContextMenuItems(TArray<struct FContextMenuItemData>* MenuItems);
	void GetContextMenuInfo(class FText* MenuName, TSoftObjectPtr<class UTexture2D>* MenuIcon, class AActor* CallFunc_GetOwner_ReturnValue, enum class EValid CallFunc_GetTrait_Paths, class UItemableComponent* CallFunc_GetTrait_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemableData& CallFunc_GetItemableData_OutData, bool CallFunc_GetItemableData_ReturnValue);
	void LocalOrServer(bool* Local, bool* Server, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsLocallyControlled_ReturnValue);
	void SetupPlayer(class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABP_IcarusPlayerCharacterSurvival_C* K2Node_DynamicCast_AsBP_Icarus_Player_Character_Survival, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void OpenRadialMenu();
	void CloseRadialMenu();
	void MenuItemSelected(class FName ItemIdentifier, int32 ItemPayload);
	void ExecuteUbergraph_BP_ActionableBehaviour_SimplePlaceWithVariants(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, class UUMG_ContextMenu_Radial_C* K2Node_DynamicCast_AsUMG_Context_Menu_Radial, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, bool CallFunc_LocalOrServer_Local, bool CallFunc_LocalOrServer_Server, bool CallFunc_IsValid_ReturnValue_1, class AIcarusPlayerController* CallFunc_GetIcarusPlayerController_ReturnValue, class AContextMenuFactory* CallFunc_CreateContextMenu_ReturnValue, bool CallFunc_LocalOrServer_Local_1, bool CallFunc_LocalOrServer_Server_1, class UContextMenuWidget* CallFunc_ShowAsRadialMenu_ReturnValue, TArray<struct FContextMenuItemData>& CallFunc_GetContextMenuItems_MenuItems, class FName K2Node_CustomEvent_ItemIdentifier, int32 K2Node_CustomEvent_ItemPayload, const struct FContextMenuItemData& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_GetContextMenuInfo_MenuName, TSoftObjectPtr<class UTexture2D> CallFunc_GetContextMenuInfo_MenuIcon, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}



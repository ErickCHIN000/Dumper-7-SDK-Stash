#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2B (0x28B - 0x260)
// WidgetBlueprintGeneratedClass UMG_ItemsOnDropsList.UMG_ItemsOnDropsList_C
class UUMG_ItemsOnDropsList_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UVerticalBox*                          ItemsOnDropsContainer;                             // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ItemsOnDropsPanel;                                 // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               NoItemsDeployedMessage;                            // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_ClickToReclaim;                               // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Initialised;                                       // 0x288(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EDITOR_ShowFakeProspectData;                       // 0x289(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CanReclaimLoadouts;                                // 0x28A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_ItemsOnDropsList_C* GetDefaultObj();

	void LoadOnDropItems(bool HasItems, class FText CharacterName, const TArray<struct FItemData>& LoadoutItems, enum class ESlateVisibility Temp_byte_Variable, class UUMG_ItemsOnDrop_C* CallFunc_Create_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class ESlateVisibility K2Node_Select_Default, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, class UPlayerDataComponent* CallFunc_GetPlayerDataComponent_ReturnValue, TArray<struct FPlayerLoadoutData>& CallFunc_GetLoadoutRecords_ReturnValue, const struct FPlayerLoadoutData& CallFunc_Array_Get_Item, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class EDataValid CallFunc_ItemDataValid_Paths, bool K2Node_SwitchEnum_CmpSuccess);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void PreConstruct(bool IsDesignTime);
	void OnLoadoutInsuranceClaimed();
	void Construct();
	void OnLoadoutDeleted();
	void RebuildLoadoutList();
	void ExecuteUbergraph_UMG_ItemsOnDropsList(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_ItemsOnDrop_C* CallFunc_Create_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class AIcarusPlayerCharacter* K2Node_DynamicCast_AsIcarus_Player_Character, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UUMG_ItemsOnDrop_C* CallFunc_Create_ReturnValue_1, const struct FProspectInfo& K2Node_MakeStruct_ProspectInfo, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue_1, const struct FItemData& K2Node_MakeStruct_ItemData, const struct FItemData& K2Node_MakeStruct_ItemData_1, const struct FProspectInfo& K2Node_MakeStruct_ProspectInfo_1, TArray<struct FItemData>& K2Node_MakeArray_Array, const struct FItemData& K2Node_MakeStruct_ItemData_2, const struct FLastProspectHostInfo& K2Node_MakeStruct_LastProspectHostInfo, TArray<struct FItemData>& K2Node_MakeArray_Array_1, const struct FPlayerLoadoutData& K2Node_MakeStruct_PlayerLoadoutData, const struct FPlayerLoadoutData& K2Node_MakeStruct_PlayerLoadoutData_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, class UWidget* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UUMG_ItemsOnDrop_C* K2Node_DynamicCast_AsUMG_Items_on_Drop, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_Less_IntInt_ReturnValue);
};

}



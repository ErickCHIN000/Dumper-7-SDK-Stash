#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x360 - 0x260)
// WidgetBlueprintGeneratedClass WBP_SandboxCollapsed.WBP_SandboxCollapsed_C
class UWBP_SandboxCollapsed_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                BGfade;                                            // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CampaignProgressIndicator_C*      DungeonProgress;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            GreatPearlRequirement;                             // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CampaignProgressIndicator_C*      LoreProgress;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_CampaignProgressIndicator_C*      MirabilisProgress;                                 // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        PreviousZoneRequirements;                          // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        SandboxCategories;                                 // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScaleBox*                             ScaleBox_0;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TopRowLocked;                                      // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        TopRowUnlocked;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ArrowsLeft_C*                     WBP_ArrowsLeft;                                    // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ArrowsRight_C*                    WBP_ArrowsRight;                                   // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ExpandCollapseButton_C*           WBP_ExpandCollapseButton;                          // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SandboxCollapsedTab_C*            WBP_SandboxCollapsedTab;                           // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SandboxCollapsedTab_C*            WBP_SandboxCollapsedTab_1;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SandboxCollapsedTab_C*            WBP_SandboxCollapsedTab_2;                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SandboxCollapsedTab_C*            WBP_SandboxCollapsedTab_3;                         // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SandboxCollapsedTab_C*            WBP_SandboxCollapsedTab_4;                         // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_SandboxCollapsedTab_C*            WBP_SandboxCollapsedTab_5;                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ZoneIcon;                                          // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ZoneTitle;                                         // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ZoneTitleLocked;                                   // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UZoneDataEntry*                        PreviousZone;                                      // 0x318(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            PreviousZoneClicked;                               // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            NextZoneClicked;                                   // 0x330(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            ExpandClicked;                                     // 0x340(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            SandboxCategoryClicked;                            // 0x350(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWBP_SandboxCollapsed_C* GetDefaultObj();

	void OpenSandboxCategory(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE);
	void DisplayZone(class UZoneDataEntry* Zone_Data, class UZoneDataEntry* ZoneData, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class UGISProgression* CallFunc_GetGameInstanceSubsystem_ReturnValue, int32 Temp_int_Array_Index_Variable, enum class ESlateVisibility Temp_byte_Variable_3, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, bool Temp_bool_Variable_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility K2Node_Select_Default, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character, bool K2Node_DynamicCast_bSuccess, class UZoneData* CallFunc_GetZoneData_ReturnValue, class UCharMapComponent* CallFunc_GetMapComponent_ReturnValue, int32 CallFunc_GetDungeonCounts_MainNumerator, int32 CallFunc_GetDungeonCounts_MainDenominator, int32 CallFunc_GetDungeonCounts_OptionalNumerator, int32 CallFunc_GetDungeonCounts_OptionalDenominator, bool CallFunc_GetDungeonCounts_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UZoneDataEntry* CallFunc_ZoneIndex_to_Zone_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UWBP_SandboxCollapsedTab_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPuzzleDatabase* CallFunc_GetPuzzleDatabase_ReturnValue, TArray<class FString>& CallFunc_GetPuzzleTypesInZone_OutNames, TArray<enum class EPuzzleCategory>& CallFunc_GetAllDisplayTypeCategoriesForPuzzleTypes_ReturnValue, enum class EPuzzleCategory CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character_1, bool K2Node_DynamicCast_bSuccess_1, class UCharMapComponent* CallFunc_GetMapComponent_ReturnValue_1, int32 CallFunc_GetDungeonCounts_MainNumerator_1, int32 CallFunc_GetDungeonCounts_MainDenominator_1, int32 CallFunc_GetDungeonCounts_OptionalNumerator_1, int32 CallFunc_GetDungeonCounts_OptionalDenominator_1, bool CallFunc_GetDungeonCounts_ReturnValue_1, int32 CallFunc_GetLoreUnlockCounts_PickupNumerator, int32 CallFunc_GetLoreUnlockCounts_PickupDenominator, int32 CallFunc_GetLoreUnlockCounts_SandboxNumerator, int32 CallFunc_GetLoreUnlockCounts_SandboxDenominator, bool CallFunc_GetLoreUnlockCounts_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_3, enum class ESlateVisibility K2Node_Select_Default_1, int32 CallFunc_Add_IntInt_ReturnValue_4, int32 CallFunc_GetBlueOrbCounts_CampaignNumerator, int32 CallFunc_GetBlueOrbCounts_CampaignDenominator, int32 CallFunc_GetBlueOrbCounts_SideQuestNumerator, int32 CallFunc_GetBlueOrbCounts_SideQuestDenominator, int32 CallFunc_GetBlueOrbCounts_PuzzleNumerator, int32 CallFunc_GetBlueOrbCounts_PuzzleDenominator, bool CallFunc_GetBlueOrbCounts_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_5, int32 CallFunc_Add_IntInt_ReturnValue_6, int32 CallFunc_Add_IntInt_ReturnValue_7, int32 CallFunc_Add_IntInt_ReturnValue_8, class FText CallFunc_GetNumberedZoneName_ReturnValue, class FText CallFunc_GetNumberedZoneName_ReturnValue_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_2, class ASophiaCharacter* K2Node_DynamicCast_AsSophia_Character_2, bool K2Node_DynamicCast_bSuccess_2, class UCharMapComponent* CallFunc_GetMapComponent_ReturnValue_2, TArray<bool>& CallFunc_GetZoneUnlockStateByIndex_ReturnValue, bool CallFunc_Array_Get_Item_1);
	void BndEvt__WBP_SandboxCollapsed_WBP_ArrowsLeft_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature();
	void BndEvt__WBP_SandboxCollapsed_WBP_ArrowsRight_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature();
	void BndEvt__WBP_SandboxCollapsed_WBP_ExpandCollapseButton_K2Node_ComponentBoundEvent_3_Pressed__DelegateSignature();
	void ExecuteUbergraph_WBP_SandboxCollapsed(int32 EntryPoint);
	void SandboxCategoryClicked__DelegateSignature(enum class EPuzzleCategory Category, enum class EMainMapZoneName ZONE);
	void ExpandClicked__DelegateSignature();
	void NextZoneClicked__DelegateSignature();
	void PreviousZoneClicked__DelegateSignature();
};

}



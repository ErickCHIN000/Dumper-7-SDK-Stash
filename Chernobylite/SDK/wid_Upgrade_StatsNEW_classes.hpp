#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x168 (0x3C8 - 0x260)
// WidgetBlueprintGeneratedClass wid_Upgrade_StatsNEW.wid_Upgrade_StatsNEW_C
class UWid_Upgrade_StatsNEW_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWid_Upgrade_StatsNew_Entry_C*         ENTRY_AMMO;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Upgrade_StatsNew_Entry_C*         ENTRY_DAMAGE;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Upgrade_StatsNew_Entry_C*         ENTRY_RANGE;                                       // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Upgrade_StatsNew_Entry_C*         ENTRY_RECOIL;                                      // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_Upgrade_StatsNew_Entry_C*         ENTRY_SWAY;                                        // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_0;                                           // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_1;                                           // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCanvasPanel*                          MainPanel;                                         // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_0;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          Statistics;                                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_0;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_1;                                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	float                                        BottomOffset;                                      // 0x2C8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1563[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FInventoryEntry>               NewVar_0;                                          // 0x2D0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class FName>                          Array;                                             // 0x2E0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FString                                String;                                            // 0x2F0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	class FName                                  ReplacedPart;                                      // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UWid_Upgrade_StatsNew_Entry_C*> ChildRef;                                          // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FInventoryEntry                       Item;                                              // 0x318(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FInventoryEntry                       UpgradeReplacedName;                               // 0x348(0x30)(Edit, BlueprintVisible, DisableEditOnInstance)
	TMap<class FName, int32>                     StatMap;                                           // 0x378(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWid_Upgrade_StatsNEW_C* GetDefaultObj();

	void UpdateSize(const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_3, float CallFunc_Add_FloatFloat_ReturnValue_4, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_2, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, float CallFunc_Add_FloatFloat_ReturnValue_5, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void GetGlobalValueFromCurrentBuildID(class FName GlobalStatID, int32* Value, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_GetUpgradeInfo_isVaid, const struct FUpgradeEntry& CallFunc_GetUpgradeInfo_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue);
	void Update_CategoryEnter(class UWid_Upgrades_Main_C* InOuter);
	void Update_Craft(class UWid_Upgrades_Main_C* InOuter);
	void Update_Focus(class UWid_Upgrades_Main_C* InOuter, class UDataTable* InFocusedDatatable, class FName InFocusedRowName);
	void Construct();
	void ExecuteUbergraph_wid_Upgrade_StatsNEW(int32 EntryPoint, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, class UOverlaySlot* CallFunc_SlotAsOverlaySlot_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, class UWid_Upgrades_Main_C* K2Node_CustomEvent_InOuter_2, float CallFunc_Add_FloatFloat_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, class UWid_Upgrades_Main_C* K2Node_CustomEvent_InOuter_1, class UWid_Upgrades_Main_C* K2Node_CustomEvent_InOuter, class UDataTable* K2Node_CustomEvent_InFocusedDatatable, class FName K2Node_CustomEvent_InFocusedRowName);
};

}



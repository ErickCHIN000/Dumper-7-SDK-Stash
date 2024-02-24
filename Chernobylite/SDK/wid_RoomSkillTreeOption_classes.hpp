#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x5C8 (0x828 - 0x260)
// WidgetBlueprintGeneratedClass wid_RoomSkillTreeOption.wid_RoomSkillTreeOption_C
class UWid_RoomSkillTreeOption_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UBorder*                               Background;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          ResourcesBox;                                      // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ResourcesBoxTitle;                                 // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Title;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Upgrade1Img;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Upgrade1Text;                                      // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Upgrade2Img;                                       // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Upgrade2Text;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Upgrade3Img;                                       // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Upgrade3Text;                                      // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Upgrade4Img;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Upgrade4Text;                                      // 0x2C0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Upgrade5Img;                                       // 0x2C8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Upgrade5Text;                                      // 0x2D0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWid_SkillCost_C*                      Wid_SkillCost;                                     // 0x2D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         Selected;                                          // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Unlocked;                                          // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_C99[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BrushUnlockedSelected;                             // 0x2E8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BrushLockedSelected;                               // 0x370(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BrushUnlockedDeselected;                           // 0x3F8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BrushLockedDeselected;                             // 0x480(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UWid_RoomSkillTreeOption_C*            PreRequirement;                                    // 0x508(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UWid_RoomSkillTreeOption_C*            NeighbourDown;                                     // 0x510(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ActorFunctionName;                                 // 0x518(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Disabled;                                          // 0x520(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CB9[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BrushDisabledSelected;                             // 0x528(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BrushDisabledDeselected;                           // 0x5B0(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class UWid_RoomSkillTreeOption_C*>    ExcludingUpgrades;                                 // 0x638(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	class FText                                  Description;                                       // 0x648(0x18)(Edit, BlueprintVisible)
	TArray<struct FSt_ItemByEnumAndCount>        Cost;                                              // 0x660(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         NotEnoughResources;                                // 0x670(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CCE[0x7];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSlateBrush                           BrushUnlockedDeselectedNotEnoughResources;         // 0x678(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSlateBrush                           BrushUnlockedSelectedNotEnoughResources;           // 0x700(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FName                                  LevelName;                                         // 0x788(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LevelUnlocked;                                     // 0x790(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CDA[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UDataTable*                            Dictionary;                                        // 0x798(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DictionaryKeyName;                                 // 0x7A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FSt_ItemByEnumAndCount>        ReclaimValue;                                      // 0x7A8(0x10)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FSt_RoomUpgradeLevel                  RoomUpgradeData;                                   // 0x7B8(0x70)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWid_RoomSkillTreeOption_C* GetDefaultObj();

	void CalculateReclaimValue(TArray<struct FSt_ItemByEnumAndCount>& Cost, float Percentage_Reclaimed, float Round_down_to_dividor, TArray<struct FSt_ItemByEnumAndCount>* Reclaim_value, const TArray<struct FSt_ItemByEnumAndCount>& Result, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, const struct FSt_ItemByEnumAndCount& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, const struct FSt_ItemByEnumAndCount& K2Node_MakeStruct_st_ItemByEnumAndCount, int32 CallFunc_Array_Add_ReturnValue);
	void SetResourcesVisiblity(enum class ESlateVisibility NewVisibility);
	void GetNumAncestors(int32* Level, int32 Counter, class UWid_RoomSkillTreeOption_C* TmpNode, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1);
	void CanBeBought(bool* Can, int32 CallFunc_GetNumAncestors_Level, bool CallFunc_IsValid_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_DoesThePlayerHaveItems_Has_enough_items);
	struct FSlateColor GetColorAndOpacity_0(bool Temp_bool_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, const struct FSlateColor& K2Node_Select_Default);
	struct FSlateBrush GetBackground_0(bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, bool Temp_bool_Variable_8, const struct FSlateBrush& K2Node_Select_Default, const struct FSlateBrush& K2Node_Select_Default_1, const struct FSlateBrush& K2Node_Select_Default_2, const struct FSlateBrush& K2Node_Select_Default_3, int32 CallFunc_Add_IntInt_ReturnValue, const struct FSlateBrush& K2Node_Select_Default_4, int32 CallFunc_GetNumAncestors_Level, const struct FSlateBrush& K2Node_Select_Default_5, bool CallFunc_GreaterEqual_IntInt_ReturnValue, const struct FSlateBrush& K2Node_Select_Default_6, const struct FSlateBrush& K2Node_Select_Default_7, const struct FSlateBrush& K2Node_Select_Default_8);
	void PreConstruct(bool IsDesignTime);
	void Update();
	void ExecuteUbergraph_wid_RoomSkillTreeOption(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, bool K2Node_Event_IsDesignTime, const struct FSlateBrush& CallFunc_GetBackground_0_ReturnValue, const struct FSlateColor& CallFunc_GetColorAndOpacity_0_ReturnValue, class UWid_RoomSkillTreeOption_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, TArray<struct FSt_ItemByEnumAndCount>& CallFunc_CalculateReclaimValue_Reclaim_value, bool CallFunc_DoesThePlayerHaveItems_Has_enough_items, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, const struct FSlateBrush& CallFunc_GetBackground_0_ReturnValue_1, const struct FSt_RoomUpgrade& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FName CallFunc_GetLevelNameFromAsset_ReturnValue);
};

}



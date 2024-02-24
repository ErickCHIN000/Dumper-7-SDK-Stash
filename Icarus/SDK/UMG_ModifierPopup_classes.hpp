#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x284 (0x4E4 - 0x260)
// WidgetBlueprintGeneratedClass UMG_ModifierPopup.UMG_ModifierPopup_C
class UUMG_ModifierPopup_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               ModifierBackground;                                // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ModifierDescription;                               // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ModifierName;                                      // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          StatsList;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               TitleBorder;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FModifierStateData                    Modifier_Row;                                      // 0x290(0x250)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        CachedEffectiveness;                               // 0x4E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_ModifierPopup_C* GetDefaultObj();

	void ScaleStat(const struct FStatsEnum& StatEnum, int32 StatValue, int32* ScaledStat, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, bool CallFunc_EqualEqual_EnumEnum_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FCeil_ReturnValue, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1);
	void UpdateStats(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UUMG_StatDescription_C* CallFunc_Create_ReturnValue, bool CallFunc_HasAnyChildren_ReturnValue, TArray<int32>& CallFunc_Map_Values_Values, int32 CallFunc_Array_Get_Item, TArray<struct FStatsEnum>& CallFunc_Map_Keys_Keys, bool CallFunc_NotEqual_IntInt_ReturnValue, const struct FStatsEnum& CallFunc_Array_Get_Item_1, int32 CallFunc_ScaleStat_ScaledStat, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void UpdateEffectiveness(int32 Effectiveness, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void Construct();
	void ExecuteUbergraph_UMG_ModifierPopup(int32 EntryPoint, class FText CallFunc_TextToUpper_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}



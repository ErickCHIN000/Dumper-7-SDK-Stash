#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x2E0 - 0x260)
// WidgetBlueprintGeneratedClass WB_Stats.WB_Stats_C
class UWB_Stats_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      ConstructAnim;                                     // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_1;                                       // 0x270(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_2;                                       // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_3;                                       // 0x280(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_5;                                       // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_8;                                       // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_9;                                       // 0x298(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_13;                                      // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_14;                                      // 0x2A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_15;                                      // 0x2B0(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_17;                                      // 0x2B8(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component;                               // 0x2C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStatsManagerComponent_C*              StatsManager;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_Leveling_C*                        AC_Leveling;                                       // 0x2D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_CombatCharacter_C*                 Character_Ref;                                     // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWB_Stats_C* GetDefaultObj();

	class FText Get_CI(int32 CallFunc_Get_Current_Level_Level, class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText Get_Level(int32 CallFunc_Get_Current_Level_Level, class FText CallFunc_Conv_IntToText_ReturnValue);
	class FText Get_Gold(class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Block(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Mana(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Range_AttackSpeed(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Range_Damage(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Attack_Speed(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Damage(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Armor(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Stamina(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue);
	class FText Get_Health(float CallFunc_GetStatValue_Value, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void Construct();
	void ShowStatsWidget();
	void ExecuteUbergraph_WB_Stats(int32 EntryPoint, class UAC_Inventory_C* CallFunc_Get_AC_Inventory_AC_Inventory, bool Temp_bool_Variable, bool CallFunc_Not_PreBool_ReturnValue, class ABP_CombatCharacter_C* CallFunc_Get_Player_Reference_Player, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1);
};

}



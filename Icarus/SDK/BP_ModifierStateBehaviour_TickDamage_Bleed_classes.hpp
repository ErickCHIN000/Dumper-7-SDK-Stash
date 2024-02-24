#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x3A0 - 0x390)
// BlueprintGeneratedClass BP_ModifierStateBehaviour_TickDamage_Bleed.BP_ModifierStateBehaviour_TickDamage_Bleed_C
class UBP_ModifierStateBehaviour_TickDamage_Bleed_C : public UModifierStateComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x390(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class EIcarusDamageType                 DamageType;                                        // 0x398(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5BDD[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        StatUID;                                           // 0x39C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_ModifierStateBehaviour_TickDamage_Bleed_C* GetDefaultObj();

	bool ModifierRemoved(class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ModifierRemoved_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveStats_BP_ReturnValue);
	bool ModifierApplied(int32 CallFunc_RandomInteger_ReturnValue, TMap<struct FStatsEnum, int32> K2Node_MakeMap_Map, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_ModifierApplied_ReturnValue, class ABP_IcarusNPCGOAPCharacter_C* K2Node_DynamicCast_AsBP_Icarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_AddStats_BP_ReturnValue);
	void ModifierTick(float DeltaTime);
	void ExecuteUbergraph_BP_ModifierStateBehaviour_TickDamage_Bleed(int32 EntryPoint, const class FString& Temp_string_Variable, float K2Node_Event_DeltaTime, bool CallFunc_IsServer_ReturnValue, const struct FModifierStateData& CallFunc_GetModifierStateData_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FRandomRangeValue& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_DealFlatDamage_ReturnValue);
};

}



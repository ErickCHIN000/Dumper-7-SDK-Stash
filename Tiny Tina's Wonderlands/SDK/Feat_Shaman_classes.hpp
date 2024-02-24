#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0x464 - 0x440)
// BlueprintGeneratedClass Feat_Shaman.Feat_Shaman_C
class UFeat_Shaman_C : public U_Feat_Parent_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x440(0x8)(Transient, DuplicateTransient)
	struct FDataTableValueHandle                 StackDurationHandle;                               // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        StackDuration;                                     // 0x460(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UFeat_Shaman_C* GetDefaultObj();

	void OnActivated();
	void OakPassiveOnCausedElementalEffect(class AActor* Target, const struct FStatusEffectSpec& Spec);
	void ExecuteUbergraph_Feat_Shaman(int32 EntryPoint, class AActor* K2Node_Event_Target, const struct FStatusEffectSpec& K2Node_Event_Spec, float CallFunc_GetDataTableValueFromHandle_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FStatusEffectSpec& K2Node_MakeStruct_StatusEffectSpec, const struct FStatusEffectInstanceReference& CallFunc_AddStatusEffect_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x298 - 0x198)
// BlueprintGeneratedClass Ability_All_Melee_SnakeStick.Ability_All_Melee_SnakeStick_C
class UAbility_All_Melee_SnakeStick_C : public UAbility_Melee_HiltMod_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x198(0x8)(Transient, DuplicateTransient)
	struct FEnvQueryParams                       FindSpawnLoc;                                      // 0x1A0(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	struct FSpawnableSpellBasicData              NewVar_0;                                          // 0x258(0x40)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UAbility_All_Melee_SnakeStick_C* GetDefaultObj();

	void DoHiltMod_Hit(class UGbxDamageType* DamageType, class AActor* DamagedActor, const struct FCausedDamageDetails& Details);
	void ExecuteUbergraph_Ability_All_Melee_SnakeStick(int32 EntryPoint, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle1, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle2, class UGbxDamageType* K2Node_Event_DamageType, class AActor* K2Node_Event_DamagedActor, const struct FCausedDamageDetails& K2Node_Event_Details, float CallFunc_GetDataTableValueFromHandle_ReturnValue2, class UClass* CallFunc_GetObjectClass_ReturnValue, const struct FVector& CallFunc_RunEnvQueryForBestLocation_ResultLocation, bool CallFunc_RunEnvQueryForBestLocation_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_GetValueOfAttribute_ReturnValue2, float CallFunc_Multiply_FloatFloat_ReturnValue1, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue);
};

}



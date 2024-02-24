#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDC (0x1EC - 0x110)
// BlueprintGeneratedClass Ability_Counterfeint.Ability_Counterfeint_C
class UAbility_Counterfeint_C : public UOakAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x110(0x8)(Transient, DuplicateTransient)
	class AActor*                                Killed;                                            // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AOakCharacter*                         Owner;                                             // 0x120(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FEnvQueryParams                       SpawnEQS;                                          // 0x128(0xB8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class ABP_CounterFeint_AfterImage_C*         AfterImageActor;                                   // 0x1E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AfterImageDuration;                                // 0x1E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAbility_Counterfeint_C* GetDefaultObj();

	void GbxAsyncRequest_Spawned_20954914494E67BAA54F128AD4A1E917(class AActor* Actor, int32 InstanceIndex);
	void OnActivated();
	void OnDeactivated();
	void SpawnAfterImage();
	void OnPaused();
	void OnResumed();
	void Counterfeint_Cleanup();
	void ExecuteUbergraph_Ability_Counterfeint(int32 EntryPoint, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_GetValueOfAttribute_ReturnValue, class ABP_CounterFeint_AfterImage_C* Temp_object_Variable, class AActor* K2Node_CustomEvent_Actor, int32 K2Node_CustomEvent_InstanceIndex, class ABP_CounterFeint_AfterImage_C* K2Node_DynamicCast_AsBP_Counter_Feint_After_Image, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetAbilityOwner_ReturnValue, const struct FVector& CallFunc_RunEnvQueryForBestLocation_ResultLocation, bool CallFunc_RunEnvQueryForBestLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AOakCharacter* K2Node_DynamicCast_AsOak_Character, bool K2Node_DynamicCast_bSuccess1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_Conv_VectorToTransform_ReturnValue, class AActor* CallFunc_GetAbilityOwner_ReturnValue1, const struct FGbxSpawnActorAsyncRequest& K2Node_MakeStruct_GbxSpawnActorAsyncRequest, int32 CallFunc_SpawnActorAsync_ReturnValue);
};

}



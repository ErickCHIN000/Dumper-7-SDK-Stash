#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0xE4 - 0xB0)
// BlueprintGeneratedClass BP_Tornado_LaunchGoatComponent.BP_Tornado_LaunchGoatComponent_C
class UBP_Tornado_LaunchGoatComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AGGGoat*                               Goat;                                              // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         ShouldPullGoat;                                    // 0xC0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasLaunchedGoat;                                   // 0xC1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_B38[0x2];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        SafeTimerDuration;                                 // 0xC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DestroyTimerDuration;                              // 0xC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LaunchImpulseForce;                                // 0xCC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDragForce;                                      // 0xD0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PullForce;                                         // 0xD4(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BaseWeight;                                        // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Tornado_LaunchGoatComponent_C* GetDefaultObj();

	void GetCurrentAlternativeGoatPullForce(struct FVector* OutPullForce, bool* OutIsHumanGoat, class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_SelectFloat_ReturnValue, class UGGAlternativeGoatDataAsset* CallFunc_GetCurrentAltGoat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_FClamp_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue);
	bool Height_Reached(float Height, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_BreakVector_X_1, float CallFunc_BreakVector_Y_1, float CallFunc_BreakVector_Z_1, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void SetGoatRagdoll();
	void SetSafeTimer();
	void SafeTimerExcecute();
	void StartDestroyTimer();
	void DestroyTimerExcecute();
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void Launch();
	void ExecuteUbergraph_BP_Tornado_LaunchGoatComponent(int32 EntryPoint, const struct FRagdollStateChangeSettings& Temp_struct_Variable, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AActor* CallFunc_GetOwner_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class ABP_Tornado_C* K2Node_DynamicCast_AsBP_Tornado, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetRagdollBlueprint_ReturnValue, float K2Node_Event_DeltaSeconds, const struct FVector& CallFunc_MakeVector_ReturnValue, float CallFunc_SelectFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, bool CallFunc_Height_Reached_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_GetCurrentAlternativeGoatPullForce_OutPullForce, bool CallFunc_GetCurrentAlternativeGoatPullForce_OutIsHumanGoat, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class FName K2Node_Select_Default);
};

}



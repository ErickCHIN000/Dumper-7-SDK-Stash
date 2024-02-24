#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2F0 - 0x2D8)
// BlueprintGeneratedClass BP_HarvestableObject_Tree.BP_HarvestableObject_Tree_C
class ABP_HarvestableObject_Tree_C : public ABP_HarvestableObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        FallOverTimeline_FallOverAlpha_8E6A479F46FC05F3F36446A1B2EB299C; // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                FallOverTimeline__Direction_8E6A479F46FC05F3F36446A1B2EB299C; // 0x2E4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_16C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    FallOverTimeline;                                  // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_HarvestableObject_Tree_C* GetDefaultObj();

	void SetMaxHits(class UTechTreeComponent_C* CallFunc_GetSkillTreeManager_TechTree, int32 CallFunc_RandomIntegerInRange_ReturnValue, bool CallFunc_IsTechnologyUnlocked_ReturnValue, int32 CallFunc_Multiply_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue_1);
	void UserConstructionScript(bool CallFunc_SetStaticMesh_ReturnValue);
	void FallOverTimeline__FinishedFunc();
	void FallOverTimeline__UpdateFunc();
	void HitHarvestableObject(const struct FVector& HitLocation);
	void ReceiveBeginPlay();
	void MC_FallOverEffect(const struct FVector& CharacterLocation);
	void MC_PlaySound(const struct FVector& Location);
	void Svr_PlaySound(const struct FVector& Location);
	void Svr_FallOverEffect(const struct FVector& CharacterLocation);
	void Svr_SetMaxHits();
	void ExecuteUbergraph_BP_HarvestableObject_Tree(int32 EntryPoint, bool Temp_bool_Variable, int32 Temp_int_Variable, const class FString& CallFunc_Conv_IntToString_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const struct FVector& K2Node_Event_HitLocation, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, class AActor* CallFunc_FinishSpawningActor_ReturnValue, const struct FVector& K2Node_CustomEvent_CharacterLocation_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FVector& K2Node_CustomEvent_Location_1, const struct FVector& K2Node_CustomEvent_Location, const struct FVector& K2Node_CustomEvent_CharacterLocation, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue_2, float CallFunc_BreakRotator_Roll_1, float CallFunc_BreakRotator_Pitch_1, float CallFunc_BreakRotator_Yaw_1, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue_2, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, double CallFunc_Dot_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_DegAcos_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FRotator& K2Node_Select_Default, const struct FRotator& CallFunc_RLerp_ReturnValue, bool CallFunc_K2_SetActorRotation_ReturnValue);
};

}



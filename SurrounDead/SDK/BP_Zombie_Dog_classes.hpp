#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x850 - 0x848)
// BlueprintGeneratedClass BP_Zombie_Dog.BP_Zombie_Dog_C
class ABP_Zombie_Dog_C : public ABP_MasterZombie_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x848(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class ABP_Zombie_Dog_C* GetDefaultObj();

	void GetMarker(class UTexture2D** Texture, struct FLinearColor* Color, double* MarkerOffset);
	void UserConstructionScript(const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FTransform& CallFunc_MakeTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, bool CallFunc_K2_AttachToComponent_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult_1);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_Zombie_Dog(int32 EntryPoint, const struct FTransform& Temp_struct_Variable, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, float CallFunc_GetFloatCVar_ReturnValue, const struct FTransform& Temp_struct_Variable_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, class USkeletalMeshComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}



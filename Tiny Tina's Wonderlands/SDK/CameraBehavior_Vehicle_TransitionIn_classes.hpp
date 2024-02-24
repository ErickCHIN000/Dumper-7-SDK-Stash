#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass CameraBehavior_Vehicle_TransitionIn.CameraBehavior_Vehicle_TransitionIn_C
class UCameraBehavior_Vehicle_TransitionIn_C : public UCameraBehavior
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x30(0x8)(Transient, DuplicateTransient)
	class UGbxActionComponent*                   ActionComponent;                                   // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                PlayerMesh;                                        // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCameraBehavior_Vehicle_TransitionIn_C* GetDefaultObj();

	void Update(float DeltaTime, class UCameraState* State);
	void Start(class UCameraState* State);
	void ExecuteUbergraph_CameraBehavior_Vehicle_TransitionIn(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, float K2Node_Event_DeltaTime, class UCameraState* K2Node_Event_State1, const struct FPOV& K2Node_MakeStruct_POV, class UCameraState* K2Node_Event_State, class ACharacter* CallFunc_GetAssociatedCharacter_ReturnValue, bool CallFunc_IsValid_ReturnValue1);
};

}



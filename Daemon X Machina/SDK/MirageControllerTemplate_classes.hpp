#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x4E0 - 0x4D8)
// BlueprintGeneratedClass MirageControllerTemplate.MirageControllerTemplate_C
class AMirageControllerTemplate_C : public ABaseAIController_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4D8(0x8)(Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class AMirageControllerTemplate_C* GetDefaultObj();

	void GetStartLocationOffset(struct FVector* LocationOffset, class APawn* CallFunc_K2_GetPawn_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_GetActorRightVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue1, const struct FVector& CallFunc_Add_VectorVector_ReturnValue);
	void UserConstructionScript();
	void AIInit();
	void ExecuteUbergraph_MirageControllerTemplate(int32 EntryPoint, class APawn* CallFunc_K2_GetPawn_ReturnValue, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess, class UArsenalMovement_C* CallFunc_GetComponentByClass_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x2D0 - 0x2C0)
// BlueprintGeneratedClass TripleJumpTutorial.TripleJumpTutorial_C
class ATripleJumpTutorial_C : public AGGTutorial
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x2C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ATripleJumpTutorial_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void OnGoatBouncyJump_Event(class AGGGoat* GoatJumping, int32 JumpCount, const struct FVector& Location);
	void ExecuteUbergraph_TripleJumpTutorial(int32 EntryPoint, class AGGGoat* K2Node_CustomEvent_GoatJumping, int32 K2Node_CustomEvent_JumpCount, const struct FVector& K2Node_CustomEvent_Location, bool CallFunc_GreaterEqual_IntInt_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_GetOwner_ReturnValue, class UGGGoatMovementComponent* CallFunc_GetGoatMovementComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class UGGGoatMovementComponent* CallFunc_GetGoatMovementComponent_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}



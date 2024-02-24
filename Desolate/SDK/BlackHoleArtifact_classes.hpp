#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x528 - 0x518)
// BlueprintGeneratedClass BlackHoleArtifact.BlackHoleArtifact_C
class ABlackHoleArtifact_C : public AGenericArtefact_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x518(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AActor*                                TempExit;                                          // 0x520(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABlackHoleArtifact_C* GetDefaultObj();

	void OnUse(class ASHPlayerCharacter* Character);
	void ExecuteUbergraph_BlackHoleArtifact(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class ASHPlayerCharacter* K2Node_Event_Character, TArray<class ABlackHole_Exit_C*>& CallFunc_GetAllActorsOfClass_OutActors, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomInteger_ReturnValue, class ABlackHole_Exit_C* CallFunc_Array_Get_Item, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_K2_TeleportTo_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue);
};

}



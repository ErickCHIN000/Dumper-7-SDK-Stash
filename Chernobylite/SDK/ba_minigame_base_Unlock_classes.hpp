#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x248 - 0x220)
// BlueprintGeneratedClass ba_minigame_base_Unlock.ba_minigame_base_Unlock_C
class Aba_minigame_base_Unlock_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x220(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x228(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UClass*                                OriginalMovementState;                             // 0x230(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            MinigameResult;                                    // 0x238(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class Aba_minigame_base_Unlock_C* GetDefaultObj();

	void Left();
	void InternalLeave(int32 CallFunc_Multiply_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_GetRemainingTime_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Clamp_ReturnValue);
	void Won();
	void InternalWin();
	void RestorePlayerControl(bool Temp_bool_Variable, class UClass* Temp_class_Variable, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, bool CallFunc_IsValidClass_ReturnValue, class UClass* K2Node_Select_Default, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue);
	void StartPuzzle();
	void InternalStart();
	void ExecuteUbergraph_ba_minigame_base_Unlock(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TSubclassOf<class ACGMovementState> CallFunc_GetCurrentMovementState_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1);
	void MinigameResult__DelegateSignature(bool WasWon);
};

}



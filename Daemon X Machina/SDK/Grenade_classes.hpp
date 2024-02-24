#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x5E9 - 0x5E0)
// BlueprintGeneratedClass Grenade.Grenade_C
class AGrenade_C : public ATTLGrenade
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x5E0(0x8)(Transient, DuplicateTransient)
	bool                                         IsLeft;                                            // 0x5E8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AGrenade_C* GetDefaultObj();

	void UserConstructionScript();
	void OnInputStartBP();
	void OnInputEndBP();
	void ExecuteUbergraph_Grenade(int32 EntryPoint, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, class UArsenalCatchableActorMovement_C* CallFunc_GetComponentByClass_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_IsValid_ReturnValue2, class UArsenalCatchableActorMovement_C* CallFunc_GetComponentByClass_ReturnValue1, bool CallFunc_TryStartAim_isStartAim, bool CallFunc_IsValid_ReturnValue3, bool CallFunc_TryCatchGrenadeEitherHand_Succeed, bool CallFunc_TryCatchGrenadeEitherHand_IsLeftHandResult);
};

}



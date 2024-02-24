#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x670 - 0x650)
// BlueprintGeneratedClass AIC_Creature_NPC.AIC_Creature_NPC_C
class AAIC_Creature_NPC_C : public AAIC_CreatureBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x650(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  BTreeKey_OrderTarget;                              // 0x658(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MinTimeToBoredom;                                  // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxTimeToBoredom;                                  // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAIC_Creature_NPC_C* GetDefaultObj();

	void UpdateBoredom(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, double CallFunc_RandomFloatInRange_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
	void GetOwnerPlayerPawn(class APawn** PlayerPawn);
	void DEPRECATED_PlayerHasLeftLandPylon(bool* PlayerHasLeftLandPylon, class APawn* PlayerPawn);
	void AllowFriendlyTargeting(bool* Allowed, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UObject* CallFunc_GetValueAsObject_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AIC_Creature_NPC(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}



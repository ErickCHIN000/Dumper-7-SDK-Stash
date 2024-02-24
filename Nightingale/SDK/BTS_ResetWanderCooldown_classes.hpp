#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0xB8 - 0x98)
// BlueprintGeneratedClass BTS_ResetWanderCooldown.BTS_ResetWanderCooldown_C
class UBTS_ResetWanderCooldown_C : public UBTService_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBlackboardComponent*                  Blackboard;                                        // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          Timer;                                             // 0xA8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class AAIController*                         Controller;                                        // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTS_ResetWanderCooldown_C* GetDefaultObj();

	void ClearCooldown();
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ExecuteUbergraph_BTS_ResetWanderCooldown(int32 EntryPoint, class FName CallFunc_GetBBVar_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, float K2Node_Event_DeltaSeconds, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, class AAIC_CreatureBase_C* K2Node_DynamicCast_AsAIC_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetLoiterDurationMax_self_CastInput, float CallFunc_GetLoiterDurationMax_ReturnValue, TScriptInterface<class IAICCreatureDataInterface> CallFunc_GetLoiterDurationMin_self_CastInput, float CallFunc_GetLoiterDurationMin_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_FMax_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class FName CallFunc_GetBBVar_ReturnValue_1, bool CallFunc_GetValueAsBool_ReturnValue, double CallFunc_RandomFloatInRange_Max_ImplicitCast, double CallFunc_RandomFloatInRange_Min_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast);
};

}



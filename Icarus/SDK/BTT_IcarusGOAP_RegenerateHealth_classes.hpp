#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x34 (0xDC - 0xA8)
// BlueprintGeneratedClass BTT_IcarusGOAP_RegenerateHealth.BTT_IcarusGOAP_RegenerateHealth_C
class UBTT_IcarusGOAP_RegenerateHealth_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	int32                                        RegenPercent;                                      // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F16[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AIcarusNPCGOAPCharacter*               CharacterRef;                                      // 0xB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        TimeToRegenerate;                                  // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2F25[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AAIController*                         ControllerRef;                                     // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsRegenerating;                                    // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2F2E[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        FractionalRegen;                                   // 0xD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        TargetHealthAmount;                                // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTT_IcarusGOAP_RegenerateHealth_C* GetDefaultObj();

	void ReceiveAbort(class AActor* OwnerActor);
	void RegenerateHealth(float DeltaSeconds);
	void ReceiveTick(class AActor* OwnerActor, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_IcarusGOAP_RegenerateHealth(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor_1, float K2Node_CustomEvent_DeltaSeconds, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, int32 CallFunc_GetMaxHealth_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, class AActor* K2Node_Event_OwnerActor, float K2Node_Event_DeltaSeconds, bool CallFunc_Greater_FloatFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Fraction_ReturnValue, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_SelectInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_GetMaxHealth_ReturnValue_1, int32 CallFunc_GetHealth_ReturnValue, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class AIcarusNPCGOAPCharacter* K2Node_DynamicCast_AsIcarus_NPCGOAPCharacter, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetStat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, int32 CallFunc_GetHealth_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_2, bool CallFunc_GreaterEqual_IntInt_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, int32 CallFunc_Min_ReturnValue);
};

}



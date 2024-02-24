#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x128 - 0xA8)
// BlueprintGeneratedClass BTT_CalculateBestWanderEQSSize.BTT_CalculateBestWanderEQSSize_C
class UBTT_CalculateBestWanderEQSSize_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                WanderEQSGridSizeKey;                              // 0xB0(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                WanderEQSConeSizeKey;                              // 0xD8(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)
	struct FBlackboardKeySelector                WanderEQSHalfMaximumSizeKey;                       // 0x100(0x28)(Edit, BlueprintVisible, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UBTT_CalculateBestWanderEQSSize_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTT_CalculateBestWanderEQSSize(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue, int32 CallFunc_GetNPCStatWithDefaultValue_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass BTT_IcarusGOAP_CheckForFoundObjects.BTT_IcarusGOAP_CheckForFoundObjects_C
class UBTT_IcarusGOAP_CheckForFoundObjects_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FBlackboardKeySelector                Complete;                                          // 0xB0(0x28)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBTT_IcarusGOAP_CheckForFoundObjects_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTT_IcarusGOAP_CheckForFoundObjects(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AIcarusNPCGOAPController* K2Node_DynamicCast_AsIcarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess, class APawn* CallFunc_K2_GetPawn_ReturnValue, class UIcarusGOAPAIMemory* CallFunc_GetAIMemory_ReturnValue, class UIcarusGOAPAIState* CallFunc_GetAIState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, const struct FIcarusGOAPAIFact& CallFunc_GetClosestKnownInteractable_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}



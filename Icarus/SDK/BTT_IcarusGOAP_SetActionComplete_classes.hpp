#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xB0 - 0xA8)
// BlueprintGeneratedClass BTT_IcarusGOAP_SetActionComplete.BTT_IcarusGOAP_SetActionComplete_C
class UBTT_IcarusGOAP_SetActionComplete_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBTT_IcarusGOAP_SetActionComplete_C* GetDefaultObj();

	void ReceiveExecute(class AActor* OwnerActor);
	void ExecuteUbergraph_BTT_IcarusGOAP_SetActionComplete(int32 EntryPoint, class AActor* K2Node_Event_OwnerActor, class AIcarusNPCGOAPController* K2Node_DynamicCast_AsIcarus_NPCGOAPController, bool K2Node_DynamicCast_bSuccess, bool CallFunc_CompleteCurrentAction_ReturnValue);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0xB4 - 0xA8)
// BlueprintGeneratedClass BTTask_Detonate.BTTask_Detonate_C
class UBTTask_Detonate_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        DetonationTime;                                    // 0xB0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBTTask_Detonate_C* GetDefaultObj();

	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_BTTask_Detonate(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, TScriptInterface<class IBP_ExplosiveNPCInterface_C> K2Node_DynamicCast_AsBP_Explosive_NPCInterface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_DoesImplementInterface_ReturnValue);
};

}



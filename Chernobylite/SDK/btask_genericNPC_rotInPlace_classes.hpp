#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x11 (0xB9 - 0xA8)
// BlueprintGeneratedClass btask_genericNPC_rotInPlace.btask_genericNPC_rotInPlace_C
class Ubtask_genericNPC_rotInPlace_C : public UBTTask_BlueprintBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class Aba_ch_npc_00_C*                       GenericNPC;                                        // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         bTickEnabled;                                      // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Ubtask_genericNPC_rotInPlace_C* GetDefaultObj();

	void ReceiveAbortAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ReceiveTickAI(class AAIController* OwnerController, class APawn* ControlledPawn, float DeltaSeconds);
	void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
	void ExecuteUbergraph_btask_genericNPC_rotInPlace(int32 EntryPoint, class AAIController* K2Node_Event_OwnerController_2, class APawn* K2Node_Event_ControlledPawn_2, bool CallFunc_IsValid_ReturnValue, class AAIController* K2Node_Event_OwnerController_1, class APawn* K2Node_Event_ControlledPawn_1, float K2Node_Event_DeltaSeconds, class AAIController* K2Node_Event_OwnerController, class APawn* K2Node_Event_ControlledPawn, class Aba_ch_npc_00_C* K2Node_DynamicCast_AsBa_Ch_Npc_00, bool K2Node_DynamicCast_bSuccess);
};

}



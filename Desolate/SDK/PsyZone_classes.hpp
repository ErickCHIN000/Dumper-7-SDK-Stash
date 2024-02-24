#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x17 (0x378 - 0x361)
// BlueprintGeneratedClass PsyZone.PsyZone_C
class APsyZone_C : public ABaseAnomaly_C
{
public:
	uint8                                        Pad_14F0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x368(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPostProcessComponent*                 PostProcess;                                       // 0x370(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class APsyZone_C* GetDefaultObj();

	void EnableAnomaly(bool* Result, bool CallFunc_EnableAnomaly_Result);
	void DisableAnomaly(bool* Result, bool CallFunc_DisableAnomaly_Result);
	void ReceiveActorBeginOverlap(class AActor* OtherActor);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_PsyZone(int32 EntryPoint, class AActor* K2Node_Event_OtherActor, class ACharacter* K2Node_DynamicCast_AsCharacter, bool K2Node_DynamicCast_bSuccess);
};

}



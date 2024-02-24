#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x9F8 - 0x9D0)
// BlueprintGeneratedClass BP_FillettingStation.BP_FillettingStation_C
class ABP_FillettingStation_C : public ABP_ProcessorBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x9D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFMODAudioComponent*                   AlterationProcessingAudio;                         // 0x9D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x9E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ItemAlteredSound;                                  // 0x9E8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFMODEvent*                            ItemUnalteredSound;                                // 0x9F0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_FillettingStation_C* GetDefaultObj();

	void GenericAction();
	void GenericActionWithCharacter(class AIcarusPlayerCharacter* Character);
	void ExecuteUbergraph_BP_FillettingStation(int32 EntryPoint, class AIcarusPlayerCharacter* K2Node_Event_Character);
};

}



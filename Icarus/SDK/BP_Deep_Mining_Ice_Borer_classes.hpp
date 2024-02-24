#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0x7E0 - 0x7C1)
// BlueprintGeneratedClass BP_Deep_Mining_Ice_Borer.BP_Deep_Mining_Ice_Borer_C
class ABP_Deep_Mining_Ice_Borer_C : public ABP_Drill_Base_C
{
public:
	uint8                                        Pad_6778[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x7C8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     NS_BiofuelBurn;                                    // 0x7D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UNiagaraComponent*                     NS_DeepDrilling;                                   // 0x7D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_Deep_Mining_Ice_Borer_C* GetDefaultObj();

	void ActiveStateUpdated();
	void ReceiveBeginPlay();
	void IcarusBeginPlay();
	void ExecuteUbergraph_BP_Deep_Mining_Ice_Borer(int32 EntryPoint);
};

}



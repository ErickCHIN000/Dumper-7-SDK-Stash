#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x598 - 0x580)
// BlueprintGeneratedClass AuxActor_KnightHammer_FieryRedemption.AuxActor_KnightHammer_FieryRedemption_C
class AAuxActor_KnightHammer_FieryRedemption_C : public AStandInAuxiliaryActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(Transient, DuplicateTransient)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             GbxSkeletalMesh;                                   // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAuxActor_KnightHammer_FieryRedemption_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void DigiOut();
	void InterruptDigi();
	void ExecuteUbergraph_AuxActor_KnightHammer_FieryRedemption(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue);
};

}



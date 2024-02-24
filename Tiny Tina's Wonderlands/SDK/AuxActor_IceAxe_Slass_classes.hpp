#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x598 - 0x580)
// BlueprintGeneratedClass AuxActor_IceAxe_Slass.AuxActor_IceAxe_Slass_C
class AAuxActor_IceAxe_Slass_C : public AStandInAuxiliaryActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(Transient, DuplicateTransient)
	class UGameplayTasksComponent*               GameplayTasks;                                     // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             GbxSkeletalMesh;                                   // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAuxActor_IceAxe_Slass_C* GetDefaultObj();

	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void DigiOut();
	void InterruptDigi();
	void ExecuteUbergraph_AuxActor_IceAxe_Slass(int32 EntryPoint, TArray<struct FGbxActionRegister>& Temp_struct_Variable, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UGbxAction* CallFunc_K2Play_ReturnValue);
};

}



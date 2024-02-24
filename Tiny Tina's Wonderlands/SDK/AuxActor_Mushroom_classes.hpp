#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x598 - 0x580)
// BlueprintGeneratedClass AuxActor_Mushroom.AuxActor_Mushroom_C
class AAuxActor_Mushroom_C : public AStandInAuxiliaryActor_Pet
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x580(0x8)(Transient, DuplicateTransient)
	class UOakCharacterSoundLogicComponent*      OakCharacterSoundLogic;                            // 0x588(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             GbxSkeletalMesh;                                   // 0x590(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AAuxActor_Mushroom_C* GetDefaultObj();

	void SetMushroomAttachmentEnabled(bool EnabledState, class UGestaltPartData_Mesh* GestaltPart);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AuxActor_Mushroom(int32 EntryPoint, bool CallFunc_IsPlayingClass_ReturnValue, TArray<struct FGbxActionRegister>& Temp_struct_Variable, class UGbxAction* CallFunc_K2Play_ReturnValue, bool CallFunc_IsPlayingClass_ReturnValue1, bool CallFunc_BooleanOR_ReturnValue);
};

}



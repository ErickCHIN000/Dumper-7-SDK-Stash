#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x840 - 0x820)
// BlueprintGeneratedClass SpellActor_Hydra_Mod03.SpellActor_Hydra_Mod03_C
class ASpellActor_Hydra_Mod03_C : public ASpellActor_Hydra_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x820(0x8)(Transient, DuplicateTransient)
	class USkeletalMeshComponent*                Head_C;                                            // 0x828(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head_B;                                            // 0x830(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                Head_A;                                            // 0x838(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ASpellActor_Hydra_Mod03_C* GetDefaultObj();

	void GetHydraFireLocation(enum class EHydraHeads Head, struct FVector* Loc, struct FRotator* Rot, enum class EHydraHeads Temp_byte_Variable, class USceneComponent* K2Node_Select_Default, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale);
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_SpellActor_Hydra_Mod03(int32 EntryPoint);
};

}



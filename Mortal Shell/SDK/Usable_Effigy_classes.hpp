#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x66 (0x378 - 0x312)
// BlueprintGeneratedClass Usable_Effigy.Usable_Effigy_C
class AUsable_Effigy_C : public AUsable_Actor_C
{
public:
	uint8                                        Pad_14CC[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x318(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	enum class EArmorTypes                       ShellType;                                         // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_14DB[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPoseSnapshot                         PoseSnapshotToUse;                                 // 0x330(0x38)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        PoseToSelect;                                      // 0x368(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_14E3[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          PoseMontage;                                       // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AUsable_Effigy_C* GetDefaultObj();

	void OnActorUsed(class APlayerController* Controller, bool* Success, class AGameplayPC_C* CallFunc_GetControllerAsGameplayPC_AsGameplay_PC, class ABarbarous_C* CallFunc_GetCharacterAsBarbarous_AsBarbarous);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_Usable_Effigy(int32 EntryPoint, int32 Temp_int_Variable, int32 Temp_int_Variable_1, class UAnimMontage* Temp_object_Variable, class UAnimMontage* Temp_object_Variable_1, const struct FSingleAnimationPlayData& K2Node_MakeStruct_SingleAnimationPlayData, const struct FSingleAnimationPlayData& K2Node_MakeStruct_SingleAnimationPlayData_1, int32 CallFunc_RandomIntegerInRange_ReturnValue, const struct FSingleAnimationPlayData& K2Node_Select_Default, class UAnimMontage* K2Node_Select_Default_1, class USkeletalMesh* CallFunc_GetMeshForArmorType_ReturnValue, class UAnimInstance* CallFunc_GetAnimInstance_ReturnValue, class UDeath_Statue_AnimBP_C* K2Node_DynamicCast_AsDeath_Statue_Anim_BP, bool K2Node_DynamicCast_bSuccess);
};

}



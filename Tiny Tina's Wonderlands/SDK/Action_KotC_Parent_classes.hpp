#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x330 - 0x280)
// BlueprintGeneratedClass Action_KotC_Parent.Action_KotC_Parent_C
class UAction_KotC_Parent_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	class UGbxSkeletalMeshComponent*             Hammer1st;                                         // 0x288(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UGbxSkeletalMeshComponent*             Hammer3rd;                                         // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2890[0x8];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FTransform                            Hammer1stOrgTransform;                             // 0x2A0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FTransform                            Hammer3rdOrgTransform;                             // 0x2D0(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	class AOakCharacter_Player*                  Knightoftheclaw;                                   // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  MovementLockReason;                                // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            HammerMaterials1st;                                // 0x310(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	TArray<class UMaterialInterface*>            HammerMaterials3rd;                                // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAction_KotC_Parent_C* GetDefaultObj();

	void SetHammerVisibility(bool Show, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess);
	void GetHammerProjectileReference(class AActor** Hammer, class UOakActionAbility* CallFunc_GetPrimaryActionAbility_ReturnValue, TScriptInterface<class IIActionSkill_KotC_AS4_C> K2Node_DynamicCast_AsI_Action_Skill_Kot_C_AS4, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_KnightOfTheClawGetHammerRef_Res);
	void ResetActionSkillWeapons(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue1, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult1);
	void SetHammerTransform3rd(const struct FTransform& Transform, bool* Res, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult);
	void SetHammerTransform1st(const struct FTransform& Transform, bool* Res, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeTransform_SweepHitResult);
	void InitActionSkillWeapons(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable1, int32 CallFunc_GetNumMaterials_ReturnValue, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue1, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue1, int32 CallFunc_GetNumMaterials_ReturnValue1, int32 CallFunc_Array_Add_ReturnValue1, bool CallFunc_LessEqual_IntInt_ReturnValue1, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue, const struct FTransform& CallFunc_GetRelativeTransform_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, class UGbxSkeletalMeshComponent* CallFunc_GetActionSkillWeapons_Action_Skill_Weapon_1st, class UGbxSkeletalMeshComponent* CallFunc_GetActionSkillWeapons_Action_Skill_Weapon_3rd);
	void AN_LockCharacterMovement();
	void AN_UnlockCharacterMovement();
	void OnServerBegin(class AActor* Actor);
	void OnBegin(class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void ExecuteUbergraph_Action_KotC_Parent(int32 EntryPoint, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor, class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* K2Node_Event_Actor2, class AOakCharacter_Player* K2Node_DynamicCast_AsOak_Character_Player, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_Actor1);
};

}



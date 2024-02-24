#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x2C0 - 0x280)
// BlueprintGeneratedClass A_Ranger_BowSkill_Base.A_Ranger_BowSkill_Base_C
class UA_Ranger_BowSkill_Base_C : public UOakAction_Anim_ActionAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(Transient, DuplicateTransient)
	int32                                        NumberOfArrows;                                    // 0x288(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C59[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableValueHandle                 NumberOfArrowsHandle;                              // 0x290(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	class UFeedbackData*                         FeedbackToPlay;                                    // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       ChargeParticle;                                    // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                PlayerActor;                                       // 0x2B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UA_Ranger_BowSkill_Base_C* GetDefaultObj();

	void HideWeapon(class AActor* CallFunc_K2_GetActor_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue1, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess1, class UGbxSkeletalMeshComponent* CallFunc_GetActionSkillWeapons_Action_Skill_Weapon_1st, class UGbxSkeletalMeshComponent* CallFunc_GetActionSkillWeapons_Action_Skill_Weapon_3rd);
	void OnServerBegin(class AActor* Actor);
	void Notify_Skill();
	void OnServerEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnEnd(enum class EGbxActionEndState ActionEndState, class AActor* Actor);
	void OnBegin(class AActor* Actor);
	void Notify_HideWeapon();
	void Notify_Draw();
	void ExecuteUbergraph_A_Ranger_BowSkill_Base(int32 EntryPoint, class AActor* CallFunc_K2_GetActor_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* K2Node_Event_Actor3, class AActor* CallFunc_K2_GetActor_ReturnValue1, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue, class AActor* CallFunc_K2_GetActor_ReturnValue2, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess1, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, enum class EGbxActionEndState K2Node_Event_ActionEndState1, class AActor* K2Node_Event_Actor2, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, class AActor* CallFunc_K2_GetActor_ReturnValue3, enum class EGbxActionEndState K2Node_Event_ActionEndState, class AActor* K2Node_Event_Actor1, class AActor* K2Node_Event_Actor, class UOakFirstPersonComponent* CallFunc_GetComponentByClass_ReturnValue1, class AActor* CallFunc_K2_GetActor_ReturnValue4, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player1, bool K2Node_DynamicCast_bSuccess2, class AActor* CallFunc_K2_GetActor_ReturnValue5, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player2, bool K2Node_DynamicCast_bSuccess3, class AActor* CallFunc_K2_GetActor_ReturnValue6, class UGbxSkeletalMeshComponent* CallFunc_GetActionSkillWeapons_Action_Skill_Weapon_1st, class UGbxSkeletalMeshComponent* CallFunc_GetActionSkillWeapons_Action_Skill_Weapon_3rd, const struct FDataTableValueHandle& K2Node_MakeStruct_DataTableValueHandle, float CallFunc_GetDataTableValueFromHandle_ReturnValue, float CallFunc_GetDataTableValueFromHandle_ReturnValue1, int32 CallFunc_FTrunc_ReturnValue, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player3, bool K2Node_DynamicCast_bSuccess4, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player4, bool K2Node_DynamicCast_bSuccess5, class AActor* CallFunc_K2_GetActor_ReturnValue7, TScriptInterface<class IIBPChar_Player_C> K2Node_DynamicCast_AsIBPChar_Player5, bool K2Node_DynamicCast_bSuccess6, const struct FVector& CallFunc_GetActorAimViewPoint_OutLocation, const struct FRotator& CallFunc_GetActorAimViewPoint_OutRotation, const struct FVector& CallFunc_GetForwardVector_ReturnValue, TArray<struct FTransform>& CallFunc_GeneratePointsOnFan_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location1, const struct FRotator& CallFunc_BreakTransform_Rotation1, const struct FVector& CallFunc_BreakTransform_Scale1, const struct FVector& CallFunc_GetForwardVector_ReturnValue1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FOakLightProjectileInitializationData& K2Node_MakeStruct_OakLightProjectileInitializationData);
};

}



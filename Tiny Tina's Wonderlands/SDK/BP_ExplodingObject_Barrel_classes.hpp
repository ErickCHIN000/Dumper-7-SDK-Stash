#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA4 (0x74C - 0x6A8)
// BlueprintGeneratedClass BP_ExplodingObject_Barrel.BP_ExplodingObject_Barrel_C
class ABP_ExplodingObject_Barrel_C : public ABP_ExplodingObject_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6A8(0x8)(Transient, DuplicateTransient)
	class USocketComponent*                      Socket_Melee;                                      // 0x6B0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UOakTriggerComponent*                  OakTrigger;                                        // 0x6B8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UCapsuleComponent*                     EnemyProximityCapsule;                             // 0x6C0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIUseSlotComponent*                   Slot_GoonInteract;                                 // 0x6C8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIUseSlotComponent*                   Slot_Kick;                                         // 0x6D0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USmartObjectComponent*                 SmartObject;                                       // 0x6D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FSmartObjectActionSet                 ASet_NoActions_0;                                  // 0x6E0(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FSmartObjectActionSet                 ASet_GoonInteract;                                 // 0x700(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FRandomStream                         Random_Seed_0;                                     // 0x720(0x8)(Edit, BlueprintVisible, NoDestructor)
	float                                        RandomFloatFromStream_0;                           // 0x728(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SingularityPullScale;                              // 0x72C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSingularityGrabbed;                               // 0x730(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor)
	uint8                                        Pad_3929[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        NewVar_0;                                          // 0x734(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_1;                                          // 0x738(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_2;                                          // 0x73C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_3;                                          // 0x740(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_4;                                          // 0x744(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewVar_5;                                          // 0x748(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABP_ExplodingObject_Barrel_C* GetDefaultObj();

	float GetPullScale();
	void OnRep_bSingularityGrabbed();
	void Setup_ExplodingObject(class UDA_ExplodingObjectPresentation_C* NewPresentation, class UMaterialInstanceDynamic** DynamicMI, class UMaterialInstanceDynamic* MyDynamicMI, enum class Enum_ExplodingObjectDamage CallFunc_Get_DamageType_DamageType, class UMaterialInstanceDynamic* CallFunc_Setup_ExplodingObject_DynamicMI, bool K2Node_SwitchEnum_CmpSuccess, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue3, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue4, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue5, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue1, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue6, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue7, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue2, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue8, const struct FLinearColor& CallFunc_GetVectorParameterValue_ReturnValue9, const struct FLinearColor& CallFunc_Multiply_LinearColorFloat_ReturnValue3);
	void Barrel_SetupMaterialParams(class UMaterialInstanceDynamic* Material, const struct FLinearColor& BaseColor, const struct FLinearColor& HighlightColor, class UTexture* CompTexture, class UTexture* NormalTexture, class UTexture* NormalMap, class UTexture* CompMap, float TextureIndex, class UMaterialInstanceDynamic* DynamicMaterial, const struct FLinearColor& ElementalColor_Base, const struct FLinearColor& ElementalColor_Highlight, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_RandomFloatFromStream_ReturnValue, float CallFunc_RandomFloatFromStream_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue1, float CallFunc_MapRangeClamped_ReturnValue2, float CallFunc_MapRangeClamped_ReturnValue3, float CallFunc_MapRangeClamped_ReturnValue4, float CallFunc_RandomFloatFromStream_ReturnValue2, float CallFunc_FMax_ReturnValue, float CallFunc_FClamp_ReturnValue, float CallFunc_FMax_ReturnValue1, const struct FLinearColor& CallFunc_Conv_FloatToLinearColor_ReturnValue, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_MakeColor_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue);
	void UserConstructionScript();
	void SmartObject_NPC_Kick_Begin(class APawn* User);
	void SmartObject_Barrel_GoonInteract_Success(class APawn* User);
	void PlayerKickBarrel(class ACharacter* Char);
	void PlayerButtSlamBarrel(class ACharacter* Char);
	void PlayerMeleeBarrel(class ACharacter* Char);
	void Damaged(class UGbxDamageType* DamageType, class UDamageSource* DamageSource);
	void BndEvt__OakTrigger_K2Node_ComponentBoundEvent_1_OakTouchedTriggerDelegate__DelegateSignature_BP_ExplodingObject_Barrel(class AActor* TouchingActor, bool bIsPlayer, class UActorComponent* ComponentTouched);
	void OnSingularityPullBegin(class USingularityComponent* SingularityComponent);
	void OnSingularityPullEnd(class USingularityComponent* SingularityComponent);
	void Explode_Damage();
	void IronBearFisted(class ACharacter* Char);
	void ReceiveBeginPlay();
	void DEBUG_PrematureExplosion();
	void ThrowExplodingObject(const struct FVector& ThrowVector, float Force, const struct FRotator& RotatorForSpin, const struct FVector& OptionalAdditiveVector);
	void OverridePrematureDebug();
	void ExecuteUbergraph_BP_ExplodingObject_Barrel(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Has_Been_Initd_Variable1, bool CallFunc_HasAuthority_ReturnValue1, bool Temp_bool_IsClosed_Variable1, bool Temp_bool_Has_Been_Initd_Variable2, bool Temp_bool_IsClosed_Variable2, bool CallFunc_HasAuthority_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue1, bool Temp_bool_IsClosed_Variable3, const struct FRotator& CallFunc_MakeRotator_ReturnValue, class APawn* K2Node_GbxBlueprintActionEvent_User1, class APawn* K2Node_GbxBlueprintActionEvent_User, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, class ACharacter* K2Node_CustomEvent_Char3, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue1, float CallFunc_RandomFloatInRange_ReturnValue2, float CallFunc_RandomFloatInRange_ReturnValue3, const struct FRotator& CallFunc_MakeRotator_ReturnValue1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue4, float CallFunc_RandomFloatInRange_ReturnValue5, class ACharacter* K2Node_CustomEvent_Char2, class ACharacter* K2Node_CustomEvent_Char1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue2, const struct FVector& CallFunc_GetDirectionUnitVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue6, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_RandomFloatInRange_ReturnValue7, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue2, class UGbxDamageType* K2Node_Event_DamageType, class UDamageSource* K2Node_Event_DamageSource, bool CallFunc_Compare_Damage_Source_Equal, bool CallFunc_Compare_Damage_Source_Not_Equal, bool CallFunc_Compare_Damage_Source_Equal1, bool CallFunc_Compare_Damage_Source_Not_Equal1, bool CallFunc_Compare_Damage_Source_Equal2, bool CallFunc_Compare_Damage_Source_Not_Equal2, class AActor* K2Node_ComponentBoundEvent_TouchingActor, bool K2Node_ComponentBoundEvent_bIsPlayer, class UActorComponent* K2Node_ComponentBoundEvent_ComponentTouched, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class USingularityComponent* K2Node_Event_SingularityComponent1, class USingularityComponent* K2Node_Event_SingularityComponent, bool CallFunc_HasAuthority_ReturnValue3, class ACharacter* K2Node_CustomEvent_Char, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue3, float CallFunc_RandomFloatInRange_ReturnValue8, float CallFunc_RandomFloatInRange_ReturnValue9, bool Temp_bool_Has_Been_Initd_Variable3, const struct FRotator& CallFunc_MakeRotator_ReturnValue3, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, UDelegateProperty_ K2Node_CreateDelegate_OutputDelegate1, float CallFunc_GetCurrentHealthPercent_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, bool CallFunc_HasAuthority_ReturnValue4, const class FString& CallFunc_Concat_StrStr_ReturnValue1, const struct FVector& K2Node_Event_ThrowVector, float K2Node_Event_Force, const struct FRotator& K2Node_Event_RotatorForSpin, const struct FVector& K2Node_Event_OptionalAdditiveVector, bool CallFunc_IsEditorSession_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue10, const struct FRotator& CallFunc_MakeRotator_ReturnValue4);
};

}



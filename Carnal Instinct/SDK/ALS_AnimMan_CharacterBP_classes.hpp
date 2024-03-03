#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x438 (0x1080 - 0xC48)
// BlueprintGeneratedClass ALS_AnimMan_CharacterBP.ALS_AnimMan_CharacterBP_C
class AALS_AnimMan_CharacterBP_C : public AALS_Base_CharacterBP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC48(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class USkeletalMeshComponent*                BodyMesh;                                          // 0xC50(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       VisualMeshes;                                      // 0xC58(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USceneComponent*                       HeldObjectRoot;                                    // 0xC60(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0xC68(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0xC70(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FLinearColor                          DefaultColor;                                      // 0xC78(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          SkinColor;                                         // 0xC88(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShirtColor;                                        // 0xC98(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          PantsColor;                                        // 0xCA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          ShoesColor;                                        // 0xCB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          GlovesColor;                                       // 0xCC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        ShirtType;                                         // 0xCD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PantsType;                                         // 0xCDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Shoes;                                             // 0xCE0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Gloves_0;                                          // 0xCE1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         SolidColor;                                        // 0xCE2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_CB5[0x1];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          BaseLayerColor;                                    // 0xCE4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          OverlayLayerColor;                                 // 0xCF4(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          AdditiveAmount_Color;                              // 0xD04(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Hand_Color;                                        // 0xD14(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          HandIK_Color;                                      // 0xD24(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CC4[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              Head_0;                                            // 0xD38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Torso;                                             // 0xD40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Pelvis;                                            // 0xD48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Feet;                                              // 0xD50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Shoulder_L;                                        // 0xD58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Upperarm_l;                                        // 0xD60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              LowerArm_L;                                        // 0xD68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Hand_l;                                            // 0xD70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Shoulder_R;                                        // 0xD78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Upperarm_r;                                        // 0xD80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              LowerArm_R;                                        // 0xD88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Hand_r;                                            // 0xD90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              UpperLegs;                                         // 0xD98(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              LowerLegs;                                         // 0xDA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMantle_Asset                         Mantle_2m_Default;                                 // 0xDA8(0x34)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_CF9[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMantle_Asset                         Mantle_2m_Default_Male;                            // 0xDE0(0x34)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D00[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMantle_Asset                         Mantle_1m_Default;                                 // 0xE18(0x34)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D05[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMantle_Asset                         Mantle_1m_RH;                                      // 0xE50(0x34)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D0C[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMantle_Asset                         Mantle_1m_LH;                                      // 0xE88(0x34)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D10[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMantle_Asset                         Mantle_1m_2H;                                      // 0xEC0(0x34)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D19[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	struct FMantle_Asset                         Mantle_1m_Box;                                     // 0xEF8(0x34)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D25[0x4];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UAnimMontage*                          LandRoll_Default;                                  // 0xF30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_Default;                                // 0xF38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_RH;                                       // 0xF40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_LH;                                       // 0xF48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          LandRoll_2H;                                       // 0xF50(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_RH;                                     // 0xF58(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_LH;                                     // 0xF60(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpFront_2H;                                     // 0xF68(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_Default;                                 // 0xF70(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_RH;                                      // 0xF78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_LH;                                      // 0xF80(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          GetUpBack_2H;                                      // 0xF88(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAC_Inventory_C*                       Inventory_Component_0;                             // 0xF90(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FS_ItemData                           InitialHead;                                       // 0xF98(0xE8)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class AALS_AnimMan_CharacterBP_C* GetDefaultObj();

	void Set_Initial_Head();
	void MantleStart(float MantleHeight, const struct FALS_ComponentAndTransform& MantleLedgeWS, enum class EMantleType MantleType, bool K2Node_SwitchEnum_CmpSuccess);
	void UpdateHeldObjectAnimations(bool K2Node_SwitchEnum_CmpSuccess);
	void RagdollEnd();
	void RagdollStart();
	class UAnimMontage* GetGetUpAnimation(bool RagdollFaceUp, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void MantleEnd();
	class UAnimMontage* GetRollAnimation(bool K2Node_SwitchEnum_CmpSuccess);
	void OnOverlayStateChanged(enum class EALS_OverlayState NewOverlayState);
	void BPI_Get_3P_TraceParams(struct FVector* TraceOrigin, float* TraceRadius, enum class ETraceTypeQuery* TraceChannel, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1);
	struct FMantle_Asset GetMantleAsset(enum class EMantleType MantleType, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1);
	void UpdateLayeringColors(const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue, float CallFunc_GetAnimCurveValue_ReturnValue, float CallFunc_GetAnimCurveValue_ReturnValue_1, float CallFunc_GetAnimCurveValue_ReturnValue_2, float CallFunc_GetAnimCurveValue_ReturnValue_3, float CallFunc_GetAnimCurveValue_ReturnValue_4, float CallFunc_GetAnimCurveValue_ReturnValue_5, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_2, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_3, float CallFunc_GetAnimCurveValue_ReturnValue_6, float CallFunc_GetAnimCurveValue_ReturnValue_7, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_4, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_5, float CallFunc_GetAnimCurveValue_ReturnValue_8, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_6, const struct FLinearColor& CallFunc_K2_GetVectorParameterValue_ReturnValue_1, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_7, float CallFunc_GetAnimCurveValue_ReturnValue_9, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_8, float CallFunc_GetAnimCurveValue_ReturnValue_10, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_9, float CallFunc_GetAnimCurveValue_ReturnValue_11, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_10, float CallFunc_GetAnimCurveValue_ReturnValue_12, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_11, float CallFunc_GetAnimCurveValue_ReturnValue_13, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_12, const struct FLinearColor& CallFunc_LinearColorLerp_ReturnValue_13);
	void UpdateColoringSystem(bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, class APlayerController* CallFunc_GetPlayerController_ReturnValue, bool CallFunc_IsVisible_ReturnValue, TScriptInterface<class IALS_Controller_BPI_C> K2Node_DynamicCast_AsALS_Controller_BPI, bool K2Node_DynamicCast_bSuccess, class ACharacter* CallFunc_BPI_Get_DebugInfo_DebugFocusCharacter, bool CallFunc_BPI_Get_DebugInfo_DebugView, bool CallFunc_BPI_Get_DebugInfo_ShowHUD, bool CallFunc_BPI_Get_DebugInfo_ShowTraces, bool CallFunc_BPI_Get_DebugInfo_ShowDebugShapes, bool CallFunc_BPI_Get_DebugInfo_ShowLayerColors, bool CallFunc_BPI_Get_DebugInfo_Slomo, bool CallFunc_BPI_Get_DebugInfo_ShowCharacterInfo, bool CallFunc_BooleanAND_ReturnValue);
	void ResetColors();
	void SetDynamicMaterials(class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_3, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_4, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_5, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_6, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_7, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_8, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_9, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_10, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_11, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_12, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_13);
	struct FVector BPI_Get_FP_CameraTarget(const struct FVector& CallFunc_GetSocketLocation_ReturnValue);
	struct FTransform BPI_Get_3P_PivotTarget(const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, TArray<struct FVector>& K2Node_MakeArray_Array, const struct FVector& CallFunc_GetVectorArrayAverage_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue);
	void AttachToHand(class UStaticMesh* NewStaticMesh, class USkeletalMesh* NewSkeletalMesh, class UClass* NewAnimClass, bool LeftHand, const struct FVector& Offset);
	void ClearHeldObject(bool CallFunc_SetStaticMesh_ReturnValue);
	void UpdateHeldObject(bool K2Node_SwitchEnum_CmpSuccess);
	void UserConstructionScript();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_ALS_AnimMan_CharacterBP(int32 EntryPoint, float K2Node_Event_DeltaSeconds);
};

}



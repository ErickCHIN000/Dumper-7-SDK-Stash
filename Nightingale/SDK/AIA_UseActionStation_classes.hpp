#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xE0 - 0xB8)
// BlueprintGeneratedClass AIA_UseActionStation.AIA_UseActionStation_C
class UAIA_UseActionStation_C : public UAIA_CreatureBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	double                                       MaxDistance;                                       // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UCurveFloat*                           ProximityCurve;                                    // 0xC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class ANWXCharacter*                         NWXCharacter;                                      // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNWXActionStationComponent*            TargetActionStation;                               // 0xD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAIA_UseActionStation_C* GetDefaultObj();

	bool Initialize(bool CallFunc_Initialize_ReturnValue, class APawn* CallFunc_GetOwnerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess);
	bool CheckStaticTargetRequirements(class AActor* Target, bool CallFunc_CanInteractWithActorTEMP_CanInteractWithStructure);
	bool CheckTargetRequirements(class AActor* Target, bool CallFunc_CheckTargetRequirements_ReturnValue, class UNWXActionStationComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IStructureStateInterface> K2Node_DynamicCast_AsStructure_State_Interface, bool K2Node_DynamicCast_bSuccess, enum class EStructureState CallFunc_GetSchematicState_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_HasAvailableActionStations_ReturnValue, float CallFunc_GetDistanceTo_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	float GetNormalizedScore(class AActor* Target, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, double CallFunc_VSize_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_ReturnValue, float CallFunc_ClampAndCurveNormalizedScore_MaxScore_ImplicitCast, float CallFunc_ClampAndCurveNormalizedScore_Score_ImplicitCast);
	void Stop(class AActor* Target, bool CallFunc_IsValid_ReturnValue);
	void Start(class AActor* Target);
	void ExecuteUbergraph_AIA_UseActionStation(int32 EntryPoint, class APawn* CallFunc_GetOwnerPawn_ReturnValue, class AActor* K2Node_Event_Target, enum class EBlackboardGetResult CallFunc_TrySetBlackboardObject_Branches, class UNWXActionStationComponent* CallFunc_GetComponentByClass_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FTransform& CallFunc_TryAndClaimBestActionStation_ActionStationStartTransform, int32 CallFunc_TryAndClaimBestActionStation_ActionStationIndex, int32 CallFunc_TryAndClaimBestActionStation_AnimIndex, bool CallFunc_TryAndClaimBestActionStation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, enum class EBlackboardGetResult CallFunc_TrySetBlackboardVector_Branches, bool K2Node_SwitchEnum_CmpSuccess_1);
};

}



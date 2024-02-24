#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x37 (0x158 - 0x121)
// BlueprintGeneratedClass ANS_KnightSocketTrace.ANS_KnightSocketTrace_C
class UANS_KnightSocketTrace_C : public UANS_CreatureSocketTrace_C
{
public:
	uint8                                        Pad_5DA5[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               BoxShape;                                          // 0x128(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              Orientation;                                       // 0x140(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UANS_KnightSocketTrace_C* GetDefaultObj();

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class AEquippableItem* CreatureItem, const struct FVector& LLocationCurrent, const struct FVector& LLocationOld, class ABP_CreatureBase_C* LCreature, class USkeletalMeshComponent* LMesh, const struct FLinearColor& Temp_struct_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FRotator& CallFunc_ComposeRotators_ReturnValue, const struct FLinearColor& Temp_struct_Variable_1, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetItem_Weapon, class FName CallFunc_GetSocketEnd_SocketEnd, class FName CallFunc_GetSocketStart_SocketStart, TArray<class UObject*>& K2Node_MakeArray_Array, TArray<struct FHitResult>& CallFunc_NWXBoxTraceMulti_OutHits, bool CallFunc_NWXBoxTraceMulti_ReturnValue, TArray<struct FHitResult>& CallFunc_GetClosestHitResultForEachHitActor_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetTraceLocation_BoxTrace, const struct FVector& CallFunc_GetTraceLocation_Location, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void GetTraceLocation(class ABP_CreatureBase_C* Creature, bool* BoxTrace, struct FVector* Location, class USkeletalMeshComponent* LMesh, class FName LEnd, class FName LStart, class ABP_CreatureBase_C* LCreature, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_GetForwardVector_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class FName CallFunc_GetTraceData_Override_Data_Socket_Start, class FName CallFunc_GetTraceData_Override_Data_Socket_End, double CallFunc_GetTraceData_Override_Data_Radius, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data, bool CallFunc_GetTraceData_Override_IsBlockable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
};

}



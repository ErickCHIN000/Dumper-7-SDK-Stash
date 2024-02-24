#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB1 (0x121 - 0x70)
// BlueprintGeneratedClass ANS_CreatureSocketTrace.ANS_CreatureSocketTrace_C
class UANS_CreatureSocketTrace_C : public UAnimNotifyState_AISocketTrace
{
public:
	bool                                         UseOverrideData;                                   // 0x70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FS_CreatureSocketTraceData            OverrideData;                                      // 0x78(0x70)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         UseItemMesh;                                       // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31C7[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        SocketTraceIndex;                                  // 0xEC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseOverridePresentationData;                       // 0xF0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_31CF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTagContainer                 OverridePresentationData;                          // 0xF8(0x20)(Edit, BlueprintVisible)
	double                                       StatusDuration_0;                                  // 0x118(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBlockable;                                       // 0x120(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UANS_CreatureSocketTrace_C* GetDefaultObj();

	void HandleHitActor(struct FHitResult& HitResult, class ANWXAICharacter* AICharacter, class AActor* HitActor, TArray<struct FHitResult>& AllHits, class ABP_CreatureBase_C* LCreature, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResults_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, class FName CallFunc_GetTraceData_Override_Data_Socket_Start, class FName CallFunc_GetTraceData_Override_Data_Socket_End, double CallFunc_GetTraceData_Override_Data_Radius, const struct FGameplayTag& CallFunc_GetTraceData_Override_Data_Attack_Tag, const struct FGameplayTagContainer& CallFunc_GetTraceData_Override_Data_Gameplay_Tags, const struct FS_CreatureKnockbackData& CallFunc_GetTraceData_Override_Data_Knockback_Data, bool CallFunc_GetTraceData_Override_IsBlockable, const struct FGameplayAbilityPayloadHandle& CallFunc_AbilityPayloadFromGameplayTagContainer_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, int32 CallFunc_SendGameplayEventToActor_ReturnValue);
	void ApplyStatusEffectDotToTarget(class ANWXAICharacter* AICharacter, class AActor* Target, struct FStatusEffectDOT& StatusEffectDOTs, bool CallFunc_IsValid_ReturnValue);
	bool TargetIsFriendly(class ANWXAICharacter* AICharacter, class AActor* Target, TScriptInterface<class IBPI_Targeter_C> K2Node_DynamicCast_AsBPI_Targeter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFriend_bIsFriend);
	void GetRadius(class ABP_CreatureBase_C* InCreature, double* Radius, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, double K2Node_FunctionResult_Radius_ImplicitCast, double K2Node_FunctionResult_Radius_ImplicitCast_1);
	void GetSocketEnd(class ABP_CreatureBase_C* InCreature, class FName* SocketEnd, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	void GetSocketStart(class ABP_CreatureBase_C* InCreature, class FName* SocketStart, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class FText CallFunc_Conv_ObjectToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1);
	bool Received_NotifyEnd(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, class ABP_CreatureBase_C* LCreature, class USkeletalMeshComponent* LMesh, bool CallFunc_Map_Remove_ReturnValue, bool CallFunc_Map_Remove_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void GetTraceLocation(class ABP_CreatureBase_C* Creature, bool* BoxTrace, struct FVector* Location, class USkeletalMeshComponent* LMesh, class ABP_CreatureBase_C* LCreature, class FName LEnd, class FName LStart, class FName CallFunc_GetSocketEnd_SocketEnd, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh, class FName CallFunc_GetSocketStart_SocketStart, bool CallFunc_EqualEqual_NameName_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue);
	void GetSkeletalMesh(class ABP_CreatureBase_C* Creature, class USkeletalMeshComponent** Mesh, class AEquippableItem* LItem, class ABP_CreatureBase_C* LCreature, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkeletalMeshComponent* CallFunc_GetRootMesh_ReturnValue, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetItem_Weapon);
	void GetTraceData(class ABP_CreatureBase_C* Creature, class FName* Override_Data_Socket_Start, class FName* Override_Data_Socket_End, double* Override_Data_Radius, struct FGameplayTag* Override_Data_Attack_Tag, struct FGameplayTagContainer* Override_Data_Gameplay_Tags, struct FS_CreatureKnockbackData* Override_Data_Knockback_Data, bool* Override_IsBlockable, class ABP_CreatureBase_C* LCreature, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_GetDisplayName_ReturnValue, bool Temp_bool_Variable_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FGameplayTagContainer& K2Node_Select_Default, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGameplayTagContainer& K2Node_Select_Default_1, double K2Node_FunctionResult_Override_Data_Radius_ImplicitCast, double K2Node_FunctionResult_Override_Data_Radius_ImplicitCast_1);
	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class AEquippableItem* CreatureItem, const struct FVector& LLocationOld, const struct FVector& LLocationCurrent, class ABP_CreatureBase_C* LCreature, class USkeletalMeshComponent* LMesh, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, const struct FLinearColor& Temp_struct_Variable_2, const struct FLinearColor& Temp_struct_Variable_3, double CallFunc_GetRadius_Radius, class FName CallFunc_GetSocketEnd_SocketEnd, TScriptInterface<class IBPI_EquippedItems_C> K2Node_DynamicCast_AsBPI_Equipped_Items, bool K2Node_DynamicCast_bSuccess, class AEquippableItem* CallFunc_GetItem_Weapon, class USkeletalMeshComponent* CallFunc_GetSkeletalMesh_Mesh, class FName CallFunc_GetSocketStart_SocketStart, double CallFunc_GetRadius_Radius_1, const struct FVector& CallFunc_K2_DirectionBetweenSockets_ReturnValue, float CallFunc_K2_DistanceBetweenTwoSocketsAndMapRange_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, bool CallFunc_GetTraceLocation_BoxTrace, const struct FVector& CallFunc_GetTraceLocation_Location, const struct FRotator& CallFunc_FindLookAtRotation_ReturnValue, TArray<class UObject*>& K2Node_MakeArray_Array, TArray<class UObject*>& K2Node_MakeArray_Array_1, TArray<struct FHitResult>& CallFunc_NWXBoxTraceMulti_OutHits, bool CallFunc_NWXBoxTraceMulti_ReturnValue, TArray<struct FHitResult>& CallFunc_NWXMultiSphereTraceByChannel_OutHits, bool CallFunc_NWXMultiSphereTraceByChannel_ReturnValue, TArray<struct FHitResult>& CallFunc_GetClosestHitResultForEachHitActor_ReturnValue, TArray<struct FHitResult>& CallFunc_GetClosestHitResultForEachHitActor_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_GetTraceLocation_BoxTrace_1, const struct FVector& CallFunc_GetTraceLocation_Location_1, const struct FVector& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, float CallFunc_NWXMultiSphereTraceByChannel_Radius_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast);
	bool Received_NotifyBegin(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float TotalDuration, struct FAnimNotifyEventReference& EventReference, class ABP_CreatureBase_C* LCreature, class USkeletalMeshComponent* LMesh, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_GetTraceLocation_BoxTrace, const struct FVector& CallFunc_GetTraceLocation_Location, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetDisplayName_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class ABP_CreatureBase_C* K2Node_DynamicCast_AsBP_Creature_Base, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, bool CallFunc_IsValid_Guid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
};

}



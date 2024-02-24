#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x39 - 0x38)
// BlueprintGeneratedClass AN_Climbing_Pick_Impact.AN_Climbing_Pick_Impact_C
class UAN_Climbing_Pick_Impact_C : public UAnimNotify
{
public:
	bool                                         Left_Hand;                                         // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_Climbing_Pick_Impact_C* GetDefaultObj();

	void AnimationPreviewer(class USkeletalMeshComponent* MeshComp, TSoftObjectPtr<class UAkAudioEvent> PlayPickSfx, class FName SocketNameL, class FName Temp_name_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UAkAudioEvent* K2Node_DynamicCast_AsAk_Audio_Event, bool K2Node_DynamicCast_bSuccess, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable_1, bool Temp_bool_Variable, bool CallFunc_IsEditor_ReturnValue, class FName K2Node_Select_Default);
	void IsFirstPerson(class USkeletalMeshComponent* MeshComponent, bool* Result, class AActor* CallFunc_GetOwner_ReturnValue, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_ShouldPlayFirstPersonAudio_ReturnValue);
	void IsLocalPlayer(class USkeletalMeshComponent* MeshComponent, bool* Result, class AActor* CallFunc_GetOwner_ReturnValue, class APawn* K2Node_DynamicCast_AsPawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue);
	void GetImpactData(const struct FVector& TraceLocation, const struct FRotator& WorldRotation, bool* HitSuccess, class UAkSwitchValue** SurfaceSwitch, struct FVector* HitLocation, const struct FVector& VectorOffset, double TraceDistance, const struct FVector& CallFunc_GetRightVector_ReturnValue, TArray<class AActor*>& Temp_object_Variable, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingle_OutHit, bool CallFunc_LineTraceSingle_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UNWXPhyiscalMaterial* K2Node_DynamicCast_AsNWXPhyiscal_Material, bool K2Node_DynamicCast_bSuccess);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, TSoftObjectPtr<class UAkAudioEvent> PickAudioEvent, class UAkSwitchValue* SurfaceType, const struct FVector& ImpactLocation, const struct FVector& PickLocation, class UScopedAkComponent* ScopedAkComponent, const struct FVector& VectorOffset, class FName SocketName, enum class EPhysicalSurface CurrentSurfaceType, TSoftObjectPtr<class UAkAudioEvent> Temp_softobject_Variable, bool CallFunc_IsVisible_ReturnValue, TSoftObjectPtr<class UAkAudioEvent> Temp_softobject_Variable_1, bool Temp_bool_Variable, bool Temp_bool_Variable_1, class UAkSwitchValue* Temp_object_Variable, bool Temp_bool_Variable_2, class FName Temp_name_Variable, class FName Temp_name_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsFirstPerson_Result, bool CallFunc_IsLocalPlayer_Result, class FName K2Node_Select_Default, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, bool CallFunc_PostAsyncAkEventScoped_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, bool CallFunc_GetImpactData_HitSuccess, class UAkSwitchValue* CallFunc_GetImpactData_SurfaceSwitch, const struct FVector& CallFunc_GetImpactData_HitLocation, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& K2Node_Select_Default_1, class UAkSwitchValue* K2Node_Select_Default_2, bool Temp_bool_Variable_3, TSoftObjectPtr<class UAkAudioEvent> K2Node_Select_Default_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue);
};

}



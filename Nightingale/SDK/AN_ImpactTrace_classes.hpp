#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD1 (0x109 - 0x38)
// BlueprintGeneratedClass AN_ImpactTrace.AN_ImpactTrace_C
class UAN_ImpactTrace_C : public UAnimNotify
{
public:
	struct FGameplayTag                          ImpactTag;                                         // 0x38(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayVFX;                                           // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlaySFX;                                           // 0x41(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6390[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  Socket;                                            // 0x44(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_639B[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       TraceLength;                                       // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               TraceDirection;                                    // 0x58(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SocketOffset;                                      // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlaySecondaryEffect;                               // 0x88(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63A6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UNiagaraSystem>         SecondaryNiagaraSystem;                            // 0x90(0x28)(Edit, BlueprintVisible, HasGetValueTypeHash)
	bool                                         AutoDestroySecondaryEffect;                        // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SecondaryVFX_UseImpactColor;                       // 0xB9(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63B4[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FLinearColor                          SecondaryVFX_BaseColor;                            // 0xBC(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63B9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	double                                       SecondaryVFX_Scale;                                // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             SecondaryVFX_CylSize;                              // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0xE8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63C4[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FGameplayTag                          Source_Tag;                                        // 0xEC(0x8)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_63CC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UAkAudioEvent*                         Override_Audio_Event_1P;                           // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Override_Audio_Event_3P;                           // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         UseItemDataTag;                                    // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAN_ImpactTrace_C* GetDefaultObj();

	void GetItemSourceTag(class AActor* Owner, struct FGameplayTag* ItemSourceGameplayTag, class ABP_EquippableItemBase_C* Equipped_Item, class AEquippableItem* CallFunc_GetEquippedItem_EquippedQuickbarItem, class ABP_EquippableItemBase_C* K2Node_DynamicCast_AsBP_Equippable_Item_Base, bool K2Node_DynamicCast_bSuccess, const struct FGameplayTag& CallFunc_GetItemTypeTag_Trait, bool CallFunc_IsValid_ReturnValue);
	void Is_Local(class AActor* Owner, bool* Is_Local, class ABP_Character_C* K2Node_DynamicCast_AsBP_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocallyControlled_ReturnValue);
	void Get_Trace_Positions(class USkeletalMeshComponent* Mesh_Comp, struct FVector* Start, struct FVector* End, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue, const struct FVector& CallFunc_TransformLocation_ReturnValue_1);
	void Play_Sound(bool Hit_Result_Valid, const struct FHitResult& Hit_Result, class AActor* Owner, class AActor* NewLocalVar_0, class UAkSwitchValue* Surface_Switch, const struct FVector& Location, class UAkAudioEvent* Override_Audio_Event, TArray<class UScriptStruct*>& K2Node_MakeArray_Array, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class UAkSwitchValue* CallFunc_Get_Surface_Switch_Switch, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_1, const struct FGameplayTag& CallFunc_GetItemSourceTag_ItemSourceGameplayTag, FDelegateProperty_ Temp_delegate_Variable, TArray<class UAkSwitchValue*>& K2Node_MakeArray_Array_1, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, class UBP_LoadAndPlay_Audio_C* CallFunc_AddComponentByClass_ReturnValue, bool CallFunc_Is_Local_Is_Local, bool Temp_bool_Variable_2, const struct FGameplayTag& K2Node_Select_Default, TArray<struct FAffinityTableCellDataWrapper>& CallFunc_QueryTable_OutMemoryPtrs, bool CallFunc_QueryTable_ReturnValue, class UScopedAkComponent* CallFunc_SpawnScopedAkComponentAtLocation_ReturnValue, int32 CallFunc_PostAssociatedAkEvent_ReturnValue, const struct FS_AudioHitResponses& CallFunc_GetTableCellData_OutData, bool CallFunc_Is_Local_Is_Local_1, const struct FS_HitAudio& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UAkAudioEvent* K2Node_Select_Default_1, TSoftObjectPtr<class UAkAudioEvent> K2Node_Select_Default_2);
	bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, struct FAnimNotifyEventReference& EventReference, const struct FLinearColor& Primary_VFX_Base_Color, const struct FRotator& Rotation, const struct FVector& Location, class AActor* Owner, bool CallFunc_IsServer_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_Get_Trace_Positions_Start, const struct FVector& CallFunc_Get_Trace_Positions_End, TArray<class AActor*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, bool CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result_Valid, const struct FHitResult& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Hit_Result, const struct FVector& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_Impact_Point, const struct FRotator& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactRotation, const struct FLinearColor& CallFunc_PROTOTYPE_NVFX_TraceAndSpawnImpactFX_ImpactSurfaceColor, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_NVFX_SpawnSystem_ReturnValue, class UNiagaraComponent* CallFunc_NVFX_SpawnSystem_NiagaraSystemSpawned);
};

}



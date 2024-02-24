#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x25B (0x538 - 0x2DD)
// BlueprintGeneratedClass ba_col_CollectableNote_01.ba_col_CollectableNote_01_C
class Aba_col_CollectableNote_01_C : public Aba_ia_BaseInteractableObject_01_C
{
public:
	uint8                                        Pad_2B99[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UStaticMeshComponent*                  StaticMesh;                                        // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         BoxCollider;                                       // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UStaticMesh*                           LowPolyMesh;                                       // 0x2F8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CollectableNoteID;                                 // 0x300(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                ViewableNoteClass;                                 // 0x308(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              LowPolyRotation;                                   // 0x310(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	struct FVector                               LowPolyScale;                                      // 0x31C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnViewableNoteShowAnimationFinished;               // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TSoftObjectPtr<class UTexture2D>             TextureEnglish;                                    // 0x338(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             TextureRussian;                                    // 0x360(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	class UStaticMesh*                           HighPolyMesh;                                      // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              RotationOffset;                                    // 0x390(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BC9[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInterface*                    LowPolyMaterial;                                   // 0x3A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSlateBrush                           InteractionIcon;                                   // 0x3A8(0x88)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FDataTableRowHandle                   DataTableHandle;                                   // 0x430(0x10)(Edit, BlueprintVisible, NoDestructor, ExposeOnSpawn)
	bool                                         Is3D;                                              // 0x440(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BCF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  NoteDesc;                                          // 0x448(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UAkAudioEvent*                         Put_down_sound;                                    // 0x460(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAkAudioEvent*                         Pick_up_sound;                                     // 0x468(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class ALevelStreamingVolume*, bool>     StreamingVolumesCache;                             // 0x470(0x50)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	bool                                         BlockForcedMovementChange;                         // 0x4C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         UseDefaultTrigger;                                 // 0x4C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BE2[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class Abp_DialoguActor_C*                    SpawnedDialogue;                                   // 0x4C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  DialoguePlayedCheckName;                           // 0x4D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FName                                  DialogueStartName;                                 // 0x4D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AllowHighlight;                                    // 0x4E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	uint8                                        Pad_2BE6[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TSoftObjectPtr<class UTexture2D>             TextureBoard;                                      // 0x4E8(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	struct FNoteExperienceHandle                 Experience_Handle;                                 // 0x510(0x18)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         Force3DNote;                                       // 0x528(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2BEE[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               ThreeDNote_Pivot_Offset;                           // 0x52C(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class Aba_col_CollectableNote_01_C* GetDefaultObj();

	TArray<class AActor*> GetAdditionalActorsToHighlight();
	TArray<TSoftObjectPtr<class UPrimitiveComponent>> GetMeshesToSkipDuringHighlight();
	bool ShouldIgnoreScan();
	TArray<class USkeletalMeshComponent*> GetForcedMeshesToHighlight();
	enum class EScannableResourceType GetResourceType();
	bool ShouldBeHightlighted(bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	void GetCleanPivotAndOffset(struct FRotator* HighPolyRotationOffset, struct FVector* ThreeDNotePivotOffset, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void FinishedNoteViewing();
	void GetWasNoteRead(bool* Result, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_Array_Contains_ReturnValue);
	void GetDisplayTexture(bool IsOpenedFromBoard, TSoftObjectPtr<class UTexture2D>* Texture, bool Temp_bool_Variable, bool CallFunc_IsValidSoftObjectReference_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, TSoftObjectPtr<class UTexture2D> K2Node_Select_Default);
	void PlayDialogueWhenPickedUp(const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, bool CallFunc_NotEqual_NameName_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_PermanentDataGetValue_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Abp_DialoguActor_C* CallFunc_FinishSpawningActor_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void RestoreLevelStreamingVolumes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ALevelStreamingVolume*>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, class ALevelStreamingVolume* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void DisableLevelStreamingVolumes(int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class ALevelStreamingVolume*>& CallFunc_GetAllActorsOfClass_OutActors, class ALevelStreamingVolume* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	TArray<class UObject*> GetObjectsToSave();
	bool HasObjectsToSave();
	bool ShouldUpdateOverlapsOnLoad();
	void ImpartDataFromTable(bool CallFunc_NotEqual_NameName_ReturnValue, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_1, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue_2, class UMaterialInstance* K2Node_DynamicCast_AsMaterial_Instance, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_2, class UStaticMesh* K2Node_DynamicCast_AsStatic_Mesh_1, bool K2Node_DynamicCast_bSuccess_2);
	void Initialise(bool CallFunc_IsValid_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_GetComponentBounds_Origin, const struct FVector& CallFunc_GetComponentBounds_BoxExtent, float CallFunc_GetComponentBounds_SphereRadius, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, bool CallFunc_K2_AttachToComponent_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_GetLocalBounds_Min, const struct FVector& CallFunc_GetLocalBounds_Max, const struct FVector& CallFunc_VLerp_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetRelativeLocation_SweepHitResult, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult, class UMaterialInterface* K2Node_Select_Default, bool CallFunc_SetStaticMesh_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2);
	void SetLocked(bool bLocked);
	void SetCustomDepthAndStencilValue(class Aba_col_ViewableNote_01_C* SpawnedObject, int32 Temp_int_Array_Index_Variable, TArray<class USceneComponent*>& CallFunc_GetChildrenComponents_Children, class USceneComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* K2Node_DynamicCast_AsSkeletal_Mesh_Component, bool K2Node_DynamicCast_bSuccess, class UStaticMeshComponent* K2Node_DynamicCast_AsStatic_Mesh_Component, bool K2Node_DynamicCast_bSuccess_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
	void CreateViewableObject(const struct FTransform& SpawnTransform, class Aba_col_ViewableNote_01_C** Result, class Aba_col_ViewableNote_01_C* SpawnedNote, const struct FRotator& CallFunc_GetCleanPivotAndOffset_HighPolyRotationOffset, const struct FVector& CallFunc_GetCleanPivotAndOffset_3DNotePivotOffset, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, class Aba_col_ViewableNote_01_C* CallFunc_FinishSpawningActor_ReturnValue);
	void GetViewableNoteClass(class UClass** ViewableNoteClass);
	void Collect(class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, const struct FNoteExperienceHandle& CallFunc_DiscoverEvidence_ExperienceHandle, TArray<class Aba_col_ViewObjectRoom_01_C*>& CallFunc_GetAllActorsOfClass_OutActors, class Aba_col_ViewObjectRoom_01_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue);
	void UserConstructionScript(bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void ReceiveBeginPlay();
	void InternalFinishInteraction();
	void ForcedUse();
	void MovementStateChanged(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode);
	void ForceUseNote(bool BlockForcedMovementChange);
	void MovementStateChangeV2(TSubclassOf<class ACGMovementState> InPreviousMovementState, TSubclassOf<class ACGMovementState> InNewMovementState);
	void UnbindMovementStateChangedV2();
	void AwardExperience();
	void ExecuteUbergraph_ba_col_CollectableNote_01(int32 EntryPoint, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable_1, FDelegateProperty_ Temp_delegate_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_1, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, const struct FSt_StoryNoteInfoStructure& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_4, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsPlayerAbleToInteract_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_5, int32 CallFunc_PostEvent_ReturnValue, int32 CallFunc_PostEvent_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_6, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, bool K2Node_CustomEvent_BlockForcedMovementChange, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InPreviousMovementState, TSubclassOf<class ACGMovementState> K2Node_CustomEvent_InNewMovementState, bool CallFunc_NotEqual_ClassClass_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_7, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue_3, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, class Aba_switchReactionToHero_C* CallFunc_GetActorOfClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void OnViewableNoteShowAnimationFinished__DelegateSignature(class Aba_col_CollectableNote_01_C* Sender);
};

}



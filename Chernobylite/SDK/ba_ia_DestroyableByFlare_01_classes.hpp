#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDD (0x3BA - 0x2DD)
// BlueprintGeneratedClass ba_ia_DestroyableByFlare_01.ba_ia_DestroyableByFlare_01_C
class Aba_ia_DestroyableByFlare_01_C : public Aba_ia_BaseInteractableObject_01_C
{
public:
	uint8                                        Pad_2C6B[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UChildActorComponent*                  QuestMarker;                                       // 0x2E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      SoundSphere;                                       // 0x2F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UBoxComponent*                         Box;                                               // 0x2F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_1_0_1_9AD771424445A4881D047CBA56BB4201;   // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_1__Direction_9AD771424445A4881D047CBA56BB4201; // 0x304(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_2C7D[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_1;                                        // 0x308(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_0_1_Emissive_57D0852A4A32242A88DE3DB0910C6391; // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Timeline_0_0_1_Linear_57D0852A4A32242A88DE3DB0910C6391; // 0x314(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                Timeline_0__Direction_57D0852A4A32242A88DE3DB0910C6391; // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	uint8                                        Pad_2C87[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UTimelineComponent*                    Timeline_0;                                        // 0x320(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsDestructionPending;                              // 0x328(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C8A[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FName                                  UniqueId;                                          // 0x32C(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         AlreadyDestroyed;                                  // 0x334(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2C8F[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnCrystalFullyDestroyed;                           // 0x338(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	TArray<class AActor*>                        HISMAActors;                                       // 0x348(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	TArray<class UMaterialInstanceDynamic*>      CrystalsMDIArray;                                  // 0x358(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            OnCrystalDestroyAnimationStarted;                  // 0x368(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	float                                        TimeToDisappear;                                   // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	bool                                         UseScaling;                                        // 0x37C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         UseCollapse;                                       // 0x37D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         UseOpacityDissolve;                                // 0x37E(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ScaleBrighness;                                    // 0x37F(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	TArray<class AActor*>                        LightActors;                                       // 0x380(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	TArray<float>                                InitialLightSensitivities;                         // 0x390(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ABlockingVolume*>               BlockingVolumes;                                   // 0x3A0(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, ExposeOnSpawn)
	class UAkComponent*                          AkComponent;                                       // 0x3B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         EnableSound;                                       // 0x3B8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         SecretRevealed;                                    // 0x3B9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, SaveGame, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class Aba_ia_DestroyableByFlare_01_C* GetDefaultObj();

	void GetQuestMarkerActor(class Aba_QuestMarker_C** AsBa_Quest_Marker, class Aba_QuestMarker_C* K2Node_DynamicCast_AsBa_Quest_Marker, bool K2Node_DynamicCast_bSuccess);
	void UpdateWidget(bool HasFlare, float FlareCount, class UWid_col_ViewableObjectInteractivePoint_01_C* WidgetObject, const struct FSt_ContextObjectUsage& ObjectInfo, const struct FSt_ContextObjectUsage& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_FFloor_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, const class FString& CallFunc_Conv_IntToString_ReturnValue, float CallFunc_Count_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool Temp_bool_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class UTexture2D* K2Node_Select_Default, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class FText CallFunc_Conv_StringToText_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UWid_col_ViewableObjectInteractivePoint_01_C* K2Node_DynamicCast_AsWid_Col_Viewable_Object_Interactive_Point_01, bool K2Node_DynamicCast_bSuccess);
	void CacheInitialLightSensitivity(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, float Temp_float_Variable, int32 CallFunc_Array_Add_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ULightComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1);
	void TickLightSensitivity(float Multiplier, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, float CallFunc_Multiply_FloatFloat_ReturnValue, class ULightComponent* CallFunc_GetComponentByClass_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void IsCrystalDestroyed(bool* IsDestroyed);
	void DestroyActors(int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_2, class ABlockingVolume* CallFunc_Array_Get_Item, class AActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, class AActor* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_2);
	void InitHISMAActors(const TArray<class FName>& LocalTags, const TArray<class AActor*>& AllActors, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class UHierarchicalInstancedStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void SetSaveState(bool IsDestroyed, bool CallFunc_NotEqual_NameName_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance);
	void CanBeDestroyed(bool* Result, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void UserConstructionScript(const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker);
	void Timeline_0__FinishedFunc();
	void Timeline_0__UpdateFunc();
	void Timeline_1__FinishedFunc();
	void Timeline_1__UpdateFunc();
	void ReceiveBeginPlay();
	void BeginDestruction();
	void OnSaveFullyLoaded();
	void HitByFlare(class Aba_Flare_00_C* Flare, const struct FHitResult& HitInfo);
	void FlareIsNearby(class Aba_Flare_00_C* Flare);
	void OnInteractionPressedComponent(class AMainPawnCpp* PlayerPawn, class UActorComponent* ComponentHit);
	void TryDestroyByInteraction();
	void ChernobyliteCrystalsDisintegrate(float TimeToDisappear, bool UseScaling, bool UseCollapse, bool UseOpacityDissolve, bool ScaleBrightness);
	void ChernobyliteCrystalsPowerOff(bool Reverse, float Speed);
	void CreateChernobyliteCrystalsMDI(TArray<class AActor*>& Actor);
	void DestructionAnimationFinished();
	void CustomEvent();
	void UnbindUpdateWidget();
	void BndEvt__SoundSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult);
	void BndEvt__SoundSphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	void InitQuestMarker();
	void ResolveQuestMarker();
	void ActivateQuestMarker();
	void LoadingFinished();
	void ExecuteUbergraph_ba_ia_DestroyableByFlare_01(int32 EntryPoint, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class UCGGameInstance_C* CallFunc_GetCGGameInstance_AsCGGame_Instance_1, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_NameName_ReturnValue, class Aba_Flare_00_C* K2Node_CustomEvent_Flare_1, const struct FHitResult& K2Node_CustomEvent_HitInfo, class Aba_Flare_00_C* K2Node_CustomEvent_Flare, bool CallFunc_CanBeDestroyed_Result, bool CallFunc_CanBeDestroyed_Result_1, int32 Temp_int_Array_Index_Variable, class AMainPawnCpp* K2Node_Event_PlayerPawn, class UActorComponent* K2Node_Event_ComponentHit, bool CallFunc_CanBeDestroyed_Result_2, bool CallFunc_CanBeDestroyed_Result_3, int32 Temp_int_Array_Index_Variable_1, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, float CallFunc_Count_ReturnValue, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew_1, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Remove_ReturnValue, float K2Node_CustomEvent_TimeToDisappear, bool K2Node_CustomEvent_UseScaling, bool K2Node_CustomEvent_UseCollapse, bool K2Node_CustomEvent_UseOpacityDissolve, bool K2Node_CustomEvent_ScaleBrightness, float CallFunc_Divide_FloatFloat_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool K2Node_CustomEvent_Reverse, float K2Node_CustomEvent_Speed, int32 CallFunc_Add_IntInt_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, int32 Temp_int_Array_Index_Variable_3, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, TArray<class AActor*>& K2Node_CustomEvent_Actor, class AActor* CallFunc_Array_Get_Item_2, class UMaterialInstanceDynamic* CallFunc_Array_Get_Item_3, class UDecalComponent* CallFunc_GetComponentByClass_ReturnValue, class UMaterialInterface* CallFunc_GetDecalMaterial_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, class UHierarchicalInstancedStaticMeshComponent* CallFunc_GetComponentByClass_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, class UMaterialInterface* CallFunc_GetMaterial_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, int32 CallFunc_Array_Add_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_3, int32 CallFunc_Add_IntInt_ReturnValue_3, FDelegateProperty_ Temp_delegate_Variable, TArray<struct FAkExternalSourceInfo>& Temp_struct_Variable, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Lerp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Lerp_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent_1, class AActor* K2Node_ComponentBoundEvent_OtherActor_1, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp_1, int32 K2Node_ComponentBoundEvent_OtherBodyIndex_1, bool K2Node_ComponentBoundEvent_bFromSweep, const struct FHitResult& K2Node_ComponentBoundEvent_SweepResult, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OverlappedComponent, class AActor* K2Node_ComponentBoundEvent_OtherActor, class UPrimitiveComponent* K2Node_ComponentBoundEvent_OtherComp, int32 K2Node_ComponentBoundEvent_OtherBodyIndex, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00, bool K2Node_DynamicCast_bSuccess, class ACh_Hero_00_C* K2Node_DynamicCast_AsCh_Hero_00_1, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAkComponent* CallFunc_SpawnAkComponentAtLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, int32 CallFunc_PostAkEvent_ReturnValue, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_1, class Aba_QuestMarker_C* CallFunc_GetQuestMarkerActor_AsBa_Quest_Marker_2, class Abp_MinimapTag_C* CallFunc_GetMinimapTagChildActor_AsBp_Minimap_Tag);
	void OnCrystalDestroyAnimationStarted__DelegateSignature();
	void OnCrystalFullyDestroyed__DelegateSignature(bool WasFromSave);
};

}



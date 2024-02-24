#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x187 (0x460 - 0x2D9)
// WidgetBlueprintGeneratedClass CF_SaveLoadPrebuilt.CF_SaveLoadPrebuilt_C
class UCF_SaveLoadPrebuilt_C : public UCF_Base_C
{
public:
	uint8                                        Pad_2BCF[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UComboBoxString*                       ComboBoxString_143;                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcarusButtonTemp_C*                   DestroyAllBuildings;                               // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      EditableTextBox_142;                               // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FeedbackText;                                      // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcarusButtonTemp_C*                   LoadButton;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       Origin;                                            // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UIcarusButtonTemp_C*                   SaveButton;                                        // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UComboBoxString*                       Spawn;                                             // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TMap<class FString, int32>                   SaveNameToSlotMap;                                 // 0x328(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        NextEmptySaveSlot;                                 // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2C05[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FSerializedGrid                       DontDeleteStructLoading;                           // 0x380(0x60)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	TSoftClassPtr<class ABuildingGridBase>       GridBaseClass;                                     // 0x3E0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	TMap<class FString, class AActor*>           Out_Actors;                                        // 0x408(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UClass*                                LoadedClass;                                       // 0x458(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UCF_SaveLoadPrebuilt_C* GetDefaultObj();

	class AActor* GetSpawn(const class FString& CallFunc_GetSelectedOption_ReturnValue, class AActor* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	class AActor* GetOrigin(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const class FString& CallFunc_GetSelectedOption_ReturnValue, class AActor* CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue);
	void UpdateOrigin(int32 SaveSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AQuestMarker*>& CallFunc_GetAllActorsOfClass_OutActors, class AQuestMarker* CallFunc_Array_Get_Item, const class FString& CallFunc_Conv_ObjectToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void UpdateSaves(int32 SaveSlot, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class FString>& CallFunc_GetSavedStructureFiles_ReturnValue, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void OnLoaded_92ED3CD8470278AA4735C186CB6B15F0(TSubclassOf<class UObject> Loaded);
	void Construct();
	void FailedFeedback();
	void OverwrittenFeedback(int32 Slot);
	void NewSaveFeedback(int32 Slot);
	void LoadFeedback(int32 Slot);
	void FinishThenClearFeedback();
	void DestroyBuildingsFeedback();
	void BndEvt__LoadButton_K2Node_ComponentBoundEvent_3_OnClicked__DelegateSignature();
	void BndEvt__SaveButton_K2Node_ComponentBoundEvent_4_OnClicked__DelegateSignature();
	void BndEvt__DestroyAllBuildings_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
	void ExecuteUbergraph_CF_SaveLoadPrebuilt(int32 EntryPoint, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsPrebuilt_Structure, bool K2Node_ClassDynamicCast_bSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_Has_Been_Initd_Variable, const class FString& CallFunc_GetSelectedOption_ReturnValue, const class FString& CallFunc_GetSaveStructureString_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, int32 K2Node_CustomEvent_slot_2, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, int32 K2Node_CustomEvent_slot_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const struct FSlateColor& K2Node_MakeStruct_SlateColor_2, class FText CallFunc_Conv_StringToText_ReturnValue_2, int32 K2Node_CustomEvent_slot, const class FString& CallFunc_Conv_IntToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const struct FSlateColor& K2Node_MakeStruct_SlateColor_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, class FText CallFunc_Conv_StringToText_ReturnValue_3, TArray<class AActor*>& Temp_object_Variable, const struct FSlateColor& K2Node_MakeStruct_SlateColor_4, class FText CallFunc_GetText_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor_5, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, class FText CallFunc_Conv_StringToText_ReturnValue_4, bool Temp_bool_Whether_the_gate_is_currently_open_or_close_Variable, TArray<class ABuildingBase*>& CallFunc_GetAllActorsOfClass_OutActors, TArray<class ABuildingGridBase*>& CallFunc_GetAllActorsOfClass_OutActors_1, class ABuildingBase* CallFunc_Array_Get_Item, class ABuildingGridBase* CallFunc_Array_Get_Item_1, class ABuildingGridBase* CallFunc_GetParentGrid_ReturnValue, bool CallFunc_GetIsQueued_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool Temp_bool_IsClosed_Variable, class FText CallFunc_GetText_ReturnValue_1, enum class EValid CallFunc_GetIcarusPlayerCharacter_IsValid, class AIcarusPlayerCharacter* CallFunc_GetIcarusPlayerCharacter_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, bool K2Node_SwitchEnum_CmpSuccess, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, float CallFunc_Subtract_FloatFloat_ReturnValue, class AActor* CallFunc_GetOrigin_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, class AActor* CallFunc_GetSpawn_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, bool CallFunc_IsValid_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FTransform& CallFunc_GetTransform_ReturnValue_1, class APrebuiltStructure* CallFunc_FinishSpawningActor_ReturnValue, const class FString& CallFunc_Conv_TransformToString_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValidClass_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, class APrebuiltStructure* CallFunc_FinishSpawningActor_ReturnValue_1);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD0 (0x330 - 0x260)
// WidgetBlueprintGeneratedClass wid_EndGameComposition.wid_EndGameComposition_C
class UWid_EndGameComposition_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      FadeBlackBarsAnim;                                 // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      FadeAnim;                                          // 0x270(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                BlackBars;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Fade;                                              // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ImageCompositionPlane;                             // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              MaterialInstance;                                  // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FEndGameCompositionAnimationInfo> AnimationInfos;                                    // 0x298(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FEndGameCompositionAnimationInfo      Temp;                                              // 0x2A8(0x30)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Duration;                                          // 0x2D8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CurrentTime;                                       // 0x2DC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UDialogueComponent*                    DialogueComponent;                                 // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	float                                        FadeDuration;                                      // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PostFadeDelay;                                     // 0x2EC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CurrentScreenIndex;                                // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CurrentComposition;                                // 0x2F4(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_15FC[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FDataTableRowHandle                   CurrentScreenHandle;                               // 0x300(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         IsScreenPrepared;                                  // 0x310(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_1600[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        DialogueDelay;                                     // 0x314(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlaying;                                         // 0x318(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_160B[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnFinished;                                        // 0x320(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UWid_EndGameComposition_C* GetDefaultObj();

	float GetTimeAlpha(float CallFunc_Divide_FloatFloat_ReturnValue);
	void UpdateTime(float Delta, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue);
	void TickAnimation(struct FEndGameCompositionAnimationInfo& AnimationStruct, float Alpha, struct FEndGameCompositionAnimationInfo* UpdatedAnimationStruct, float NewScale, const struct FVector2D& NewOffset, float CallFunc_Lerp_ReturnValue, const struct FEndGameCompositionAnimationInfo& K2Node_MakeStruct_EndGameCompositionAnimationInfo, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Lerp_ReturnValue_1, float CallFunc_Lerp_ReturnValue_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue);
	void UpdateMaterial(int32 Index, struct FEndGameCompositionAnimationInfo& AnimationInfo, class UTexture2D* Image, bool CallFunc_IsValid_ReturnValue, class FName CallFunc_GetParameterNames_sca, class FName CallFunc_GetParameterNames_x, class FName CallFunc_GetParameterNames_y, class FName CallFunc_GetParameterNames_image, class FName CallFunc_GetParameterNames_alp, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_FClamp_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_2, float CallFunc_NormalizeToRange_ReturnValue, float CallFunc_FClamp_ReturnValue_1);
	void GetParameterNames(int32 Type, class FName* Sca, class FName* X, class FName* Y, class FName* Image, class FName* Alp, bool K2Node_SwitchInteger_CmpSuccess);
	void InitScene(const struct FEndGameCompositionImageInfo& Scene);
	void Construct();
	void StartDialogue();
	void DialogueEnded();
	void ResetDialogueEnded();
	void BeginFadeIn();
	void BeginFadeOut();
	void AnimationFadeFinished();
	void SetupCompositionScene(class FName Composition);
	void PrepareNextCompositionScreen();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StartPreparedScreen();
	void Finished();
	void ResetMaterialAtIndex(int32 Index);
	void BeginFadeBlackBars();
	void ExecuteUbergraph_wid_EndGameComposition(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FEndGameCompositionImageInfo& K2Node_CustomEvent_Scene, bool Temp_bool_Has_Been_Initd_Variable_1, const struct FEndGameCompositionAnimationInfo& CallFunc_TickAnimation_UpdatedAnimationStruct, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool Temp_bool_IsClosed_Variable_1, float CallFunc_Divide_FloatFloat_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FName K2Node_CustomEvent_Composition, float CallFunc_EstimateDuration_ReturnValue, const struct FEndGameCompositionScene& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FEndGameCompositionScreenInfo& CallFunc_GetDataTableRowFromName_OutRow_1, bool CallFunc_GetDataTableRowFromName_ReturnValue_1, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, int32 Temp_int_Variable_1, const struct FEndGameCompositionAnimationInfo& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, float CallFunc_GetTimeAlpha_ReturnValue, const struct FEndGameCompositionAnimationInfo& CallFunc_TickAnimation_UpdatedAnimationStruct_1, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_2, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, float CallFunc_Multiply_IntFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, const struct FDataTableRowHandle& CallFunc_Array_Get_Item_1, const struct FEndGameCompositionInfo& CallFunc_GetDataTableRowFromName_OutRow_2, bool CallFunc_GetDataTableRowFromName_ReturnValue_2, int32 K2Node_CustomEvent_Index, const struct FEndGameCompositionAnimationInfo& K2Node_MakeStruct_EndGameCompositionAnimationInfo, class FName CallFunc_GetParameterNames_sca, class FName CallFunc_GetParameterNames_x, class FName CallFunc_GetParameterNames_y, class FName CallFunc_GetParameterNames_image, class FName CallFunc_GetParameterNames_alp, bool CallFunc_NotEqual_NameName_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class ACGMovementState* CallFunc_SetNewMovementState_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void OnFinished__DelegateSignature();
};

}



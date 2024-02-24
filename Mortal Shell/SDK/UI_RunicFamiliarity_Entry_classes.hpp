#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1DC (0x40C - 0x230)
// WidgetBlueprintGeneratedClass UI_RunicFamiliarity_Entry.UI_RunicFamiliarity_Entry_C
class UUI_RunicFamiliarity_Entry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_Failed;                                       // 0x238(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Update_BW;                                    // 0x240(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_Update_FW;                                    // 0x248(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_BG;                                          // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Frame;                                       // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Familiarity;                           // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Entry;                                 // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URetainerBox*                          RetainerBox_Reward;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RTB_Reward;                                        // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Reward;                                  // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Failed;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Maxed;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Text_Requirement;                                  // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFamiliarityWidget_C*                  UI_StormModeFamiliarity;                           // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  Text_Reward_Design;                                // 0x2A8(0x18)(Edit, BlueprintVisible)
	class FText                                  Text_Requirement_Design;                           // 0x2C0(0x18)(Edit, BlueprintVisible)
	class FName                                  ID;                                                // 0x2D8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HaxXValue;                                         // 0x2E0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         HasTier;                                           // 0x2E1(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2881[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<int32>                                XValueMax;                                         // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         bUnlocked;                                         // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2888[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Percent;                                           // 0x2FC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Tier;                                              // 0x300(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2893[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  Text_Requirement_Value;                            // 0x308(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  Text_Reward_Value;                                 // 0x320(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         RevealEffect;                                      // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28A2[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UMaterialInstanceDynamic*              MID_Retainer;                                      // 0x340(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class Enum_Rune_Tier                    ETier;                                             // 0x348(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28B3[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	int32                                        CurrentProgress;                                   // 0x34C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        RemainingProgress;                                 // 0x350(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LastTierMaxProgress;                               // 0x354(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DeltaTime;                                         // 0x358(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_28D1[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            EntryShown;                                        // 0x360(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         Scrolling_Enabled;                                 // 0x370(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_28DF[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Offset_Max;                                        // 0x374(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset_Target;                                     // 0x378(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Offset_Delta;                                      // 0x37C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        XMax;                                              // 0x380(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ShowPreviousTier;                                  // 0x384(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_2901[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FStruct_MilestoneUnlock               Entry;                                             // 0x388(0x71)(Edit, BlueprintVisible, DisableEditOnInstance, HasGetValueTypeHash)
	uint8                                        Pad_2905[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	bool                                         FamiliarityAnimateLast;                            // 0x400(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ShowPreviousTierEnabled;                           // 0x401(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         IsForStormModeEndingScreen;                        // 0x402(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         ResetOnDeath_;                                     // 0x403(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	float                                        Progress_Out;                                      // 0x404(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Diamonds_Out;                                      // 0x408(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_RunicFamiliarity_Entry_C* GetDefaultObj();

	void ShouldPlayFailedAnim(class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_NotEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void DebugLastDiamongMaxed(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void DebugLastDiamongFilled(const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3);
	void StartScrolling(float CallFunc_GetScrollOffsetOfEnd_ReturnValue);
	float SetBarPercent(float CallFunc_FInterpTo_ReturnValue);
	void SetScrolling(float CallFunc_GetScrollOffset_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	void GetCurrentProgressIfHasXValue(int32 CallFunc_Array_LastIndex_ReturnValue, int32 CallFunc_Array_Get_Item, int32 CallFunc_Array_Get_Item_1, int32 CallFunc_Subtract_IntInt_ReturnValue);
	class FText GetRequirementTextWithXValue(const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void ShowRequirement();
	float HandleRevealEffect(bool CallFunc_IsValid_ReturnValue, float CallFunc_K2_GetScalarParameterValue_ReturnValue, float CallFunc_FInterpTo_ReturnValue);
	void ShowMaxed();
	class FText GetRewardTextWithTier(bool InDesign, int32 Temp_int_Variable, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_1, const class FString& CallFunc_ToLower_ReturnValue, const class FString& CallFunc_ToLower_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_2, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue_3, const class FString& CallFunc_ToLower_ReturnValue_2, const class FString& CallFunc_ToLower_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, bool Temp_bool_Variable, int32 CallFunc_Subtract_IntInt_ReturnValue, bool Temp_bool_Variable_1, class FText K2Node_Select_Default, int32 K2Node_Select_Default_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& K2Node_Select_Default_2, const class FString& CallFunc_Replace_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_TextToLower_ReturnValue);
	void SetRewardText(class FText CallFunc_GetRewardTextWithTier_ReturnValue, class FText CallFunc_TextToLower_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue);
	void SetRequirementText(class FText CallFunc_GetRequirementTextWithXValue_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void PopulateEntry(const struct FStruct_MilestoneUnlock& Entry, class FText Local_RequirementText, class FText Local_RewardText, const struct FStruct_MilestoneUnlock& K2Node_MakeStruct_Struct_MilestoneUnlock, class APlayerController* CallFunc_GetPlayerController_ReturnValue, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC, bool K2Node_DynamicCast_bSuccess, float CallFunc_StormMode_GetEndingProgress_Progress, bool CallFunc_BooleanAND_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, TScriptInterface<class IBPI_StormMode_PC_C> K2Node_DynamicCast_AsBPI_Storm_Mode_PC_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsMilestoneUnlocked_bUnlocked, int32 CallFunc_IsMilestoneUnlocked_Current, float CallFunc_IsMilestoneUnlocked_Percent, int32 CallFunc_IsMilestoneUnlocked_Tier, TArray<int32>& CallFunc_IsMilestoneUnlocked_TiersX, bool CallFunc_IsMilestoneUnlocked_HasTier, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, int32 CallFunc_Array_Get_Item);
	void Construct();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void StartRevealEffect(float Delay);
	void ScrollBox_Bind();
	void ScrollBox_Set();
	void Reset_Offset_Start();
	void Reset_Offset_End();
	void PreConstruct(bool IsDesignTime);
	void SetFamiliarity();
	void BndEvt__UI_Familiarity_K2Node_ComponentBoundEvent_0_LastDiamondFilled__DelegateSignature();
	void OnUpdateAnimEnd_FW();
	void OnUpdateAnimEnd_BW();
	void BndEvt__UI_StormModeFamiliarity_K2Node_ComponentBoundEvent_1_LastDiamondMaxed__DelegateSignature();
	void EntryShown_Set();
	void ResetFamiliarity();
	void ExecuteUbergraph_UI_RunicFamiliarity_Entry(int32 EntryPoint, bool Temp_bool_Variable, float Temp_float_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_FTrunc_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable_1, bool Temp_bool_IsClosed_Variable_2, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable_2, bool Temp_bool_Has_Been_Initd_Variable_3, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, float K2Node_CustomEvent_Delay, float CallFunc_HandleRevealEffect_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool K2Node_Event_IsDesignTime, class FText CallFunc_GetRewardTextWithTier_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, bool Temp_bool_IsClosed_Variable_3, float K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue);
	void EntryShown__DelegateSignature(class FName ID);
};

}



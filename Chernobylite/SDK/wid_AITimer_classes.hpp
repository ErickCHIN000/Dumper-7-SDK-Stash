#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD9 (0x339 - 0x260)
// WidgetBlueprintGeneratedClass wid_AITimer.wid_AITimer_C
class UWid_AITimer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient, UObjectWrapper)
	class UWidgetAnimation*                      ShowHIde;                                          // 0x268(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Frame;                                             // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBox;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              VisibilityOverlay;                                 // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FText                                  HuntText;                                          // 0x288(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  AlertText;                                         // 0x2A0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  BlackStalkerText;                                  // 0x2B8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	float                                        SecTickAccumulate;                                 // 0x2D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1CB5[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UClass*>                        AggroClasses;                                      // 0x2D8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<enum class ESquadType>                SquadTypes;                                        // 0x2E8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                ChaseTimesElapsed;                                 // 0x2F8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<float>                                ChaseTimesMax;                                     // 0x308(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	TArray<class ACGAICharacter*>                Aggrolist;                                         // 0x318(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance)
	class FString                                DarkStalkerRemaining;                              // 0x328(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)
	bool                                         IsCustomTimer;                                     // 0x338(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UWid_AITimer_C* GetDefaultObj();

	class UTexture2D* GetFrameTextureByCustomType(enum class EAITimerCustomFrameType FrameType, enum class EAITimerCustomFrameType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* K2Node_Select_Default);
	void CustomUpdate(enum class EAILogType AIType, enum class EAITimerCustomFrameType FrameType, class FName AdditionalTextID, TMap<class FString, class FText> KeyTextMap, class FText AdditionalText, const struct FLocalizedTextInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_GetTextBasedOnType_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, class UTexture2D* CallFunc_GetFrameTextureByCustomType_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_ReplaceKeyWithText_NewText, int32 CallFunc_Len_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void RefreshVisibility(bool bInVisible, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, bool CallFunc_IsAnimationPlayingForward_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_IsAnimationPlayingForward_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue_1, float CallFunc_GetRenderOpacity_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1);
	void GetLongestChaseTime(TArray<float>& InChaseTimesElapsed, TArray<float>& InChaseTimesMax, float* OutLongestChaseTime, const TArray<float>& Combinations, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_MaxOfFloatArray_IndexOfMaxValue, float CallFunc_MaxOfFloatArray_MaxValue, int32 CallFunc_Array_Add_ReturnValue);
	void GetShortestChaseTime(TArray<float>& InChaseTimesElapsed, TArray<float>& InChaseTimesMax, float* OutShortestChaseTime, const TArray<float>& Combinations, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, float CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Subtract_FloatFloat_ReturnValue, int32 CallFunc_MinOfFloatArray_IndexOfMinValue, float CallFunc_MinOfFloatArray_MinValue, int32 CallFunc_Array_Add_ReturnValue);
	class FText GetTextBasedOnType(enum class EAILogType Type, enum class EAILogType Temp_byte_Variable, class FText K2Node_Select_Default);
	void GetFrameTexture(enum class EAILogType LogType, class UTexture2D** Texture, enum class EAILogType Temp_byte_Variable, class UTexture2D* Temp_object_Variable, class UTexture2D* Temp_object_Variable_1, class UTexture2D* Temp_object_Variable_2, class UTexture2D* K2Node_Select_Default);
	void Update(enum class EAILogType Type, const class FString& Duration, class UTexture2D* CallFunc_GetFrameTexture_Texture, class FText CallFunc_GetTextBasedOnType_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue);
	void Tick1Sec();
	void AggroEmpty();
	void DarkStalkerAggroed();
	void HuntSquad();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void ChaseSquad();
	void BindPhotomodeToggled();
	void UnbindPhotomodeToggled();
	void PhotomodeChanged(bool bIsActivated);
	void Construct();
	void Destruct();
	void ExecuteUbergraph_wid_AITimer(int32 EntryPoint, enum class ESquadType Temp_byte_Variable, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, TArray<class ACGAICharacter*>& CallFunc_GetCurrentAggroList_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_ContainsChildOf_bOutContains, bool CallFunc_Greater_FloatFloat_ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_ContainsChildOf_bOutContains_1, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, enum class ESquadType Temp_byte_Variable_3, bool CallFunc_Array_Contains_ReturnValue_1, int32 CallFunc_MaxOfFloatArray_IndexOfMaxValue, float CallFunc_MaxOfFloatArray_MaxValue, int32 Temp_int_Array_Index_Variable, const class FString& CallFunc_FloatToMinSec_OutMinsec, class ACGAICharacter* CallFunc_Array_Get_Item, TScriptInterface<class ICh_darkStalker_00_Interface_C> K2Node_DynamicCast_AsCh_Dark_Stalker_00_Interface, bool K2Node_DynamicCast_bSuccess, class ACGSoldier* K2Node_DynamicCast_AsCGSoldier, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_GetTimerRemainingString_String, class UBlackboardComponent* CallFunc_GetCGBlackboardComponent_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueAsFloat_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, class ACGSquadManager* CallFunc_GetSquadManager_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, enum class ESquadType CallFunc_GetSquadType_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, float CallFunc_GetLongestChaseTime_OutLongestChaseTime, const class FString& CallFunc_FloatToMinSec_OutMinsec_1, class ACGGameModeBase* CallFunc_GetCGGameModeBase_ReturnValue, bool K2Node_CustomEvent_bIsActivated, enum class ESlateVisibility K2Node_Select_Default, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
};

}



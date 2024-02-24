#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x390 - 0x340)
// WidgetBlueprintGeneratedClass WBP_PlayerBar_Rest.WBP_PlayerBar_Rest_C
class UWBP_PlayerBar_Rest_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      LowRestWarning;                                    // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_circle;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Rest;                                  // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       RestBarMaxProgress;                                // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UNWXAttributeSet*                      AttributeSet;                                      // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          RestBarColor;                                      // 0x380(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerBar_Rest_C* GetDefaultObj();

	class UWidget* GetTooltipWidget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_RestBar_Tooltip_C* CallFunc_Create_ReturnValue);
	void OnRestChanged(float Delta, double FedPercentFloat, double CallFunc_Get_Tired_Threshold_Percentage_TiredThreshold, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, bool CallFunc_GetPlayerAttributeValue_Success, double CallFunc_GetPlayerAttributeValue_Value, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_GetPlayerAttributeValue_Success_1, double CallFunc_GetPlayerAttributeValue_Value_1, double CallFunc_SafeDivide_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void UnbindEvents(class APawn* Pawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXAttributeSet* CallFunc_GetAttributeSet_AttributeSet, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void GetAttributeSet(class APawn* Pawn, class UNWXAttributeSet** AttributeSet, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnClientReadyHandler(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class UNWXAttributeSet* CallFunc_GetAttributeSet_AttributeSet);
	void GetPlayerAttributeValue(const struct FGameplayAttribute& Stat, bool* Success, double* Value, class APawn* LOwningPlayerPawn, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast);
	void OnPawnPossessedAndReady(class APawn* NewPawn);
	void OnPawnUnpossessed(class APawn* OldPawn);
	void ExecuteUbergraph_WBP_PlayerBar_Rest(int32 EntryPoint, class APawn* K2Node_Event_OldPawn, class APawn* K2Node_Event_NewPawn);
};

}



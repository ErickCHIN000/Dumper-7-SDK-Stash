#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x398 - 0x340)
// WidgetBlueprintGeneratedClass WBP_PlayerBar_Fed.WBP_PlayerBar_Fed_C
class UWBP_PlayerBar_Fed_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      LowFedWarning;                                     // 0x348(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_0;                                   // 0x350(0x8)(ExportObject, ZeroConstructor, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_97;                                          // 0x358(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Img_circle;                                        // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Fed;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       FedBarMaxProgress;                                 // 0x370(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABP_GameState_C*                       GameState;                                         // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UNWXAttributeSet*                      AttributeSet;                                      // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          FedBarColor;                                       // 0x388(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_PlayerBar_Fed_C* GetDefaultObj();

	class UWidget* Get_Tool_Tip_Widget(class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UWBP_FedBar_Tooltip_C* CallFunc_Create_ReturnValue);
	void UnbindEvents(class APawn* Pawn, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXAttributeSet* CallFunc_GetAttributeSet_AttributeSet, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnFedChanged(float Delta, double FedFloatPercent, double CallFunc_Get_Starving_Threshold_Percentage_StarvingThreshold, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_GetPlayerAttributeValue_Success, double CallFunc_GetPlayerAttributeValue_Value, bool CallFunc_GetPlayerAttributeValue_Success_1, double CallFunc_GetPlayerAttributeValue_Value_1, double CallFunc_SafeDivide_ReturnValue, float CallFunc_SetPercent_InPercent_ImplicitCast);
	void GetAttributeSet(class APawn* Pawn, class UNWXAttributeSet** AttributeSet, class ANWXCharacter* K2Node_DynamicCast_AsNWXCharacter, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
	void OnClientReadyHandler(class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UNWXAttributeSet* CallFunc_GetAttributeSet_AttributeSet, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1);
	void OnConstructHandler(class AGameStateBase* UncastGameState, class ABP_GameState_C* K2Node_DynamicCast_AsBP_Game_State, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsReady_Ready, class AGameStateBase* CallFunc_GetGameState_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
	void GetPlayerAttributeValue(const struct FGameplayAttribute& Stat, bool* Success, double* Value, class APawn* LOwningPlayerPawn, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double K2Node_FunctionResult_Value_ImplicitCast);
	void OnPawnPossessedAndReady(class APawn* NewPawn);
	void OnPawnUnpossessed(class APawn* OldPawn);
	void ExecuteUbergraph_WBP_PlayerBar_Fed(int32 EntryPoint, class APawn* K2Node_Event_OldPawn, class APawn* K2Node_Event_NewPawn);
};

}



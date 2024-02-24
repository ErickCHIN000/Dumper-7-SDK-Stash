#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x398 - 0x360)
// WidgetBlueprintGeneratedClass WBP_MicrophoneStatusButton.WBP_MicrophoneStatusButton_C
class UWBP_MicrophoneStatusButton_C : public UNWXMicrophoneStatusWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x360(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                MicrophoneImage;                                   // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_Common_Button_Base_C*             MuteButton;                                        // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MuteButtonOverlay;                                 // 0x378(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MutedSlashImage;                                   // 0x380(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       OriginalOpacity;                                   // 0x388(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MutedOpacity;                                      // 0x390(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MicrophoneStatusButton_C* GetDefaultObj();

	void BP_HandleMuteStatusChanged(enum class EMuteAction MuteAction, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_SetOpacity_InOpacity_ImplicitCast, float CallFunc_SetOpacity_InOpacity_ImplicitCast_1);
	void BP_HandleSpeakerStatusChanged(const class FString& InPlayerName, bool IsSpeaking, bool IsLocalPlayer, const class FString& UniqueID, bool Temp_bool_Variable, bool CallFunc_GetIsPlayerMuted_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_SetOpacity_InOpacity_ImplicitCast, float CallFunc_SetOpacity_InOpacity_ImplicitCast_1);
	void Initialize(class FString& InUniqueID, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_GetIsPlayerMuted_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, enum class ESlateVisibility K2Node_Select_Default, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, float CallFunc_SetOpacity_InOpacity_ImplicitCast, double K2Node_VariableSet_OriginalOpacity_ImplicitCast);
	void BndEvt__WBP_MicrophoneStatusButton_MuteButton_K2Node_ComponentBoundEvent_0_CommonButtonBaseClicked__DelegateSignature(class UCommonButtonBase* Button);
	void ExecuteUbergraph_WBP_MicrophoneStatusButton(int32 EntryPoint, class UMutePlayerSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, class UCommonButtonBase* K2Node_ComponentBoundEvent_Button, bool CallFunc_MutePlayer_ReturnValue, bool CallFunc_GetIsPlayerMuted_ReturnValue, bool CallFunc_UnMutePlayer_ReturnValue);
};

}



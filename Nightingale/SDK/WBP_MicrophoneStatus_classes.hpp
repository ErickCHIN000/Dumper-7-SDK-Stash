#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x388 - 0x360)
// WidgetBlueprintGeneratedClass WBP_MicrophoneStatus.WBP_MicrophoneStatus_C
class UWBP_MicrophoneStatus_C : public UNWXMicrophoneStatusWidget
{
public:
	class UImage*                                MicrophoneImage;                                   // 0x360(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MuteButtonOverlay;                                 // 0x368(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                MutedSlashImage;                                   // 0x370(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	double                                       OriginalOpacity;                                   // 0x378(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MutedOpacity;                                      // 0x380(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_MicrophoneStatus_C* GetDefaultObj();

	void Initialize(const class FString& InUniqueID, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_GetIsPlayerMuted_ReturnValue, float CallFunc_GetRenderOpacity_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, const class FString& CallFunc_GetLocalPlayerPersistentId_PlayerId, bool CallFunc_EqualEqual_StrStr_ReturnValue, enum class ESlateVisibility K2Node_Select_Default_1, float CallFunc_SetOpacity_InOpacity_ImplicitCast, double K2Node_VariableSet_OriginalOpacity_ImplicitCast);
	void BP_HandleMuteStatusChanged(enum class EMuteAction MuteAction, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_SetOpacity_InOpacity_ImplicitCast, float CallFunc_SetOpacity_InOpacity_ImplicitCast_1);
	void BP_HandleSpeakerStatusChanged(const class FString& InPlayerName, bool IsSpeaking, bool IsLocalPlayer, const class FString& UniqueID, bool Temp_bool_Variable, bool CallFunc_GetIsPlayerMuted_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, enum class ESlateVisibility K2Node_Select_Default, float CallFunc_SetOpacity_InOpacity_ImplicitCast, float CallFunc_SetOpacity_InOpacity_ImplicitCast_1);
};

}



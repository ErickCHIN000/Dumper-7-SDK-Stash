#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x280 - 0x230)
// WidgetBlueprintGeneratedClass SaveEditor_MainTab.SaveEditor_MainTab_C
class USaveEditor_MainTab_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Threerd_Chapter;                                   // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ActivateGodMode;                                   // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      MoneyEditBox;                                      // 0x248(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UEditableTextBox*                      NeutralsLevelEditBox;                              // 0x250(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ResetAchievements;                                 // 0x258(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SkipActiveTasks;                                   // 0x260(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               TeleportToMark;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             UVCheckBox;                                        // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class AGenericCharacter_C*                   Player;                                            // 0x278(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USaveEditor_MainTab_C* GetDefaultObj();

	void Update(class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetActualNeutralsLevel_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetValue_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue);
	void Construct();
	void BndEvt__MoneyEditBox_K2Node_ComponentBoundEvent_275_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__UVCheckBox_K2Node_ComponentBoundEvent_303_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
	void BndEvt__NeutralsLevelEditBox_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void BndEvt__MontrumButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ResetAchievements_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ActivateGodMode_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__SkipActivetasks_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__TeleportToMark_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_SaveEditor_MainTab(int32 EntryPoint, class ASHMapManager* CallFunc_GetMapManager_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue, class AGenericCharacter_C* K2Node_DynamicCast_AsGeneric_Character, bool K2Node_DynamicCast_bSuccess, float CallFunc_BreakVector_X, float CallFunc_BreakVector_Y, float CallFunc_BreakVector_Z, class FText K2Node_ComponentBoundEvent_Text_1, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, float CallFunc_Conv_StringToFloat_ReturnValue, bool K2Node_ComponentBoundEvent_bIsChecked, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State, bool K2Node_DynamicCast_bSuccess_1, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, float CallFunc_Conv_StringToFloat_ReturnValue_1, class ASHQuestManager* CallFunc_GetQuestManager_ReturnValue, class ASHPlayerState* K2Node_DynamicCast_AsSHPlayer_State_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_1, bool CallFunc_K2_TeleportTo_ReturnValue, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance_1, bool K2Node_DynamicCast_bSuccess_5, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller_1, bool K2Node_DynamicCast_bSuccess_6, class APawn* CallFunc_GetOwningPlayerPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_2, class ASHPlayerCharacter* K2Node_DynamicCast_AsSHPlayer_Character, bool K2Node_DynamicCast_bSuccess_7, class AController* CallFunc_GetController_ReturnValue, class AMyPlayerController_C* K2Node_DynamicCast_AsMy_Player_Controller, bool K2Node_DynamicCast_bSuccess_8, class UGameInstance* CallFunc_GetGameInstance_ReturnValue_2, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class USHGameInstance* K2Node_DynamicCast_AsSHGame_Instance_2, bool K2Node_DynamicCast_bSuccess_9, bool CallFunc_IsValid_ReturnValue_3, class ASHPlayerController* K2Node_DynamicCast_AsSHPlayer_Controller_2, bool K2Node_DynamicCast_bSuccess_10);
};

}



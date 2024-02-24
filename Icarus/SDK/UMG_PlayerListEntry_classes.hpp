#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA50 (0xCB0 - 0x260)
// WidgetBlueprintGeneratedClass UMG_PlayerListEntry.UMG_PlayerListEntry_C
class UUMG_PlayerListEntry_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        CharacterEntry;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CharacterLevelText;                                // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CharacterName;                                     // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CharacterStatus;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_95;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        RatingButtons;                                     // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               SettledState;                                      // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ThumbsDown;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ThumbsUp;                                          // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               UnSettledState;                                    // 0x2B0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          Button_Up_Default;                                 // 0x2B8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Button_Up_Selected;                                // 0x530(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Button_Down_Default;                               // 0x7A8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Button_Down_Selected;                              // 0xA20(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CanRate;                                           // 0xC98(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_57C0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FString                                PendingLoadPlayerId;                               // 0xCA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_PlayerListEntry_C* GetDefaultObj();

	void ShowRatings();
	void Set_Rating_Button_Style(bool Liked);
	void IsSettled(bool Settled);
	void OnFailure_F261DD19407D95F6521E3A9C07B7A8CF(const struct FGetIcarusPlayerPersonaResult& Result);
	void OnSuccess_F261DD19407D95F6521E3A9C07B7A8CF(const struct FGetIcarusPlayerPersonaResult& Result);
	void PreConstruct(bool IsDesignTime);
	void BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void BndEvt__ThumbsDown_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ShowPlayerDetails(const struct FAssociatedMemberInfo& MemberInfo);
	void ExecuteUbergraph_UMG_PlayerListEntry(int32 EntryPoint, const struct FGetIcarusPlayerPersonaResult& K2Node_CustomEvent_Result_1, const struct FGetIcarusPlayerPersonaResult& K2Node_CustomEvent_Result, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FGetIcarusPlayerPersonaResult& Temp_struct_Variable, bool K2Node_Event_IsDesignTime, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FAssociatedMemberInfo& K2Node_CustomEvent_MemberInfo, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_CalculatePlayerLevel_ReturnValue, class URequestPlayerPersona* CallFunc_IcarusRequestPlayerPersona_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsEmpty_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, class FText CallFunc_Conv_StringToText_ReturnValue_3, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, class FText CallFunc_Format_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AIcarusPlayerController* K2Node_DynamicCast_AsIcarus_Player_Controller, bool K2Node_DynamicCast_bSuccess, class AIcarusPlayerState* CallFunc_GetIcarusPlayerState_ReturnValue, const struct FOnlineProfileUser& CallFunc_GetActiveUserProfile_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue_2);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA59 (0xCB9 - 0x260)
// WidgetBlueprintGeneratedClass UMG_MissionCompletePlayer.UMG_MissionCompletePlayer_C
class UUMG_MissionCompletePlayer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        CharacterEntry;                                    // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            CharacterName;                                     // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                HostImage;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            Level;                                             // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               ThumbsUp;                                          // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FButtonStyle                          Button_Up_Default;                                 // 0x290(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Button_Up_Selected;                                // 0x508(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Button_Down_Default;                               // 0x780(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FButtonStyle                          Button_Down_Selected;                              // 0x9F8(0x278)(Edit, BlueprintVisible, DisableEditOnInstance)
	bool                                         CanRate;                                           // 0xC70(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)
	bool                                         Liked;                                             // 0xC71(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_3C78[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FAssociatedMemberInfo                 Member;                                            // 0xC78(0x40)(Edit, BlueprintVisible, ExposeOnSpawn)
	bool                                         Host;                                              // 0xCB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn)

	static class UClass* StaticClass();
	static class UUMG_MissionCompletePlayer_C* GetDefaultObj();

	void ShowRatings();
	void Set_Rating_Button_Style(bool Liked);
	void IsSettled(bool Settled);
	void PreConstruct(bool IsDesignTime);
	void Construct();
	void BndEvt__ThumbsUp_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UMG_MissionCompletePlayer(int32 EntryPoint, const struct FCharacterGrowth& CallFunc_GetCharacterGrowthStruct_CharacterGrowth, enum class EValid CallFunc_GetCharacterGrowthStruct_Paths, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_CalculatePlayerLevel_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, int32 CallFunc_Clamp_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}



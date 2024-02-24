#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x60 (0x350 - 0x2F0)
// WidgetBlueprintGeneratedClass UMG_ClaimLaunch_LobbyPrivacy.UMG_ClaimLaunch_LobbyPrivacy_C
class UUMG_ClaimLaunch_LobbyPrivacy_C : public UUMG_ArrowSelectionWidget_Text_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	enum class ELobbyPrivacy                     DefaultSelection;                                  // 0x2F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1EA7[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<enum class ELobbyPrivacy, class FText>  LobbyPrivacyTexts;                                 // 0x300(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUMG_ClaimLaunch_LobbyPrivacy_C* GetDefaultObj();

	void GetLobbyPrivacy(enum class ELobbyPrivacy* LobbyPrivacy, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class FText CallFunc_GetSelectedOption_SelectedRow, TArray<enum class ELobbyPrivacy>& CallFunc_Map_Keys_Keys, int32 CallFunc_Array_Length_ReturnValue, enum class ELobbyPrivacy CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_UMG_ClaimLaunch_LobbyPrivacy(int32 EntryPoint, TArray<enum class ELobbyPrivacy>& CallFunc_Map_Keys_Keys, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, enum class ELobbyPrivacy CallFunc_Array_Get_Item, class FText CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_AddOption_Index, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_EqualEqual_ByteByte_ReturnValue);
};

}



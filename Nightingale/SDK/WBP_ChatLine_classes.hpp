#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x3C8 - 0x340)
// WidgetBlueprintGeneratedClass WBP_ChatLine.WBP_ChatLine_C
class UWBP_ChatLine_C : public UNWXUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x340(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class URichTextBlock*                        ChatMessage;                                       // 0x348(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_ChatWindow_C*                     ChatWindowReference;                               // 0x350(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FText                                  MessageText;                                       // 0x358(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  NameText;                                          // 0x370(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	enum class E_ChatMessageType                 MessageType;                                       // 0x388(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	enum class E_ChatSystemMessageType           SystemMessageType;                                 // 0x389(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_1F17[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class FText                                  TimeStampText;                                     // 0x390(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  ChannelText;                                       // 0x3A8(0x18)(Edit, BlueprintVisible, ExposeOnSpawn)
	int32                                        PlayerId;                                          // 0x3C0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        ChannelID;                                         // 0x3C4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_ChatLine_C* GetDefaultObj();

	void GetTypeColor(struct FLinearColor* Color, const struct FS_ChatSystemMessageColor& LocalSystemMessageColour, const struct FS_ChatMessageColor& LocalMessageColour, enum class E_ChatMessageType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, enum class E_ChatSystemMessageType Temp_byte_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1);
	void SetMessageColor(const struct FLinearColor& CallFunc_GetTypeColor_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor);
	class FText GetFormattedMessage(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_ParseEmoji_OutText, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
	void Construct();
	void ExecuteUbergraph_WBP_ChatLine(int32 EntryPoint, class FText CallFunc_GetFormattedMessage_ReturnValue);
};

}



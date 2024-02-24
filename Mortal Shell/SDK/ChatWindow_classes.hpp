#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x248 - 0x230)
// WidgetBlueprintGeneratedClass ChatWindow.ChatWindow_C
class UChatWindow_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x230(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UEditableTextBox*                      ChatEntry;                                         // 0x238(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ChatLog;                                           // 0x240(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UChatWindow_C* GetDefaultObj();

	void BndEvt__ChatEntry_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(class FText& Text, enum class ETextCommit CommitMethod);
	void UpdateGameLogWindow(class FText Text);
	void UpdateChatWindow(class FText Sender, class FText Text);
	void RemoveGameLogWindow();
	void ExecuteUbergraph_ChatWindow(int32 EntryPoint, class UChatText_C* CallFunc_Create_ReturnValue, class UChatText_C* CallFunc_Create_ReturnValue_1, class UPanelSlot* CallFunc_AddChild_ReturnValue, class FText K2Node_ComponentBoundEvent_Text, enum class ETextCommit K2Node_ComponentBoundEvent_CommitMethod, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class AGameplayPC_C* K2Node_DynamicCast_AsGameplay_PC, bool K2Node_DynamicCast_bSuccess, class ALobbyPC_C* K2Node_DynamicCast_AsLobby_PC, bool K2Node_DynamicCast_bSuccess_1, class FText K2Node_CustomEvent_Text_1, class UPanelSlot* CallFunc_AddChild_ReturnValue_1, class FText K2Node_CustomEvent_Sender, class FText K2Node_CustomEvent_Text, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}



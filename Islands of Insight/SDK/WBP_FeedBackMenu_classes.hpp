#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x330 - 0x2E8)
// WidgetBlueprintGeneratedClass WBP_FeedBackMenu.WBP_FeedbackMenu_C
class UWBP_FeedbackMenu_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                FeedBackgroundImage;                               // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*             RepoTextBox;                                       // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ScreenshotCheckBox;                                // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SendButton;                                        // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TestText;                                          // 0x310(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TextBG;                                            // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextRepo;                                          // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScreenshotTaker*                      ScreenshotTakerRef;                                // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_FeedbackMenu_C* GetDefaultObj();

	class FString GetTextToSend(class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, class FText CallFunc_GetText_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, const struct FDateTime& CallFunc_Now_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class FText CallFunc_AsDateTime_DateTime_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, const class FString& CallFunc_GetPlayerName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7);
	class FText Get_TestText_Text_0(const class FString& CallFunc_GetTextToSend_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void FailedToSendEmail_4F0475C44D3891686830058B504EED22(int32& ErrorCode);
	void EmailSent_4F0475C44D3891686830058B504EED22(int32& ErrorCode);
	void FailedToSendEmail_C21F788940184ED8FAA72C850F56D3C9(int32& ErrorCode);
	void EmailSent_C21F788940184ED8FAA72C850F56D3C9(int32& ErrorCode);
	void BndEvt__WBP_FeedBackMenu_SendButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void Construct();
	void SendMail(TArray<uint8>& AttachedFilesData);
	void ImageRecieved(TArray<uint8>& Image);
	void ExecuteUbergraph_WBP_FeedbackMenu(int32 EntryPoint, TArray<uint8>& K2Node_MakeArray_Array, TArray<class FString>& Temp_string_Variable, TArray<class FString>& Temp_string_Variable_1, int32 K2Node_CustomEvent_ErrorCode_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_ErrorCode_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 K2Node_CustomEvent_ErrorCode_1, int32 K2Node_CustomEvent_ErrorCode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable_1, class UScreenshotTaker* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsChecked_ReturnValue, TArray<class FString>& Temp_string_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& CallFunc_GetTextToSend_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array_1, TArray<class FString>& Temp_string_Variable_3, TArray<class FString>& Temp_string_Variable_4, TArray<uint8>& K2Node_CustomEvent_AttachedFilesData, TArray<class FString>& Temp_string_Variable_5, const class FString& CallFunc_GetTextToSend_ReturnValue_1, class USendEmailWithGmailProxy* CallFunc_SendEmailWithGmail_ReturnValue, class USendEmailWithGmailProxy* CallFunc_SendEmailWithGmail_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<uint8>& K2Node_CustomEvent_Image, TArray<uint8>& K2Node_MakeArray_Array_2);
};

}



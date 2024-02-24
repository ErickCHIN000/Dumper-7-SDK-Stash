#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x368 - 0x2E8)
// WidgetBlueprintGeneratedClass WBP_BugReportMenu.WBP_BugReportMenu_C
class UWBP_BugReportMenu_C : public UBaseWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UMultiLineEditableTextBox*             ActualTextBox;                                     // 0x2F0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*             AdditionalTextBox;                                 // 0x2F8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*             ExpectedTextBox;                                   // 0x300(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                FeedBackgroundImage;                               // 0x308(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMultiLineEditableTextBox*             RepoTextBox;                                       // 0x310(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCheckBox*                             ScreenshotCheckBox;                                // 0x318(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               SendButton;                                        // 0x320(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TestText;                                          // 0x328(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextActual;                                        // 0x330(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextAdditional;                                    // 0x338(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                TextBG;                                            // 0x340(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextExpected;                                      // 0x348(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextRepo;                                          // 0x350(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScreenshotTaker*                      ScreenshotTakerRef;                                // 0x358(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UWBP_GameMenu_C*                       ParentWidget;                                      // 0x360(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_BugReportMenu_C* GetDefaultObj();

	class FString GetTextToSend(class APlayerController* CallFunc_GetPlayerController_ReturnValue, class ACharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_Conv_VectorToString_ReturnValue, class FText CallFunc_GetText_ReturnValue, class FText CallFunc_GetText_ReturnValue_1, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_1, class FText CallFunc_GetText_ReturnValue_2, class FText CallFunc_GetText_ReturnValue_3, const class FString& CallFunc_Conv_TextToString_ReturnValue_2, const class FString& CallFunc_Conv_TextToString_ReturnValue_3, class FText CallFunc_GetText_ReturnValue_4, class FText CallFunc_GetText_ReturnValue_5, const class FString& CallFunc_Conv_TextToString_ReturnValue_4, const class FString& CallFunc_Conv_TextToString_ReturnValue_5, class FText CallFunc_GetText_ReturnValue_6, class FText CallFunc_GetText_ReturnValue_7, const class FString& CallFunc_Conv_TextToString_ReturnValue_6, const class FString& CallFunc_Conv_TextToString_ReturnValue_7, const struct FDateTime& CallFunc_Now_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, class FText CallFunc_AsDateTime_DateTime_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue_8, const class FString& CallFunc_GetPlayerName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Concat_StrStr_ReturnValue_4, const class FString& CallFunc_Concat_StrStr_ReturnValue_5, const class FString& CallFunc_Concat_StrStr_ReturnValue_6, const class FString& CallFunc_Concat_StrStr_ReturnValue_7, const class FString& CallFunc_Concat_StrStr_ReturnValue_8, const class FString& CallFunc_Concat_StrStr_ReturnValue_9, const class FString& CallFunc_Concat_StrStr_ReturnValue_10, const class FString& CallFunc_Concat_StrStr_ReturnValue_11, const class FString& CallFunc_Concat_StrStr_ReturnValue_12, const class FString& CallFunc_Concat_StrStr_ReturnValue_13, const class FString& CallFunc_Concat_StrStr_ReturnValue_14, const class FString& CallFunc_Concat_StrStr_ReturnValue_15, const class FString& CallFunc_Concat_StrStr_ReturnValue_16, const class FString& CallFunc_Concat_StrStr_ReturnValue_17, const class FString& CallFunc_Concat_StrStr_ReturnValue_18, const class FString& CallFunc_Concat_StrStr_ReturnValue_19);
	class FText Get_TestText_Text_0(const class FString& CallFunc_GetTextToSend_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void FailedToSendEmail_702721C24711106FF138BD9934ACA1CA(int32& ErrorCode);
	void EmailSent_702721C24711106FF138BD9934ACA1CA(int32& ErrorCode);
	void FailedToSendEmail_F9E5C638429FBC9D37C5B7AC19D4F765(int32& ErrorCode);
	void EmailSent_F9E5C638429FBC9D37C5B7AC19D4F765(int32& ErrorCode);
	void Construct();
	void BndEvt__WBP_FeedBackMenu_SendButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void SendMail(TArray<uint8>& AttachedFilesData);
	void ImageRecieved(TArray<uint8>& Image);
	void ExecuteUbergraph_WBP_BugReportMenu(int32 EntryPoint, TArray<uint8>& K2Node_MakeArray_Array, TArray<class FString>& Temp_string_Variable, TArray<class FString>& Temp_string_Variable_1, int32 K2Node_CustomEvent_ErrorCode_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 K2Node_CustomEvent_ErrorCode_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 K2Node_CustomEvent_ErrorCode_1, int32 K2Node_CustomEvent_ErrorCode, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable_1, TArray<class FString>& Temp_string_Variable_2, class UScreenshotTaker* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsChecked_ReturnValue, TArray<class FString>& Temp_string_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, const class FString& CallFunc_GetTextToSend_ReturnValue, TArray<class FString>& K2Node_MakeArray_Array_1, TArray<class FString>& Temp_string_Variable_4, TArray<uint8>& K2Node_CustomEvent_AttachedFilesData, TArray<class FString>& Temp_string_Variable_5, const class FString& CallFunc_GetTextToSend_ReturnValue_1, class USendEmailWithGmailProxy* CallFunc_SendEmailWithGmail_ReturnValue, class USendEmailWithGmailProxy* CallFunc_SendEmailWithGmail_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, TArray<uint8>& K2Node_CustomEvent_Image, TArray<uint8>& K2Node_MakeArray_Array_2);
};

}



#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x350 - 0x260)
// WidgetBlueprintGeneratedClass WBP_LoginBanNotice.WBP_LoginBanNotice_C
class UWBP_LoginBanNotice_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_StyledButton_C*                   BanConfirmButton;                                  // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BanDurationText;                                   // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            ErrorText;                                         // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               OpenTermsButton;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FKrakenBanInfo                        CurrentBanInfo;                                    // 0x288(0x48)(Edit, BlueprintVisible, ExposeOnSpawn)
	class FText                                  BanDurationMessageHoursMinutes;                    // 0x2D0(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  BanDurationMessageDays;                            // 0x2E8(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  BanDurationMessageDaysHoursMinutes;                // 0x300(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                          UnbanCheckTimer;                                   // 0x318(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class FText                                  NetworkErrorMessage;                               // 0x320(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)
	class FText                                  BanDurationMessagePermanent;                       // 0x338(0x18)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UWBP_LoginBanNotice_C* GetDefaultObj();

	void RunUnbanCheck(FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UGISKraken* CallFunc_GetGameInstanceSubsystem_ReturnValue);
	void ScheduleUnbanCheck(int64 ExpirationTimestamp, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int64 CallFunc_Add_Int64Int64_ReturnValue, bool CallFunc_Greater_Int64Int64_ReturnValue, const struct FDateTime& CallFunc_UtcNow_ReturnValue, int64 CallFunc_ToUnixTimestamp_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, int64 CallFunc_MaxInt64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
	void UpdateForFailure(class FText ErrorMessage);
	void UpdateBanDurationText(int64 BanPeriodSeconds, int64 BanEndTimestamp, bool Temp_bool_Variable, bool CallFunc_LessEqual_Int64Int64_ReturnValue, bool CallFunc_Greater_Int64Int64_ReturnValue, bool CallFunc_GreaterEqual_Int64Int64_ReturnValue, bool CallFunc_Greater_Int64Int64_ReturnValue_1, bool Temp_bool_Variable_1, bool CallFunc_BooleanOR_ReturnValue, int64 CallFunc_GetCurrentUnixTimestamp_ReturnValue, int64 CallFunc_Subtract_Int64Int64_ReturnValue, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, int64 K2Node_Select_Default, int64 CallFunc_Divide_Int64Int64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, int64 CallFunc_Multiply_Int64Int64_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, int64 CallFunc_Subtract_Int64Int64_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, int32 CallFunc_Conv_Int64ToInt_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_Divide_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_3, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_4, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_5, class FText CallFunc_Format_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, class FText CallFunc_Format_ReturnValue_2, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FText K2Node_Select_Default_1, class FText K2Node_Select_Default_2, class FText K2Node_Select_Default_3);
	void UpdateForNewBanInfo();
	void OnInitialized();
	void BndEvt__WBP_LoginBanNotice_BanConfirmButton_K2Node_ComponentBoundEvent_0_Pressed__DelegateSignature();
	void OnNetworkOperationFailure(const struct FOnlineServiceError& ServiceError);
	void BndEvt__WBP_LoginBanNotice_OpenTermsButton_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_WBP_LoginBanNotice(int32 EntryPoint, const struct FOnlineServiceError& K2Node_CustomEvent_ServiceError, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue);
};

}



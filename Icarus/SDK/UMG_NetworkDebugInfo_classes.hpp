#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x2B8 - 0x260)
// WidgetBlueprintGeneratedClass UMG_NetworkDebugInfo.UMG_NetworkDebugInfo_C
class UUMG_NetworkDebugInfo_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x260(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            BackupHost;                                        // 0x268(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            BackupHostName;                                    // 0x270(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider;                                           // 0x278(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Divider_1;                                         // 0x280(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            FailedUpdateStatus;                                // 0x288(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HeartbeatStatus;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            HostName;                                          // 0x298(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            PingNumber;                                        // 0x2A0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            SaveStatus;                                        // 0x2A8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          TimerHandle;                                       // 0x2B0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUMG_NetworkDebugInfo_C* GetDefaultObj();

	void StopTracking();
	void StartTracking();
	void NetworkDebugInfo(const struct FNetworkingStatus& DebugInfo, bool Enabled, const struct FSlateColor& YellowCol, const struct FSlateColor& WhiteCol, const struct FSlateColor& GreenCol, const struct FSlateColor& RedCol, const struct FLinearColor& Green, const struct FLinearColor& Red, bool Temp_bool_Variable, class FText Temp_text_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, class FText Temp_text_Variable_1, bool Temp_bool_Variable_5, bool Temp_bool_Variable_6, bool Temp_bool_Variable_7, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default, bool Temp_bool_Variable_8, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class FText CallFunc_GetEmptyText_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_9, class APlayerController* CallFunc_GetPlayerController_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_Less_FloatFloat_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, bool CallFunc_Not_PreBool_ReturnValue_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_1, class FText CallFunc_Format_ReturnValue_1, class FText K2Node_Select_Default_1, const struct FSlateColor& K2Node_Select_Default_2, const struct FSlateColor& K2Node_Select_Default_3, class APlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& CallFunc_GetPlayerName_ReturnValue_1, bool Temp_bool_Variable_10, int32 CallFunc_Array_Find_ReturnValue, int32 CallFunc_Array_Get_Item, const struct FSlateColor& K2Node_Select_Default_4, class FText CallFunc_Conv_IntToText_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_1, const struct FSlateColor& K2Node_Select_Default_5, const struct FSlateColor& K2Node_Select_Default_6, bool CallFunc_Greater_FloatFloat_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue_2, int32 CallFunc_FFloor_ReturnValue_1, const struct FSlateColor& K2Node_Select_Default_7, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_2, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array_2, class FText CallFunc_Format_ReturnValue_2, class FText K2Node_Select_Default_8, bool CallFunc_EqualEqual_StrStr_ReturnValue, const class FString& CallFunc_SelectString_ReturnValue, const struct FSlateColor& K2Node_Select_Default_9, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_EqualEqual_TextText_ReturnValue, class APlayerController* CallFunc_GetPlayerController_ReturnValue_2, const class FString& CallFunc_GetPlayerName_ReturnValue_2, bool CallFunc_EqualEqual_StrStr_ReturnValue_1, const class FString& CallFunc_SelectString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FSlateColor& K2Node_Select_Default_10, class FText CallFunc_Conv_StringToText_ReturnValue_1);
	void Construct();
	void TimerFired();
	void ExecuteUbergraph_UMG_NetworkDebugInfo(int32 EntryPoint, bool CallFunc_GetIcarusGameStateSurvival_bValid, class AIcarusGameStateSurvival* CallFunc_GetIcarusGameStateSurvival_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue);
};

}



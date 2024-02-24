#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass BP_SentryFunctionLibrary.BP_SentryFunctionLibrary_C
class UBP_SentryFunctionLibrary_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UBP_SentryFunctionLibrary_C* GetDefaultObj();

	void CaptureCustomSentryReport(const class FString& UserDescription, enum class ESentryLevel Level, TMap<class FString, class FString> CustomTags, class UObject* __WorldContext, TMap<class FString, class FString> ReportContext, class USentrySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class USentrySubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UGameInstance* CallFunc_GetGameInstance_ReturnValue, const class FString& CallFunc_Trim_ReturnValue, class UIcarusGameInstance* K2Node_DynamicCast_AsIcarus_Game_Instance, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEmpty_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, TArray<class FString>& CallFunc_Map_Keys_Keys, const class FString& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Trim_ReturnValue_1, const class FString& CallFunc_Trim_ReturnValue_2, bool CallFunc_IsEmpty_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsEmpty_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const class FString& Temp_string_Variable, class USentryEvent* CallFunc_CreateSentryEvent_ReturnValue, class USentryId* CallFunc_CaptureEvent_ReturnValue);
};

}



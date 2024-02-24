#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GuideBook_Search_Counter.WBP_GuideBook_Search_Counter_C
// (None)

class UClass* UWBP_GuideBook_Search_Counter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GuideBook_Search_Counter_C");

	return Clss;
}


// WBP_GuideBook_Search_Counter_C WBP_GuideBook_Search_Counter.Default__WBP_GuideBook_Search_Counter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GuideBook_Search_Counter_C* UWBP_GuideBook_Search_Counter_C::GetDefaultObj()
{
	static class UWBP_GuideBook_Search_Counter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GuideBook_Search_Counter_C*>(UWBP_GuideBook_Search_Counter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GuideBook_Search_Counter.WBP_GuideBook_Search_Counter_C.UpdateTextColor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CategoryTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UWBP_GuideBook_Search_Counter_C::UpdateTextColor(struct FGameplayTag& CategoryTag, bool Temp_bool_Variable, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, const struct FLinearColor& K2Node_Select_Default, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Search_Counter_C", "UpdateTextColor");

	Params::UWBP_GuideBook_Search_Counter_C_UpdateTextColor_Params Parms{};

	Parms.CategoryTag = CategoryTag;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Search_Counter.WBP_GuideBook_Search_Counter_C.UpdateCounter
// (Private, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CategoryTag                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// int32                              TotalFilteredResults                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsSearchStringEmpty_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_GameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Search_Counter_C::UpdateCounter(struct FGameplayTag& CategoryTag, int32 TotalFilteredResults, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsSearchStringEmpty_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Search_Counter_C", "UpdateCounter");

	Params::UWBP_GuideBook_Search_Counter_C_UpdateCounter_Params Parms{};

	Parms.CategoryTag = CategoryTag;
	Parms.TotalFilteredResults = TotalFilteredResults;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsSearchStringEmpty_ReturnValue = CallFunc_IsSearchStringEmpty_ReturnValue;
	Parms.CallFunc_EqualEqual_GameplayTag_ReturnValue = CallFunc_EqualEqual_GameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Search_Counter.WBP_GuideBook_Search_Counter_C.ShowCounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Search_Counter_C::ShowCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Search_Counter_C", "ShowCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Search_Counter.WBP_GuideBook_Search_Counter_C.HideCounter
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Search_Counter_C::HideCounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Search_Counter_C", "HideCounter");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Search_Counter.WBP_GuideBook_Search_Counter_C.Counter_NoSearchResultsFound
// (Private, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Search_Counter_C::Counter_NoSearchResultsFound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Search_Counter_C", "Counter_NoSearchResultsFound");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Search_Counter.WBP_GuideBook_Search_Counter_C.SetCounterText
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              NewCount                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

void UWBP_GuideBook_Search_Counter_C::SetCounterText(int32 NewCount, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Search_Counter_C", "SetCounterText");

	Params::UWBP_GuideBook_Search_Counter_C_SetCounterText_Params Parms{};

	Parms.NewCount = NewCount;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Search_Counter.WBP_GuideBook_Search_Counter_C.Initialize
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                CategoryTag                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetActiveCategory_ReturnValue                           (ConstParm, NoDestructor, HasGetValueTypeHash)
// class UBP_GuideBookComponent_C*    CallFunc_GetLocalPlayerGuideBookComponent_GuideBook              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetFilteredEntryCountByCategory_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Search_Counter_C::Initialize(const struct FGameplayTag& CategoryTag, const struct FGameplayTag& CallFunc_GetActiveCategory_ReturnValue, class UBP_GuideBookComponent_C* CallFunc_GetLocalPlayerGuideBookComponent_GuideBook, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 CallFunc_GetFilteredEntryCountByCategory_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Search_Counter_C", "Initialize");

	Params::UWBP_GuideBook_Search_Counter_C_Initialize_Params Parms{};

	Parms.CategoryTag = CategoryTag;
	Parms.CallFunc_GetActiveCategory_ReturnValue = CallFunc_GetActiveCategory_ReturnValue;
	Parms.CallFunc_GetLocalPlayerGuideBookComponent_GuideBook = CallFunc_GetLocalPlayerGuideBookComponent_GuideBook;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetFilteredEntryCountByCategory_ReturnValue = CallFunc_GetFilteredEntryCountByCategory_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_GuideBook_Search_Counter.WBP_GuideBook_Search_Counter_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GuideBook_Search_Counter_C::Destruct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Search_Counter_C", "Destruct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GuideBook_Search_Counter.WBP_GuideBook_Search_Counter_C.ExecuteUbergraph_WBP_GuideBook_Search_Counter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_GuideBook_Search_Counter_C::ExecuteUbergraph_WBP_GuideBook_Search_Counter(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GuideBook_Search_Counter_C", "ExecuteUbergraph_WBP_GuideBook_Search_Counter");

	Params::UWBP_GuideBook_Search_Counter_C_ExecuteUbergraph_WBP_GuideBook_Search_Counter_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



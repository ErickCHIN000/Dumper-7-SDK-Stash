#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_ChatLine.WBP_ChatLine_C
// (None)

class UClass* UWBP_ChatLine_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_ChatLine_C");

	return Clss;
}


// WBP_ChatLine_C WBP_ChatLine.Default__WBP_ChatLine_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_ChatLine_C* UWBP_ChatLine_C::GetDefaultObj()
{
	static class UWBP_ChatLine_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_ChatLine_C*>(UWBP_ChatLine_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_ChatLine.WBP_ChatLine_C.GetTypeColor
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                Color                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ChatSystemMessageColor   LocalSystemMessageColour                                         (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FS_ChatMessageColor         LocalMessageColour                                               (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatMessageType       Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                Temp_struct_Variable                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class E_ChatSystemMessageType Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_ChatLine_C::GetTypeColor(struct FLinearColor* Color, const struct FS_ChatSystemMessageColor& LocalSystemMessageColour, const struct FS_ChatMessageColor& LocalMessageColour, enum class E_ChatMessageType Temp_byte_Variable, const struct FLinearColor& Temp_struct_Variable, enum class E_ChatSystemMessageType Temp_byte_Variable_1, const struct FLinearColor& K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatLine_C", "GetTypeColor");

	Params::UWBP_ChatLine_C_GetTypeColor_Params Parms{};

	Parms.LocalSystemMessageColour = LocalSystemMessageColour;
	Parms.LocalMessageColour = LocalMessageColour;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Color != nullptr)
		*Color = std::move(Parms.Color);

}


// Function WBP_ChatLine.WBP_ChatLine_C.SetMessageColor
// (Private, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FLinearColor                CallFunc_GetTypeColor_Color                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)

void UWBP_ChatLine_C::SetMessageColor(const struct FLinearColor& CallFunc_GetTypeColor_Color, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatLine_C", "SetMessageColor");

	Params::UWBP_ChatLine_C_SetMessageColor_Params Parms{};

	Parms.CallFunc_GetTypeColor_Color = CallFunc_GetTypeColor_Color;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_ChatLine.WBP_ChatLine_C.GetFormattedMessage
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// class FText                        CallFunc_ParseEmoji_OutText                                      (None)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData_1                           (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UWBP_ChatLine_C::GetFormattedMessage(const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class FText CallFunc_ParseEmoji_OutText, bool CallFunc_TextIsEmpty_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatLine_C", "GetFormattedMessage");

	Params::UWBP_ChatLine_C_GetFormattedMessage_Params Parms{};

	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_ParseEmoji_OutText = CallFunc_ParseEmoji_OutText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData_1 = K2Node_MakeStruct_FormatArgumentData_1;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_ChatLine.WBP_ChatLine_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_ChatLine_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatLine_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_ChatLine.WBP_ChatLine_C.ExecuteUbergraph_WBP_ChatLine
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetFormattedMessage_ReturnValue                         (None)

void UWBP_ChatLine_C::ExecuteUbergraph_WBP_ChatLine(int32 EntryPoint, class FText CallFunc_GetFormattedMessage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_ChatLine_C", "ExecuteUbergraph_WBP_ChatLine");

	Params::UWBP_ChatLine_C_ExecuteUbergraph_WBP_ChatLine_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetFormattedMessage_ReturnValue = CallFunc_GetFormattedMessage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



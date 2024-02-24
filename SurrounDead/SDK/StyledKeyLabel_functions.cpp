#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass StyledKeyLabel.StyledKeyLabel_C
// (None)

class UClass* UStyledKeyLabel_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StyledKeyLabel_C");

	return Clss;
}


// StyledKeyLabel_C StyledKeyLabel.Default__StyledKeyLabel_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UStyledKeyLabel_C* UStyledKeyLabel_C::GetDefaultObj()
{
	static class UStyledKeyLabel_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UStyledKeyLabel_C*>(UStyledKeyLabel_C::StaticClass()->DefaultObject);

	return Default;
}


// Function StyledKeyLabel.StyledKeyLabel_C.GetIconBrush
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class UTexture*                    CallFunc_GetIcon_ReturnValue                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

struct FSlateBrush UStyledKeyLabel_C::GetIconBrush(class UTexture* CallFunc_GetIcon_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledKeyLabel_C", "GetIconBrush");

	Params::UStyledKeyLabel_C_GetIconBrush_Params Parms{};

	Parms.CallFunc_GetIcon_ReturnValue = CallFunc_GetIcon_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StyledKeyLabel.StyledKeyLabel_C.GetDisplayNameUpper
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetDisplayName_ReturnValue                              (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UStyledKeyLabel_C::GetDisplayNameUpper(class FText CallFunc_GetDisplayName_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledKeyLabel_C", "GetDisplayNameUpper");

	Params::UStyledKeyLabel_C_GetDisplayNameUpper_Params Parms{};

	Parms.CallFunc_GetDisplayName_ReturnValue = CallFunc_GetDisplayName_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function StyledKeyLabel.StyledKeyLabel_C.UpdateKeyLabel
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UStyledKeyLabel_C::UpdateKeyLabel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledKeyLabel_C", "UpdateKeyLabel");



	UObject::ProcessEvent(Func, nullptr);

}


// Function StyledKeyLabel.StyledKeyLabel_C.ExecuteUbergraph_StyledKeyLabel
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetDisplayNameVisibility_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasIcon_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetDisplayNameUpper_ReturnValue                         (None)
// struct FSlateBrush                 CallFunc_GetIconBrush_ReturnValue                                (None)
// enum class ESlateVisibility        CallFunc_GetIconVisibility_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UStyledKeyLabel_C::ExecuteUbergraph_StyledKeyLabel(int32 EntryPoint, enum class ESlateVisibility CallFunc_GetDisplayNameVisibility_ReturnValue, bool CallFunc_HasIcon_ReturnValue, class FText CallFunc_GetDisplayNameUpper_ReturnValue, const struct FSlateBrush& CallFunc_GetIconBrush_ReturnValue, enum class ESlateVisibility CallFunc_GetIconVisibility_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StyledKeyLabel_C", "ExecuteUbergraph_StyledKeyLabel");

	Params::UStyledKeyLabel_C_ExecuteUbergraph_StyledKeyLabel_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDisplayNameVisibility_ReturnValue = CallFunc_GetDisplayNameVisibility_ReturnValue;
	Parms.CallFunc_HasIcon_ReturnValue = CallFunc_HasIcon_ReturnValue;
	Parms.CallFunc_GetDisplayNameUpper_ReturnValue = CallFunc_GetDisplayNameUpper_ReturnValue;
	Parms.CallFunc_GetIconBrush_ReturnValue = CallFunc_GetIconBrush_ReturnValue;
	Parms.CallFunc_GetIconVisibility_ReturnValue = CallFunc_GetIconVisibility_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



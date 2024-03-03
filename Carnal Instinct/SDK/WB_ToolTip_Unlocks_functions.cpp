#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C
// (None)

class UClass* UWB_ToolTip_Unlocks_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_ToolTip_Unlocks_C");

	return Clss;
}


// WB_ToolTip_Unlocks_C WB_ToolTip_Unlocks.Default__WB_ToolTip_Unlocks_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_ToolTip_Unlocks_C* UWB_ToolTip_Unlocks_C::GetDefaultObj()
{
	static class UWB_ToolTip_Unlocks_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_ToolTip_Unlocks_C*>(UWB_ToolTip_Unlocks_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.GetText_1
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWB_ToolTip_Unlocks_C::GetText_1(class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_Unlocks_C", "GetText_1");

	Params::UWB_ToolTip_Unlocks_C_GetText_1_Params Parms{};

	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWB_ToolTip_Unlocks_C::GetText_0(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_Unlocks_C", "GetText_0");

	Params::UWB_ToolTip_Unlocks_C_GetText_0_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.Set Image
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (UObjectWrapper)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush_1                                   (None)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FSlateBrush UWB_ToolTip_Unlocks_C::Set_Image(const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush_1, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_Unlocks_C", "Set Image");

	Params::UWB_ToolTip_Unlocks_C_Set_Image_Params Parms{};

	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.K2Node_MakeStruct_SlateBrush_1 = K2Node_MakeStruct_SlateBrush_1;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.Set Rarity Text Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateColor                 CallFunc_Set_Rarity_Color_Color                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FSlateColor UWB_ToolTip_Unlocks_C::Set_Rarity_Text_Color(const struct FSlateColor& CallFunc_Set_Rarity_Color_Color, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_Unlocks_C", "Set Rarity Text Color");

	Params::UWB_ToolTip_Unlocks_C_Set_Rarity_Text_Color_Params Parms{};

	Parms.CallFunc_Set_Rarity_Color_Color = CallFunc_Set_Rarity_Color_Color;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.Set Rarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWB_ToolTip_Unlocks_C::Set_Rarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_Unlocks_C", "Set Rarity");

	Params::UWB_ToolTip_Unlocks_C_Set_Rarity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.Set Type
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UWB_ToolTip_Unlocks_C::Set_Type()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_Unlocks_C", "Set Type");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.Set Name
// (Public, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:

void UWB_ToolTip_Unlocks_C::Set_Name()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_Unlocks_C", "Set Name");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_ToolTip_Unlocks_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_Unlocks_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_ToolTip_Unlocks.WB_ToolTip_Unlocks_C.ExecuteUbergraph_WB_ToolTip_Unlocks
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_ToolTip_Unlocks_C::ExecuteUbergraph_WB_ToolTip_Unlocks(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_ToolTip_Unlocks_C", "ExecuteUbergraph_WB_ToolTip_Unlocks");

	Params::UWB_ToolTip_Unlocks_C_ExecuteUbergraph_WB_ToolTip_Unlocks_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



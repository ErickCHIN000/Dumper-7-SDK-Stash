#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wb_form_unlocked.wb_form_unlocked_C
// (None)

class UClass* UWb_form_unlocked_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wb_form_unlocked_C");

	return Clss;
}


// wb_form_unlocked_C wb_form_unlocked.Default__wb_form_unlocked_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWb_form_unlocked_C* UWb_form_unlocked_C::GetDefaultObj()
{
	static class UWb_form_unlocked_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWb_form_unlocked_C*>(UWb_form_unlocked_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wb_form_unlocked.wb_form_unlocked_C.Set Image
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateBrush                 ReturnValue                                                      (Parm, OutParm, ReturnParm)

struct FSlateBrush UWb_form_unlocked_C::Set_Image()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wb_form_unlocked_C", "Set Image");

	Params::UWb_form_unlocked_C_Set_Image_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wb_form_unlocked.wb_form_unlocked_C.Set Rarity Text Color
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FSlateColor                 CallFunc_Set_Rarity_Color_Color                                  (None)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

struct FSlateColor UWb_form_unlocked_C::Set_Rarity_Text_Color(const struct FSlateColor& CallFunc_Set_Rarity_Color_Color, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wb_form_unlocked_C", "Set Rarity Text Color");

	Params::UWb_form_unlocked_C_Set_Rarity_Text_Color_Params Parms{};

	Parms.CallFunc_Set_Rarity_Color_Color = CallFunc_Set_Rarity_Color_Color;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wb_form_unlocked.wb_form_unlocked_C.Set Rarity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWb_form_unlocked_C::Set_Rarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wb_form_unlocked_C", "Set Rarity");

	Params::UWb_form_unlocked_C_Set_Rarity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wb_form_unlocked.wb_form_unlocked_C.Set Type
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWb_form_unlocked_C::Set_Type()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wb_form_unlocked_C", "Set Type");

	Params::UWb_form_unlocked_C_Set_Type_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wb_form_unlocked.wb_form_unlocked_C.Set Name
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)

class FText UWb_form_unlocked_C::Set_Name()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wb_form_unlocked_C", "Set Name");

	Params::UWb_form_unlocked_C_Set_Name_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wb_form_unlocked.wb_form_unlocked_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWb_form_unlocked_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wb_form_unlocked_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wb_form_unlocked.wb_form_unlocked_C.ExecuteUbergraph_wb_form_unlocked
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     (None)

void UWb_form_unlocked_C::ExecuteUbergraph_wb_form_unlocked(int32 EntryPoint, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, class FText CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wb_form_unlocked_C", "ExecuteUbergraph_wb_form_unlocked");

	Params::UWb_form_unlocked_C_ExecuteUbergraph_wb_form_unlocked_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;

	UObject::ProcessEvent(Func, &Parms);

}

}



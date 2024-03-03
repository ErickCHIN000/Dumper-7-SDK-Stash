#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WB_LevelingExpNotify.WB_LevelingExpNotify_C
// (None)

class UClass* UWB_LevelingExpNotify_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WB_LevelingExpNotify_C");

	return Clss;
}


// WB_LevelingExpNotify_C WB_LevelingExpNotify.Default__WB_LevelingExpNotify_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWB_LevelingExpNotify_C* UWB_LevelingExpNotify_C::GetDefaultObj()
{
	static class UWB_LevelingExpNotify_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWB_LevelingExpNotify_C*>(UWB_LevelingExpNotify_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WB_LevelingExpNotify.WB_LevelingExpNotify_C.Get ExperienceText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

class FText UWB_LevelingExpNotify_C::Get_ExperienceText(class FText CallFunc_Conv_FloatToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpNotify_C", "Get ExperienceText");

	Params::UWB_LevelingExpNotify_C_Get_ExperienceText_Params Parms{};

	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_LevelingExpNotify.WB_LevelingExpNotify_C.Get LevelText
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_Conv_IntToText_ReturnValue                              (None)

class FText UWB_LevelingExpNotify_C::Get_LevelText(class FText CallFunc_Conv_IntToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpNotify_C", "Get LevelText");

	Params::UWB_LevelingExpNotify_C_Get_LevelText_Params Parms{};

	Parms.CallFunc_Conv_IntToText_ReturnValue = CallFunc_Conv_IntToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WB_LevelingExpNotify.WB_LevelingExpNotify_C.Play Level Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_LevelingExpNotify_C::Play_Level_Animation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpNotify_C", "Play Level Animation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LevelingExpNotify.WB_LevelingExpNotify_C.Play Experience Animation
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWB_LevelingExpNotify_C::Play_Experience_Animation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpNotify_C", "Play Experience Animation");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LevelingExpNotify.WB_LevelingExpNotify_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWB_LevelingExpNotify_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpNotify_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WB_LevelingExpNotify.WB_LevelingExpNotify_C.OnAnimationFinished
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// class UWidgetAnimation*            Animation                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LevelingExpNotify_C::OnAnimationFinished(class UWidgetAnimation* Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpNotify_C", "OnAnimationFinished");

	Params::UWB_LevelingExpNotify_C_OnAnimationFinished_Params Parms{};

	Parms.Animation = Animation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WB_LevelingExpNotify.WB_LevelingExpNotify_C.ExecuteUbergraph_WB_LevelingExpNotify
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWidgetAnimation*            K2Node_Event_Animation                                           (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWB_LevelingExpNotify_C::ExecuteUbergraph_WB_LevelingExpNotify(int32 EntryPoint, bool CallFunc_Greater_IntInt_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UWidgetAnimation* K2Node_Event_Animation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WB_LevelingExpNotify_C", "ExecuteUbergraph_WB_LevelingExpNotify");

	Params::UWB_LevelingExpNotify_C_ExecuteUbergraph_WB_LevelingExpNotify_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.K2Node_Event_Animation = K2Node_Event_Animation;

	UObject::ProcessEvent(Func, &Parms);

}

}



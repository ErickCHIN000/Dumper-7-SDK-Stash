#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MoodRow.UMG_MoodRow_C
// (None)

class UClass* UUMG_MoodRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MoodRow_C");

	return Clss;
}


// UMG_MoodRow_C UMG_MoodRow.Default__UMG_MoodRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MoodRow_C* UUMG_MoodRow_C::GetDefaultObj()
{
	static class UUMG_MoodRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MoodRow_C*>(UUMG_MoodRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MoodRow.UMG_MoodRow_C.GetMoodString
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      Mood                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        CallFunc_GetVisibility_ReturnValue_2                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MoodRow_C::GetMoodString(class FString* Mood, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, enum class ESlateVisibility CallFunc_GetVisibility_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MoodRow_C", "GetMoodString");

	Params::UUMG_MoodRow_C_GetMoodString_Params Parms{};

	Parms.CallFunc_GetVisibility_ReturnValue = CallFunc_GetVisibility_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetVisibility_ReturnValue_1 = CallFunc_GetVisibility_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetVisibility_ReturnValue_2 = CallFunc_GetVisibility_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (Mood != nullptr)
		*Mood = std::move(Parms.Mood);

}


// Function UMG_MoodRow.UMG_MoodRow_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MoodRow_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MoodRow_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MoodRow.UMG_MoodRow_C.BndEvt__UMG_MoodRow_bntJoy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_MoodRow_C::BndEvt__UMG_MoodRow_bntJoy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MoodRow_C", "BndEvt__UMG_MoodRow_bntJoy_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MoodRow.UMG_MoodRow_C.BndEvt__UMG_MoodRow_bntNeutral_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_MoodRow_C::BndEvt__UMG_MoodRow_bntNeutral_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MoodRow_C", "BndEvt__UMG_MoodRow_bntNeutral_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MoodRow.UMG_MoodRow_C.BndEvt__UMG_MoodRow_bntSad_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_MoodRow_C::BndEvt__UMG_MoodRow_bntSad_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MoodRow_C", "BndEvt__UMG_MoodRow_bntSad_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MoodRow.UMG_MoodRow_C.ExecuteUbergraph_UMG_MoodRow
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_MoodRow_C::ExecuteUbergraph_UMG_MoodRow(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MoodRow_C", "ExecuteUbergraph_UMG_MoodRow");

	Params::UUMG_MoodRow_C_ExecuteUbergraph_UMG_MoodRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



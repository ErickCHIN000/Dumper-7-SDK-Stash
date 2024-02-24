#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_MissingRequirement_Warning.UMG_MissingRequirement_Warning_C
// (None)

class UClass* UUMG_MissingRequirement_Warning_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_MissingRequirement_Warning_C");

	return Clss;
}


// UMG_MissingRequirement_Warning_C UMG_MissingRequirement_Warning.Default__UMG_MissingRequirement_Warning_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_MissingRequirement_Warning_C* UUMG_MissingRequirement_Warning_C::GetDefaultObj()
{
	static class UUMG_MissingRequirement_Warning_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_MissingRequirement_Warning_C*>(UUMG_MissingRequirement_Warning_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_MissingRequirement_Warning.UMG_MissingRequirement_Warning_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_MissingRequirement_Warning_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MissingRequirement_Warning_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MissingRequirement_Warning.UMG_MissingRequirement_Warning_C.FireWarning
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UUMG_MissingRequirement_Warning_C::FireWarning()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MissingRequirement_Warning_C", "FireWarning");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_MissingRequirement_Warning.UMG_MissingRequirement_Warning_C.ExecuteUbergraph_UMG_MissingRequirement_Warning
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_MissingRequirement_Warning_C::ExecuteUbergraph_UMG_MissingRequirement_Warning(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsAnimationPlaying_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_MissingRequirement_Warning_C", "ExecuteUbergraph_UMG_MissingRequirement_Warning");

	Params::UUMG_MissingRequirement_Warning_C_ExecuteUbergraph_UMG_MissingRequirement_Warning_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



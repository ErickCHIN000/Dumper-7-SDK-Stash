#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_AudioWaveform.UMG_AudioWaveform_C
// (None)

class UClass* UUMG_AudioWaveform_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_AudioWaveform_C");

	return Clss;
}


// UMG_AudioWaveform_C UMG_AudioWaveform.Default__UMG_AudioWaveform_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_AudioWaveform_C* UUMG_AudioWaveform_C::GetDefaultObj()
{
	static class UUMG_AudioWaveform_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_AudioWaveform_C*>(UUMG_AudioWaveform_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_AudioWaveform.UMG_AudioWaveform_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_AudioWaveform_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AudioWaveform_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_AudioWaveform.UMG_AudioWaveform_C.ExecuteUbergraph_UMG_AudioWaveform
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_AudioWaveform_C::ExecuteUbergraph_UMG_AudioWaveform(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_AudioWaveform_C", "ExecuteUbergraph_UMG_AudioWaveform");

	Params::UUMG_AudioWaveform_C_ExecuteUbergraph_UMG_AudioWaveform_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_AutoSavePopup.WBP_AutoSavePopup_C
// (None)

class UClass* UWBP_AutoSavePopup_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AutoSavePopup_C");

	return Clss;
}


// WBP_AutoSavePopup_C WBP_AutoSavePopup.Default__WBP_AutoSavePopup_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AutoSavePopup_C* UWBP_AutoSavePopup_C::GetDefaultObj()
{
	static class UWBP_AutoSavePopup_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AutoSavePopup_C*>(UWBP_AutoSavePopup_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AutoSavePopup.WBP_AutoSavePopup_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_AutoSavePopup_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSavePopup_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AutoSavePopup.WBP_AutoSavePopup_C.ExecuteUbergraph_WBP_AutoSavePopup
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AutoSavePopup_C::ExecuteUbergraph_WBP_AutoSavePopup(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AutoSavePopup_C", "ExecuteUbergraph_WBP_AutoSavePopup");

	Params::UWBP_AutoSavePopup_C_ExecuteUbergraph_WBP_AutoSavePopup_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



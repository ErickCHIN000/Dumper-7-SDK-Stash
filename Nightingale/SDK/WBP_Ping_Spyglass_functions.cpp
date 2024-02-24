#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_Ping_Spyglass.WBP_Ping_Spyglass_C
// (None)

class UClass* UWBP_Ping_Spyglass_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_Ping_Spyglass_C");

	return Clss;
}


// WBP_Ping_Spyglass_C WBP_Ping_Spyglass.Default__WBP_Ping_Spyglass_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_Ping_Spyglass_C* UWBP_Ping_Spyglass_C::GetDefaultObj()
{
	static class UWBP_Ping_Spyglass_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_Ping_Spyglass_C*>(UWBP_Ping_Spyglass_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_Ping_Spyglass.WBP_Ping_Spyglass_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_Ping_Spyglass_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ping_Spyglass_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ping_Spyglass.WBP_Ping_Spyglass_C.ZoomAdjustLevel_BlurTransition
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWBP_Ping_Spyglass_C::ZoomAdjustLevel_BlurTransition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ping_Spyglass_C", "ZoomAdjustLevel_BlurTransition");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_Ping_Spyglass.WBP_Ping_Spyglass_C.ExecuteUbergraph_WBP_Ping_Spyglass
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Ping_Spyglass_C::ExecuteUbergraph_WBP_Ping_Spyglass(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_Ping_Spyglass_C", "ExecuteUbergraph_WBP_Ping_Spyglass");

	Params::UWBP_Ping_Spyglass_C_ExecuteUbergraph_WBP_Ping_Spyglass_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



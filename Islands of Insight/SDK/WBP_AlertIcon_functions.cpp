#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_AlertIcon.WBP_AlertIcon_C
// (None)

class UClass* UWBP_AlertIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_AlertIcon_C");

	return Clss;
}


// WBP_AlertIcon_C WBP_AlertIcon.Default__WBP_AlertIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_AlertIcon_C* UWBP_AlertIcon_C::GetDefaultObj()
{
	static class UWBP_AlertIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_AlertIcon_C*>(UWBP_AlertIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_AlertIcon.WBP_AlertIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_AlertIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AlertIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_AlertIcon.WBP_AlertIcon_C.ExecuteUbergraph_WBP_AlertIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_AlertIcon_C::ExecuteUbergraph_WBP_AlertIcon(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_AlertIcon_C", "ExecuteUbergraph_WBP_AlertIcon");

	Params::UWBP_AlertIcon_C_ExecuteUbergraph_WBP_AlertIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



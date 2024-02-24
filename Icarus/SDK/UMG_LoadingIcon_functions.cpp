#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_LoadingIcon.UMG_LoadingIcon_C
// (None)

class UClass* UUMG_LoadingIcon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_LoadingIcon_C");

	return Clss;
}


// UMG_LoadingIcon_C UMG_LoadingIcon.Default__UMG_LoadingIcon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_LoadingIcon_C* UUMG_LoadingIcon_C::GetDefaultObj()
{
	static class UUMG_LoadingIcon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_LoadingIcon_C*>(UUMG_LoadingIcon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_LoadingIcon.UMG_LoadingIcon_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_LoadingIcon_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingIcon_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_LoadingIcon.UMG_LoadingIcon_C.ExecuteUbergraph_UMG_LoadingIcon
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_LoadingIcon_C::ExecuteUbergraph_UMG_LoadingIcon(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingIcon_C", "ExecuteUbergraph_UMG_LoadingIcon");

	Params::UUMG_LoadingIcon_C_ExecuteUbergraph_UMG_LoadingIcon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



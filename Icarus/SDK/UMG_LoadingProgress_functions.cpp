#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_LoadingProgress.UMG_LoadingProgress_C
// (None)

class UClass* UUMG_LoadingProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_LoadingProgress_C");

	return Clss;
}


// UMG_LoadingProgress_C UMG_LoadingProgress.Default__UMG_LoadingProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_LoadingProgress_C* UUMG_LoadingProgress_C::GetDefaultObj()
{
	static class UUMG_LoadingProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_LoadingProgress_C*>(UUMG_LoadingProgress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_LoadingProgress.UMG_LoadingProgress_C.LoadingStateChanged
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HideLoadingIcon                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        StateText                                                        (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CallFunc_TextIsEmpty_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoadingProgress_C::LoadingStateChanged(bool HideLoadingIcon, class FText StateText, bool CallFunc_TextIsEmpty_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingProgress_C", "LoadingStateChanged");

	Params::UUMG_LoadingProgress_C_LoadingStateChanged_Params Parms{};

	Parms.HideLoadingIcon = HideLoadingIcon;
	Parms.StateText = StateText;
	Parms.CallFunc_TextIsEmpty_ReturnValue = CallFunc_TextIsEmpty_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadingProgress.UMG_LoadingProgress_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoadingProgress_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingProgress_C", "PreConstruct");

	Params::UUMG_LoadingProgress_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_LoadingProgress.UMG_LoadingProgress_C.ExecuteUbergraph_UMG_LoadingProgress
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_LoadingProgress_C::ExecuteUbergraph_UMG_LoadingProgress(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_LoadingProgress_C", "ExecuteUbergraph_UMG_LoadingProgress");

	Params::UUMG_LoadingProgress_C_ExecuteUbergraph_UMG_LoadingProgress_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



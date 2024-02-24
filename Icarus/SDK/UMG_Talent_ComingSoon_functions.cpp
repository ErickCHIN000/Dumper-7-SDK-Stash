#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Talent_ComingSoon.UMG_Talent_ComingSoon_C
// (None)

class UClass* UUMG_Talent_ComingSoon_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Talent_ComingSoon_C");

	return Clss;
}


// UMG_Talent_ComingSoon_C UMG_Talent_ComingSoon.Default__UMG_Talent_ComingSoon_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Talent_ComingSoon_C* UUMG_Talent_ComingSoon_C::GetDefaultObj()
{
	static class UUMG_Talent_ComingSoon_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Talent_ComingSoon_C*>(UUMG_Talent_ComingSoon_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Talent_ComingSoon.UMG_Talent_ComingSoon_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Talent_ComingSoon_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_ComingSoon_C", "PreConstruct");

	Params::UUMG_Talent_ComingSoon_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Talent_ComingSoon.UMG_Talent_ComingSoon_C.BndEvt__HoverArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_ComingSoon_C::BndEvt__HoverArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_ComingSoon_C", "BndEvt__HoverArea_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_ComingSoon.UMG_Talent_ComingSoon_C.BndEvt__HoverArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:

void UUMG_Talent_ComingSoon_C::BndEvt__HoverArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_ComingSoon_C", "BndEvt__HoverArea_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Talent_ComingSoon.UMG_Talent_ComingSoon_C.ExecuteUbergraph_UMG_Talent_ComingSoon
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (None)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor_1                                   (None)

void UUMG_Talent_ComingSoon_C::ExecuteUbergraph_UMG_Talent_ComingSoon(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FSlateColor& K2Node_MakeStruct_SlateColor_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Talent_ComingSoon_C", "ExecuteUbergraph_UMG_Talent_ComingSoon");

	Params::UUMG_Talent_ComingSoon_C_ExecuteUbergraph_UMG_Talent_ComingSoon_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;
	Parms.K2Node_MakeStruct_SlateColor_1 = K2Node_MakeStruct_SlateColor_1;

	UObject::ProcessEvent(Func, &Parms);

}

}



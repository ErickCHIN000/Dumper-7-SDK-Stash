#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_SpaceMenuHeader.UMG_SpaceMenuHeader_C
// (None)

class UClass* UUMG_SpaceMenuHeader_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_SpaceMenuHeader_C");

	return Clss;
}


// UMG_SpaceMenuHeader_C UMG_SpaceMenuHeader.Default__UMG_SpaceMenuHeader_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_SpaceMenuHeader_C* UUMG_SpaceMenuHeader_C::GetDefaultObj()
{
	static class UUMG_SpaceMenuHeader_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_SpaceMenuHeader_C*>(UUMG_SpaceMenuHeader_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_SpaceMenuHeader.UMG_SpaceMenuHeader_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_SpaceMenuHeader_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenuHeader_C", "PreConstruct");

	Params::UUMG_SpaceMenuHeader_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_SpaceMenuHeader.UMG_SpaceMenuHeader_C.ExecuteUbergraph_UMG_SpaceMenuHeader
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_ToUpper_ReturnValue                                     (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

void UUMG_SpaceMenuHeader_C::ExecuteUbergraph_UMG_SpaceMenuHeader(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const class FString& CallFunc_ToUpper_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_SpaceMenuHeader_C", "ExecuteUbergraph_UMG_SpaceMenuHeader");

	Params::UUMG_SpaceMenuHeader_C_ExecuteUbergraph_UMG_SpaceMenuHeader_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_ToUpper_ReturnValue = CallFunc_ToUpper_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BigMirabilisUnobtained.WBP_BigMirabilisUnobtained_C
// (None)

class UClass* UWBP_BigMirabilisUnobtained_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BigMirabilisUnobtained_C");

	return Clss;
}


// WBP_BigMirabilisUnobtained_C WBP_BigMirabilisUnobtained.Default__WBP_BigMirabilisUnobtained_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BigMirabilisUnobtained_C* UWBP_BigMirabilisUnobtained_C::GetDefaultObj()
{
	static class UWBP_BigMirabilisUnobtained_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BigMirabilisUnobtained_C*>(UWBP_BigMirabilisUnobtained_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BigMirabilisUnobtained.WBP_BigMirabilisUnobtained_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BigMirabilisUnobtained_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BigMirabilisUnobtained_C", "PreConstruct");

	Params::UWBP_BigMirabilisUnobtained_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BigMirabilisUnobtained.WBP_BigMirabilisUnobtained_C.ExecuteUbergraph_WBP_BigMirabilisUnobtained
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BigMirabilisUnobtained_C::ExecuteUbergraph_WBP_BigMirabilisUnobtained(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BigMirabilisUnobtained_C", "ExecuteUbergraph_WBP_BigMirabilisUnobtained");

	Params::UWBP_BigMirabilisUnobtained_C_ExecuteUbergraph_WBP_BigMirabilisUnobtained_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_BigMirabilisObtained.WBP_BigMirabilisObtained_C
// (None)

class UClass* UWBP_BigMirabilisObtained_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_BigMirabilisObtained_C");

	return Clss;
}


// WBP_BigMirabilisObtained_C WBP_BigMirabilisObtained.Default__WBP_BigMirabilisObtained_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_BigMirabilisObtained_C* UWBP_BigMirabilisObtained_C::GetDefaultObj()
{
	static class UWBP_BigMirabilisObtained_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_BigMirabilisObtained_C*>(UWBP_BigMirabilisObtained_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_BigMirabilisObtained.WBP_BigMirabilisObtained_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BigMirabilisObtained_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BigMirabilisObtained_C", "PreConstruct");

	Params::UWBP_BigMirabilisObtained_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_BigMirabilisObtained.WBP_BigMirabilisObtained_C.ExecuteUbergraph_WBP_BigMirabilisObtained
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWBP_BigMirabilisObtained_C::ExecuteUbergraph_WBP_BigMirabilisObtained(int32 EntryPoint, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_BigMirabilisObtained_C", "ExecuteUbergraph_WBP_BigMirabilisObtained");

	Params::UWBP_BigMirabilisObtained_C_ExecuteUbergraph_WBP_BigMirabilisObtained_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



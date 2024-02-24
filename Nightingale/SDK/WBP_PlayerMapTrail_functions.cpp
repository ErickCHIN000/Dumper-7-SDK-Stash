#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PlayerMapTrail.WBP_PlayerMapTrail_C
// (None)

class UClass* UWBP_PlayerMapTrail_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PlayerMapTrail_C");

	return Clss;
}


// WBP_PlayerMapTrail_C WBP_PlayerMapTrail.Default__WBP_PlayerMapTrail_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PlayerMapTrail_C* UWBP_PlayerMapTrail_C::GetDefaultObj()
{
	static class UWBP_PlayerMapTrail_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PlayerMapTrail_C*>(UWBP_PlayerMapTrail_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PlayerMapTrail.WBP_PlayerMapTrail_C.OnPaint
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FPaintContext               Context                                                          (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
// TArray<struct FVector2D>           ConvertedMapPoints                                               (Edit, BlueprintVisible)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapTrail_C::OnPaint(struct FPaintContext& Context, const TArray<struct FVector2D>& ConvertedMapPoints, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapTrail_C", "OnPaint");

	Params::UWBP_PlayerMapTrail_C_OnPaint_Params Parms{};

	Parms.Context = Context;
	Parms.ConvertedMapPoints = ConvertedMapPoints;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PlayerMapTrail.WBP_PlayerMapTrail_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_PlayerMapTrail_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapTrail_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_PlayerMapTrail.WBP_PlayerMapTrail_C.ExecuteUbergraph_WBP_PlayerMapTrail
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ANWXPlayerState*             CallFunc_GetOwningPlayerState_ReturnValue_1                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PlayerMapTrail_C::ExecuteUbergraph_WBP_PlayerMapTrail(int32 EntryPoint, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue, class ANWXPlayerState* CallFunc_GetOwningPlayerState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PlayerMapTrail_C", "ExecuteUbergraph_WBP_PlayerMapTrail");

	Params::UWBP_PlayerMapTrail_C_ExecuteUbergraph_WBP_PlayerMapTrail_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue = CallFunc_GetOwningPlayerState_ReturnValue;
	Parms.CallFunc_GetOwningPlayerState_ReturnValue_1 = CallFunc_GetOwningPlayerState_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



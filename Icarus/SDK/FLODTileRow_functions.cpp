#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass FLODTileRow.FLODTileRow_C
// (None)

class UClass* UFLODTileRow_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FLODTileRow_C");

	return Clss;
}


// FLODTileRow_C FLODTileRow.Default__FLODTileRow_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFLODTileRow_C* UFLODTileRow_C::GetDefaultObj()
{
	static class UFLODTileRow_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFLODTileRow_C*>(UFLODTileRow_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FLODTileRow.FLODTileRow_C.SetFLODTile
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFLODTile*                   FLODTile                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFLODTileRow_C::SetFLODTile(class AFLODTile* FLODTile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FLODTileRow_C", "SetFLODTile");

	Params::UFLODTileRow_C_SetFLODTile_Params Parms{};

	Parms.FLODTile = FLODTile;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FLODTileRow.FLODTileRow_C.ExecuteUbergraph_FLODTileRow
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFLODTile*                   K2Node_CustomEvent_FLODTile                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_NameToText_ReturnValue                             (None)

void UFLODTileRow_C::ExecuteUbergraph_FLODTileRow(int32 EntryPoint, class AFLODTile* K2Node_CustomEvent_FLODTile, class FText CallFunc_Conv_NameToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FLODTileRow_C", "ExecuteUbergraph_FLODTileRow");

	Params::UFLODTileRow_C_ExecuteUbergraph_FLODTileRow_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_FLODTile = K2Node_CustomEvent_FLODTile;
	Parms.CallFunc_Conv_NameToText_ReturnValue = CallFunc_Conv_NameToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



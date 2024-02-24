#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_GridItem_Draggable.WBP_GridItem_Draggable_C
// (None)

class UClass* UWBP_GridItem_Draggable_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_GridItem_Draggable_C");

	return Clss;
}


// WBP_GridItem_Draggable_C WBP_GridItem_Draggable.Default__WBP_GridItem_Draggable_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_GridItem_Draggable_C* UWBP_GridItem_Draggable_C::GetDefaultObj()
{
	static class UWBP_GridItem_Draggable_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_GridItem_Draggable_C*>(UWBP_GridItem_Draggable_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_GridItem_Draggable.WBP_GridItem_Draggable_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWBP_GridItem_Draggable_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GridItem_Draggable_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function WBP_GridItem_Draggable.WBP_GridItem_Draggable_C.ExecuteUbergraph_WBP_GridItem_Draggable
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_GridItem_Draggable_C::ExecuteUbergraph_WBP_GridItem_Draggable(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_GridItem_Draggable_C", "ExecuteUbergraph_WBP_GridItem_Draggable");

	Params::UWBP_GridItem_Draggable_C_ExecuteUbergraph_WBP_GridItem_Draggable_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



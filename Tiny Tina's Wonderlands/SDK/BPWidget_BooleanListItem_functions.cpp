#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BPWidget_BooleanListItem.BPWidget_BooleanListItem_C
// (None)

class UClass* UBPWidget_BooleanListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWidget_BooleanListItem_C");

	return Clss;
}


// BPWidget_BooleanListItem_C BPWidget_BooleanListItem.Default__BPWidget_BooleanListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWidget_BooleanListItem_C* UBPWidget_BooleanListItem_C::GetDefaultObj()
{
	static class UBPWidget_BooleanListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWidget_BooleanListItem_C*>(UBPWidget_BooleanListItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWidget_BooleanListItem.BPWidget_BooleanListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBPWidget_BooleanListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWidget_BooleanListItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWidget_BooleanListItem.BPWidget_BooleanListItem_C.ExecuteUbergraph_BPWidget_BooleanListItem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPWidget_BooleanListItem_C::ExecuteUbergraph_BPWidget_BooleanListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWidget_BooleanListItem_C", "ExecuteUbergraph_BPWidget_BooleanListItem");

	Params::UBPWidget_BooleanListItem_C_ExecuteUbergraph_BPWidget_BooleanListItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BPWidget_TextListItem.BPWidget_TextListItem_C
// (None)

class UClass* UBPWidget_TextListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWidget_TextListItem_C");

	return Clss;
}


// BPWidget_TextListItem_C BPWidget_TextListItem.Default__BPWidget_TextListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWidget_TextListItem_C* UBPWidget_TextListItem_C::GetDefaultObj()
{
	static class UBPWidget_TextListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWidget_TextListItem_C*>(UBPWidget_TextListItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWidget_TextListItem.BPWidget_TextListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBPWidget_TextListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWidget_TextListItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWidget_TextListItem.BPWidget_TextListItem_C.ExecuteUbergraph_BPWidget_TextListItem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPWidget_TextListItem_C::ExecuteUbergraph_BPWidget_TextListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWidget_TextListItem_C", "ExecuteUbergraph_BPWidget_TextListItem");

	Params::UBPWidget_TextListItem_C_ExecuteUbergraph_BPWidget_TextListItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



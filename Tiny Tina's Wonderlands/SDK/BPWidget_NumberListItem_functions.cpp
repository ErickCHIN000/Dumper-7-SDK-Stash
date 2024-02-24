#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BPWidget_NumberListItem.BPWidget_NumberListItem_C
// (None)

class UClass* UBPWidget_NumberListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWidget_NumberListItem_C");

	return Clss;
}


// BPWidget_NumberListItem_C BPWidget_NumberListItem.Default__BPWidget_NumberListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWidget_NumberListItem_C* UBPWidget_NumberListItem_C::GetDefaultObj()
{
	static class UBPWidget_NumberListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWidget_NumberListItem_C*>(UBPWidget_NumberListItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWidget_NumberListItem.BPWidget_NumberListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBPWidget_NumberListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWidget_NumberListItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWidget_NumberListItem.BPWidget_NumberListItem_C.ExecuteUbergraph_BPWidget_NumberListItem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPWidget_NumberListItem_C::ExecuteUbergraph_BPWidget_NumberListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWidget_NumberListItem_C", "ExecuteUbergraph_BPWidget_NumberListItem");

	Params::UBPWidget_NumberListItem_C_ExecuteUbergraph_BPWidget_NumberListItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



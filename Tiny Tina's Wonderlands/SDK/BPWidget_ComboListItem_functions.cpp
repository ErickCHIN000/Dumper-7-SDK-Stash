#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass BPWidget_ComboListItem.BPWidget_ComboListItem_C
// (None)

class UClass* UBPWidget_ComboListItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BPWidget_ComboListItem_C");

	return Clss;
}


// BPWidget_ComboListItem_C BPWidget_ComboListItem.Default__BPWidget_ComboListItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBPWidget_ComboListItem_C* UBPWidget_ComboListItem_C::GetDefaultObj()
{
	static class UBPWidget_ComboListItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBPWidget_ComboListItem_C*>(UBPWidget_ComboListItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BPWidget_ComboListItem.BPWidget_ComboListItem_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBPWidget_ComboListItem_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWidget_ComboListItem_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BPWidget_ComboListItem.BPWidget_ComboListItem_C.ExecuteUbergraph_BPWidget_ComboListItem
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBPWidget_ComboListItem_C::ExecuteUbergraph_BPWidget_ComboListItem(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BPWidget_ComboListItem_C", "ExecuteUbergraph_BPWidget_ComboListItem");

	Params::UBPWidget_ComboListItem_C_ExecuteUbergraph_BPWidget_ComboListItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



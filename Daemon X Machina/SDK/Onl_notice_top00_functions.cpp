#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass Onl_notice_top00.Onl_notice_top00_C
// (None)

class UClass* UOnl_notice_top00_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Onl_notice_top00_C");

	return Clss;
}


// Onl_notice_top00_C Onl_notice_top00.Default__Onl_notice_top00_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UOnl_notice_top00_C* UOnl_notice_top00_C::GetDefaultObj()
{
	static class UOnl_notice_top00_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UOnl_notice_top00_C*>(UOnl_notice_top00_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Onl_notice_top00.Onl_notice_top00_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UOnl_notice_top00_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Onl_notice_top00_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Onl_notice_top00.Onl_notice_top00_C.ExecuteUbergraph_Onl_notice_top00
// (None)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UOnl_notice_top00_C::ExecuteUbergraph_Onl_notice_top00(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Onl_notice_top00_C", "ExecuteUbergraph_Onl_notice_top00");

	Params::UOnl_notice_top00_C_ExecuteUbergraph_Onl_notice_top00_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass SubcategoryCaption.SubcategoryCaption_C
// (None)

class UClass* USubcategoryCaption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SubcategoryCaption_C");

	return Clss;
}


// SubcategoryCaption_C SubcategoryCaption.Default__SubcategoryCaption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USubcategoryCaption_C* USubcategoryCaption_C::GetDefaultObj()
{
	static class USubcategoryCaption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<USubcategoryCaption_C*>(USubcategoryCaption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function SubcategoryCaption.SubcategoryCaption_C.StopNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubcategoryCaption_C::StopNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubcategoryCaption_C", "StopNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubcategoryCaption.SubcategoryCaption_C.PlayNotify
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void USubcategoryCaption_C::PlayNotify()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubcategoryCaption_C", "PlayNotify");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubcategoryCaption.SubcategoryCaption_C.OnSynchronizeProperties
// (Event, Public, BlueprintEvent)
// Parameters:

void USubcategoryCaption_C::OnSynchronizeProperties()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubcategoryCaption_C", "OnSynchronizeProperties");



	UObject::ProcessEvent(Func, nullptr);

}


// Function SubcategoryCaption.SubcategoryCaption_C.ExecuteUbergraph_SubcategoryCaption
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USubcategoryCaption_C::ExecuteUbergraph_SubcategoryCaption(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SubcategoryCaption_C", "ExecuteUbergraph_SubcategoryCaption");

	Params::USubcategoryCaption_C_ExecuteUbergraph_SubcategoryCaption_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Loot_Buttons.wid_Loot_Buttons_C
// (None)

class UClass* UWid_Loot_Buttons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Loot_Buttons_C");

	return Clss;
}


// wid_Loot_Buttons_C wid_Loot_Buttons.Default__wid_Loot_Buttons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Loot_Buttons_C* UWid_Loot_Buttons_C::GetDefaultObj()
{
	static class UWid_Loot_Buttons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Loot_Buttons_C*>(UWid_Loot_Buttons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Loot_Buttons.wid_Loot_Buttons_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoModify                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_Loot_Buttons_C::Update(const struct FStruct_Inventory_ButtonModifyInfo& Modify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Buttons_C", "Update");

	Params::UWid_Loot_Buttons_C_Update_Params Parms{};

	Parms.Modify = Modify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loot_Buttons.wid_Loot_Buttons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Loot_Buttons_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Buttons_C", "PreConstruct");

	Params::UWid_Loot_Buttons_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Loot_Buttons.wid_Loot_Buttons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Loot_Buttons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Buttons_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Loot_Buttons.wid_Loot_Buttons_C.ExecuteUbergraph_wid_Loot_Buttons
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Loot_Buttons_C::ExecuteUbergraph_wid_Loot_Buttons(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Loot_Buttons_C", "ExecuteUbergraph_wid_Loot_Buttons");

	Params::UWid_Loot_Buttons_C_ExecuteUbergraph_wid_Loot_Buttons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



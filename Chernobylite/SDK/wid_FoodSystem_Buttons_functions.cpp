#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_FoodSystem_Buttons.wid_FoodSystem_Buttons_C
// (None)

class UClass* UWid_FoodSystem_Buttons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_FoodSystem_Buttons_C");

	return Clss;
}


// wid_FoodSystem_Buttons_C wid_FoodSystem_Buttons.Default__wid_FoodSystem_Buttons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_FoodSystem_Buttons_C* UWid_FoodSystem_Buttons_C::GetDefaultObj()
{
	static class UWid_FoodSystem_Buttons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_FoodSystem_Buttons_C*>(UWid_FoodSystem_Buttons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_FoodSystem_Buttons.wid_FoodSystem_Buttons_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoModify                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_FoodSystem_Buttons_C::Update(const struct FStruct_Inventory_ButtonModifyInfo& Modify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodSystem_Buttons_C", "Update");

	Params::UWid_FoodSystem_Buttons_C_Update_Params Parms{};

	Parms.Modify = Modify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_FoodSystem_Buttons.wid_FoodSystem_Buttons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_FoodSystem_Buttons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodSystem_Buttons_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_FoodSystem_Buttons.wid_FoodSystem_Buttons_C.ExecuteUbergraph_wid_FoodSystem_Buttons
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_FormatText_Output                                       (None)
// class FText                        CallFunc_TextTrimPrecedingAndTrailing_ReturnValue                (None)

void UWid_FoodSystem_Buttons_C::ExecuteUbergraph_wid_FoodSystem_Buttons(int32 EntryPoint, class FText CallFunc_FormatText_Output, class FText CallFunc_TextTrimPrecedingAndTrailing_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_FoodSystem_Buttons_C", "ExecuteUbergraph_wid_FoodSystem_Buttons");

	Params::UWid_FoodSystem_Buttons_C_ExecuteUbergraph_wid_FoodSystem_Buttons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.CallFunc_TextTrimPrecedingAndTrailing_ReturnValue = CallFunc_TextTrimPrecedingAndTrailing_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



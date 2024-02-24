#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Inventory_Grid_Entry_Counter.wid_Inventory_Grid_Entry_Counter_C
// (None)

class UClass* UWid_Inventory_Grid_Entry_Counter_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Inventory_Grid_Entry_Counter_C");

	return Clss;
}


// wid_Inventory_Grid_Entry_Counter_C wid_Inventory_Grid_Entry_Counter.Default__wid_Inventory_Grid_Entry_Counter_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Inventory_Grid_Entry_Counter_C* UWid_Inventory_Grid_Entry_Counter_C::GetDefaultObj()
{
	static class UWid_Inventory_Grid_Entry_Counter_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Inventory_Grid_Entry_Counter_C*>(UWid_Inventory_Grid_Entry_Counter_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Inventory_Grid_Entry_Counter.wid_Inventory_Grid_Entry_Counter_C.ChangeBorderOpacity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              A                                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_R                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_G                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_B                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakColor_A                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_MakeColor_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Entry_Counter_C::ChangeBorderOpacity(float A, float CallFunc_BreakColor_R, float CallFunc_BreakColor_G, float CallFunc_BreakColor_B, float CallFunc_BreakColor_A, const struct FLinearColor& CallFunc_MakeColor_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Entry_Counter_C", "ChangeBorderOpacity");

	Params::UWid_Inventory_Grid_Entry_Counter_C_ChangeBorderOpacity_Params Parms{};

	Parms.A = A;
	Parms.CallFunc_BreakColor_R = CallFunc_BreakColor_R;
	Parms.CallFunc_BreakColor_G = CallFunc_BreakColor_G;
	Parms.CallFunc_BreakColor_B = CallFunc_BreakColor_B;
	Parms.CallFunc_BreakColor_A = CallFunc_BreakColor_A;
	Parms.CallFunc_MakeColor_ReturnValue = CallFunc_MakeColor_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Entry_Counter.wid_Inventory_Grid_Entry_Counter_C.UpdateValue
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)

void UWid_Inventory_Grid_Entry_Counter_C::UpdateValue(float Value, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, class FText CallFunc_Conv_FloatToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Entry_Counter_C", "UpdateValue");

	Params::UWid_Inventory_Grid_Entry_Counter_C_UpdateValue_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Inventory_Grid_Entry_Counter.wid_Inventory_Grid_Entry_Counter_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Inventory_Grid_Entry_Counter_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Entry_Counter_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Inventory_Grid_Entry_Counter.wid_Inventory_Grid_Entry_Counter_C.ExecuteUbergraph_wid_Inventory_Grid_Entry_Counter
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Inventory_Grid_Entry_Counter_C::ExecuteUbergraph_wid_Inventory_Grid_Entry_Counter(int32 EntryPoint)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Inventory_Grid_Entry_Counter_C", "ExecuteUbergraph_wid_Inventory_Grid_Entry_Counter");

	Params::UWid_Inventory_Grid_Entry_Counter_C_ExecuteUbergraph_wid_Inventory_Grid_Entry_Counter_Params Parms{};

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}



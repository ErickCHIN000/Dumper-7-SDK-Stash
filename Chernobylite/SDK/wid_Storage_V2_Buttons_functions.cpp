#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_Storage_V2_Buttons.wid_Storage_V2_Buttons_C
// (None)

class UClass* UWid_Storage_V2_Buttons_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_Storage_V2_Buttons_C");

	return Clss;
}


// wid_Storage_V2_Buttons_C wid_Storage_V2_Buttons.Default__wid_Storage_V2_Buttons_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_Storage_V2_Buttons_C* UWid_Storage_V2_Buttons_C::GetDefaultObj()
{
	static class UWid_Storage_V2_Buttons_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_Storage_V2_Buttons_C*>(UWid_Storage_V2_Buttons_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_Storage_V2_Buttons.wid_Storage_V2_Buttons_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FStruct_Inventory_ButtonModifyInfoModify                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWid_Storage_V2_Buttons_C::Update(const struct FStruct_Inventory_ButtonModifyInfo& Modify)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Buttons_C", "Update");

	Params::UWid_Storage_V2_Buttons_C_Update_Params Parms{};

	Parms.Modify = Modify;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_V2_Buttons.wid_Storage_V2_Buttons_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_Storage_V2_Buttons_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Buttons_C", "PreConstruct");

	Params::UWid_Storage_V2_Buttons_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_Storage_V2_Buttons.wid_Storage_V2_Buttons_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_Storage_V2_Buttons_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Buttons_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_Storage_V2_Buttons.wid_Storage_V2_Buttons_C.ExecuteUbergraph_wid_Storage_V2_Buttons
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_Storage_V2_Buttons_C::ExecuteUbergraph_wid_Storage_V2_Buttons(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_Storage_V2_Buttons_C", "ExecuteUbergraph_wid_Storage_V2_Buttons");

	Params::UWid_Storage_V2_Buttons_C_ExecuteUbergraph_wid_Storage_V2_Buttons_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



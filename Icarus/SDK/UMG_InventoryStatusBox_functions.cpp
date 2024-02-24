#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_InventoryStatusBox.UMG_InventoryStatusBox_C
// (None)

class UClass* UUMG_InventoryStatusBox_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_InventoryStatusBox_C");

	return Clss;
}


// UMG_InventoryStatusBox_C UMG_InventoryStatusBox.Default__UMG_InventoryStatusBox_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_InventoryStatusBox_C* UUMG_InventoryStatusBox_C::GetDefaultObj()
{
	static class UUMG_InventoryStatusBox_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_InventoryStatusBox_C*>(UUMG_InventoryStatusBox_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_InventoryStatusBox.UMG_InventoryStatusBox_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_InventoryStatusBox_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InventoryStatusBox_C", "PreConstruct");

	Params::UUMG_InventoryStatusBox_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_InventoryStatusBox.UMG_InventoryStatusBox_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_InventoryStatusBox_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InventoryStatusBox_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_InventoryStatusBox.UMG_InventoryStatusBox_C.ExecuteUbergraph_UMG_InventoryStatusBox
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UBorderSlot*                 CallFunc_SlotAsBorderSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UUMG_InventoryStatusBox_C::ExecuteUbergraph_UMG_InventoryStatusBox(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UBorderSlot* CallFunc_SlotAsBorderSlot_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_InventoryStatusBox_C", "ExecuteUbergraph_UMG_InventoryStatusBox");

	Params::UUMG_InventoryStatusBox_C_ExecuteUbergraph_UMG_InventoryStatusBox_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_SlotAsBorderSlot_ReturnValue = CallFunc_SlotAsBorderSlot_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



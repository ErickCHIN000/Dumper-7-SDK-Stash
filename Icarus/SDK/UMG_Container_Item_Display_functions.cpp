#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_Container_Item_Display.UMG_Container_Item_Display_C
// (None)

class UClass* UUMG_Container_Item_Display_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_Container_Item_Display_C");

	return Clss;
}


// UMG_Container_Item_Display_C UMG_Container_Item_Display.Default__UMG_Container_Item_Display_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_Container_Item_Display_C* UUMG_Container_Item_Display_C::GetDefaultObj()
{
	static class UUMG_Container_Item_Display_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_Container_Item_Display_C*>(UUMG_Container_Item_Display_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_Container_Item_Display.UMG_Container_Item_Display_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Container_Item_Display_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Container_Item_Display_C", "PreConstruct");

	Params::UUMG_Container_Item_Display_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_Container_Item_Display.UMG_Container_Item_Display_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_Container_Item_Display_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Container_Item_Display_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_Container_Item_Display.UMG_Container_Item_Display_C.ExecuteUbergraph_UMG_Container_Item_Display
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_Container_Item_Display_C::ExecuteUbergraph_UMG_Container_Item_Display(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_Container_Item_Display_C", "ExecuteUbergraph_UMG_Container_Item_Display");

	Params::UUMG_Container_Item_Display_C_ExecuteUbergraph_UMG_Container_Item_Display_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



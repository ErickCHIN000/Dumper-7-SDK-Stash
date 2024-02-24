#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_pda_Map_PointerMap_Desc.wid_pda_Map_PointerMap_Desc_C
// (None)

class UClass* UWid_pda_Map_PointerMap_Desc_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_pda_Map_PointerMap_Desc_C");

	return Clss;
}


// wid_pda_Map_PointerMap_Desc_C wid_pda_Map_PointerMap_Desc.Default__wid_pda_Map_PointerMap_Desc_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_pda_Map_PointerMap_Desc_C* UWid_pda_Map_PointerMap_Desc_C::GetDefaultObj()
{
	static class UWid_pda_Map_PointerMap_Desc_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_pda_Map_PointerMap_Desc_C*>(UWid_pda_Map_PointerMap_Desc_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_pda_Map_PointerMap_Desc.wid_pda_Map_PointerMap_Desc_C.SetDesc
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        Text                                                             (BlueprintVisible, BlueprintReadOnly, Parm)
// class UWidget*                     CallFunc_GetChildAt_ReturnValue                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_TasksPanel_List_Entry_C*K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Map_PointerMap_Desc_C::SetDesc(class FText Text, class UWidget* CallFunc_GetChildAt_ReturnValue, class UWid_TasksPanel_List_Entry_C* K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_PointerMap_Desc_C", "SetDesc");

	Params::UWid_pda_Map_PointerMap_Desc_C_SetDesc_Params Parms{};

	Parms.Text = Text;
	Parms.CallFunc_GetChildAt_ReturnValue = CallFunc_GetChildAt_ReturnValue;
	Parms.K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry = K2Node_DynamicCast_AsWid_Tasks_Panel_List_Entry;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_PointerMap_Desc.wid_pda_Map_PointerMap_Desc_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Map_PointerMap_Desc_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_PointerMap_Desc_C", "PreConstruct");

	Params::UWid_pda_Map_PointerMap_Desc_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_pda_Map_PointerMap_Desc.wid_pda_Map_PointerMap_Desc_C.ExecuteUbergraph_wid_pda_Map_PointerMap_Desc
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_pda_Map_PointerMap_Desc_C::ExecuteUbergraph_wid_pda_Map_PointerMap_Desc(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_pda_Map_PointerMap_Desc_C", "ExecuteUbergraph_wid_pda_Map_PointerMap_Desc");

	Params::UWid_pda_Map_PointerMap_Desc_C_ExecuteUbergraph_wid_pda_Map_PointerMap_Desc_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



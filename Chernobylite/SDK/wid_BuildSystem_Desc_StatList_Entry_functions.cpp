#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_BuildSystem_Desc_StatList_Entry.wid_BuildSystem_Desc_StatList_Entry_C
// (None)

class UClass* UWid_BuildSystem_Desc_StatList_Entry_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_BuildSystem_Desc_StatList_Entry_C");

	return Clss;
}


// wid_BuildSystem_Desc_StatList_Entry_C wid_BuildSystem_Desc_StatList_Entry.Default__wid_BuildSystem_Desc_StatList_Entry_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_BuildSystem_Desc_StatList_Entry_C* UWid_BuildSystem_Desc_StatList_Entry_C::GetDefaultObj()
{
	static class UWid_BuildSystem_Desc_StatList_Entry_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_BuildSystem_Desc_StatList_Entry_C*>(UWid_BuildSystem_Desc_StatList_Entry_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_BuildSystem_Desc_StatList_Entry.wid_BuildSystem_Desc_StatList_Entry_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Desc_StatList_Entry_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Desc_StatList_Entry_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Desc_StatList_Entry.wid_BuildSystem_Desc_StatList_Entry_C.ExecuteUbergraph_wid_BuildSystem_Desc_StatList_Entry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FBuildStats                 CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Desc_StatList_Entry_C::ExecuteUbergraph_wid_BuildSystem_Desc_StatList_Entry(int32 EntryPoint, const struct FBuildStats& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Desc_StatList_Entry_C", "ExecuteUbergraph_wid_BuildSystem_Desc_StatList_Entry");

	Params::UWid_BuildSystem_Desc_StatList_Entry_C_ExecuteUbergraph_wid_BuildSystem_Desc_StatList_Entry_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



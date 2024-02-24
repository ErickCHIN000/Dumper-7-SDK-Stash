#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_BuildSystem_Desc_StatList.wid_BuildSystem_Desc_StatList_C
// (None)

class UClass* UWid_BuildSystem_Desc_StatList_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_BuildSystem_Desc_StatList_C");

	return Clss;
}


// wid_BuildSystem_Desc_StatList_C wid_BuildSystem_Desc_StatList.Default__wid_BuildSystem_Desc_StatList_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_BuildSystem_Desc_StatList_C* UWid_BuildSystem_Desc_StatList_C::GetDefaultObj()
{
	static class UWid_BuildSystem_Desc_StatList_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_BuildSystem_Desc_StatList_C*>(UWid_BuildSystem_Desc_StatList_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_BuildSystem_Desc_StatList.wid_BuildSystem_Desc_StatList_C.Add
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FBuildStatEntry             Stat                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
// class APlayerController*           CallFunc_GetPlayerController_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_BuildSystem_Desc_StatList_Entry_C*CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerticalBoxSlot*            CallFunc_AddChildToVerticalBox_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_BuildSystem_Desc_StatList_C::Add(const struct FBuildStatEntry& Stat, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class UWid_BuildSystem_Desc_StatList_Entry_C* CallFunc_Create_ReturnValue, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Desc_StatList_C", "Add");

	Params::UWid_BuildSystem_Desc_StatList_C_Add_Params Parms{};

	Parms.Stat = Stat;
	Parms.CallFunc_GetPlayerController_ReturnValue = CallFunc_GetPlayerController_ReturnValue;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_AddChildToVerticalBox_ReturnValue = CallFunc_AddChildToVerticalBox_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Desc_StatList.wid_BuildSystem_Desc_StatList_C.Clear
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_BuildSystem_Desc_StatList_C::Clear()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Desc_StatList_C", "Clear");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_BuildSystem_Desc_StatList.wid_BuildSystem_Desc_StatList_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Desc_StatList_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Desc_StatList_C", "PreConstruct");

	Params::UWid_BuildSystem_Desc_StatList_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_BuildSystem_Desc_StatList.wid_BuildSystem_Desc_StatList_C.ExecuteUbergraph_wid_BuildSystem_Desc_StatList
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_BuildSystem_Desc_StatList_C::ExecuteUbergraph_wid_BuildSystem_Desc_StatList(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_BuildSystem_Desc_StatList_C", "ExecuteUbergraph_wid_BuildSystem_Desc_StatList");

	Params::UWid_BuildSystem_Desc_StatList_C_ExecuteUbergraph_wid_BuildSystem_Desc_StatList_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



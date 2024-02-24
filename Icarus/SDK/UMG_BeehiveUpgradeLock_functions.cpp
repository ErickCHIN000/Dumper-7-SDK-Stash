#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_BeehiveUpgradeLock.UMG_BeehiveUpgradeLock_C
// (None)

class UClass* UUMG_BeehiveUpgradeLock_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_BeehiveUpgradeLock_C");

	return Clss;
}


// UMG_BeehiveUpgradeLock_C UMG_BeehiveUpgradeLock.Default__UMG_BeehiveUpgradeLock_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_BeehiveUpgradeLock_C* UUMG_BeehiveUpgradeLock_C::GetDefaultObj()
{
	static class UUMG_BeehiveUpgradeLock_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_BeehiveUpgradeLock_C*>(UUMG_BeehiveUpgradeLock_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_BeehiveUpgradeLock.UMG_BeehiveUpgradeLock_C.SetItem
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)

void UUMG_BeehiveUpgradeLock_C::SetItem(const struct FItemsStaticRowHandle& Item)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BeehiveUpgradeLock_C", "SetItem");

	Params::UUMG_BeehiveUpgradeLock_C_SetItem_Params Parms{};

	Parms.Item = Item;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BeehiveUpgradeLock.UMG_BeehiveUpgradeLock_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_BeehiveUpgradeLock_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BeehiveUpgradeLock_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_BeehiveUpgradeLock.UMG_BeehiveUpgradeLock_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_BeehiveUpgradeLock_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BeehiveUpgradeLock_C", "PreConstruct");

	Params::UUMG_BeehiveUpgradeLock_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_BeehiveUpgradeLock.UMG_BeehiveUpgradeLock_C.ExecuteUbergraph_UMG_BeehiveUpgradeLock
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemsStaticRowHandle       K2Node_CustomEvent_Item                                          (NoDestructor, HasGetValueTypeHash)
// struct FItemStaticData             CallFunc_GetItemsStaticStruct_ItemsStatic                        (None)
// enum class EValid                  CallFunc_GetItemsStaticStruct_Paths                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetItemName_Static_Name                                 (None)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UUMG_BeehiveUpgradeLock_C::ExecuteUbergraph_UMG_BeehiveUpgradeLock(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FItemsStaticRowHandle& K2Node_CustomEvent_Item, const struct FItemStaticData& CallFunc_GetItemsStaticStruct_ItemsStatic, enum class EValid CallFunc_GetItemsStaticStruct_Paths, bool K2Node_SwitchEnum_CmpSuccess, class FText CallFunc_GetItemName_Static_Name, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_BeehiveUpgradeLock_C", "ExecuteUbergraph_UMG_BeehiveUpgradeLock");

	Params::UUMG_BeehiveUpgradeLock_C_ExecuteUbergraph_UMG_BeehiveUpgradeLock_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.K2Node_CustomEvent_Item = K2Node_CustomEvent_Item;
	Parms.CallFunc_GetItemsStaticStruct_ItemsStatic = CallFunc_GetItemsStaticStruct_ItemsStatic;
	Parms.CallFunc_GetItemsStaticStruct_Paths = CallFunc_GetItemsStaticStruct_Paths;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetItemName_Static_Name = CallFunc_GetItemName_Static_Name;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



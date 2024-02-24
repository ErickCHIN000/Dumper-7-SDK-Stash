#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass UMG_ItemDisplay.UMG_ItemDisplay_C
// (None)

class UClass* UUMG_ItemDisplay_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("UMG_ItemDisplay_C");

	return Clss;
}


// UMG_ItemDisplay_C UMG_ItemDisplay.Default__UMG_ItemDisplay_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UUMG_ItemDisplay_C* UUMG_ItemDisplay_C::GetDefaultObj()
{
	static class UUMG_ItemDisplay_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UUMG_ItemDisplay_C*>(UUMG_ItemDisplay_C::StaticClass()->DefaultObject);

	return Default;
}


// Function UMG_ItemDisplay.UMG_ItemDisplay_C.Setup
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemsStaticRowHandle       Item                                                             (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FItemableRowHandle          Itemable                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UTexture2D>   Temp_wildcard_Variable                                           (HasGetValueTypeHash)
// struct FItemableData               CallFunc_GetItemableStruct_Itemable                              (None)
// enum class EValid                  CallFunc_GetItemableStruct_Paths                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsRowHandleValid_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FItemData                   K2Node_MakeStruct_ItemData                                       (ContainsInstancedReference)
// TSoftObjectPtr<class UTexture2D>   CallFunc_GetItemIcon_Icon                                        (HasGetValueTypeHash)
// class UUMG_ItemPopup_C*            CallFunc_Create_ReturnValue                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Show_for_Item_Shown                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ItemDisplay_C::Setup(const struct FItemsStaticRowHandle& Item, const struct FItemableRowHandle& Itemable, TSoftObjectPtr<class UTexture2D> Temp_wildcard_Variable, const struct FItemableData& CallFunc_GetItemableStruct_Itemable, enum class EValid CallFunc_GetItemableStruct_Paths, bool CallFunc_IsRowHandleValid_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FItemData& K2Node_MakeStruct_ItemData, TSoftObjectPtr<class UTexture2D> CallFunc_GetItemIcon_Icon, class UUMG_ItemPopup_C* CallFunc_Create_ReturnValue, bool CallFunc_Show_for_Item_Shown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemDisplay_C", "Setup");

	Params::UUMG_ItemDisplay_C_Setup_Params Parms{};

	Parms.Item = Item;
	Parms.Itemable = Itemable;
	Parms.Temp_wildcard_Variable = Temp_wildcard_Variable;
	Parms.CallFunc_GetItemableStruct_Itemable = CallFunc_GetItemableStruct_Itemable;
	Parms.CallFunc_GetItemableStruct_Paths = CallFunc_GetItemableStruct_Paths;
	Parms.CallFunc_IsRowHandleValid_ReturnValue = CallFunc_IsRowHandleValid_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_ItemData = K2Node_MakeStruct_ItemData;
	Parms.CallFunc_GetItemIcon_Icon = CallFunc_GetItemIcon_Icon;
	Parms.CallFunc_Create_ReturnValue = CallFunc_Create_ReturnValue;
	Parms.CallFunc_Show_for_Item_Shown = CallFunc_Show_for_Item_Shown;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ItemDisplay.UMG_ItemDisplay_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UUMG_ItemDisplay_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemDisplay_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function UMG_ItemDisplay.UMG_ItemDisplay_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ItemDisplay_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemDisplay_C", "PreConstruct");

	Params::UUMG_ItemDisplay_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function UMG_ItemDisplay.UMG_ItemDisplay_C.ExecuteUbergraph_UMG_ItemDisplay
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)

void UUMG_ItemDisplay_C::ExecuteUbergraph_UMG_ItemDisplay(int32 EntryPoint, bool K2Node_Event_IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("UMG_ItemDisplay_C", "ExecuteUbergraph_UMG_ItemDisplay");

	Params::UUMG_ItemDisplay_C_ExecuteUbergraph_UMG_ItemDisplay_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}

}



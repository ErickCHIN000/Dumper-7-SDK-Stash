#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass WBP_PopupCheatGrantItem.WBP_PopupCheatGrantItem_C
// (None)

class UClass* UWBP_PopupCheatGrantItem_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("WBP_PopupCheatGrantItem_C");

	return Clss;
}


// WBP_PopupCheatGrantItem_C WBP_PopupCheatGrantItem.Default__WBP_PopupCheatGrantItem_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWBP_PopupCheatGrantItem_C* UWBP_PopupCheatGrantItem_C::GetDefaultObj()
{
	static class UWBP_PopupCheatGrantItem_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWBP_PopupCheatGrantItem_C*>(UWBP_PopupCheatGrantItem_C::StaticClass()->DefaultObject);

	return Default;
}


// Function WBP_PopupCheatGrantItem.WBP_PopupCheatGrantItem_C.GetMaxItemCount
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)
// int32                              MaxItemCount                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_PopupCheatGrantItem_C::GetMaxItemCount(const struct FItemDataReference& ItemId, int32* MaxItemCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PopupCheatGrantItem_C", "GetMaxItemCount");

	Params::UWBP_PopupCheatGrantItem_C_GetMaxItemCount_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

	if (MaxItemCount != nullptr)
		*MaxItemCount = Parms.MaxItemCount;

}


// Function WBP_PopupCheatGrantItem.WBP_PopupCheatGrantItem_C.UpdateConfirmText
// (Protected, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FItemDataReference          ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_PopupCheatGrantItem_C::UpdateConfirmText(const struct FItemDataReference& ItemId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PopupCheatGrantItem_C", "UpdateConfirmText");

	Params::UWBP_PopupCheatGrantItem_C_UpdateConfirmText_Params Parms{};

	Parms.ItemId = ItemId;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_PopupCheatGrantItem.WBP_PopupCheatGrantItem_C.ExecuteUbergraph_WBP_PopupCheatGrantItem
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemDataReference          K2Node_Event_ItemID                                              (HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// class FText                        CallFunc_Format_ReturnValue                                      (None)

void UWBP_PopupCheatGrantItem_C::ExecuteUbergraph_WBP_PopupCheatGrantItem(int32 EntryPoint, const struct FItemDataReference& K2Node_Event_ItemID, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("WBP_PopupCheatGrantItem_C", "ExecuteUbergraph_WBP_PopupCheatGrantItem");

	Params::UWBP_PopupCheatGrantItem_C_ExecuteUbergraph_WBP_PopupCheatGrantItem_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ItemID = K2Node_Event_ItemID;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}



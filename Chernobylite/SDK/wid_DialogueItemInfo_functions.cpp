#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_DialogueItemInfo.wid_DialogueItemInfo_C
// (None)

class UClass* UWid_DialogueItemInfo_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_DialogueItemInfo_C");

	return Clss;
}


// wid_DialogueItemInfo_C wid_DialogueItemInfo.Default__wid_DialogueItemInfo_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_DialogueItemInfo_C* UWid_DialogueItemInfo_C::GetDefaultObj()
{
	static class UWid_DialogueItemInfo_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_DialogueItemInfo_C*>(UWid_DialogueItemInfo_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_DialogueItemInfo.wid_DialogueItemInfo_C.Update
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FDialogueItemInfo           ItemInfo                                                         (BlueprintVisible, BlueprintReadOnly, Parm)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWid_DialogueItemInfo_Entry_C*CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item_1                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueItemInfo_C::Update(const struct FDialogueItemInfo& ItemInfo, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UWid_DialogueItemInfo_Entry_C* CallFunc_Array_Get_Item, class FName CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueItemInfo_C", "Update");

	Params::UWid_DialogueItemInfo_C_Update_Params Parms{};

	Parms.ItemInfo = ItemInfo;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueItemInfo.wid_DialogueItemInfo_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_DialogueItemInfo_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueItemInfo_C", "PreConstruct");

	Params::UWid_DialogueItemInfo_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_DialogueItemInfo.wid_DialogueItemInfo_C.UpdateInfoArray
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_DialogueItemInfo_C::UpdateInfoArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueItemInfo_C", "UpdateInfoArray");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_DialogueItemInfo.wid_DialogueItemInfo_C.ExecuteUbergraph_wid_DialogueItemInfo
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_FormatText_Output                                       (None)
// TArray<class UWid_DialogueItemInfo_Entry_C*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

void UWid_DialogueItemInfo_C::ExecuteUbergraph_wid_DialogueItemInfo(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class FText CallFunc_FormatText_Output, TArray<class UWid_DialogueItemInfo_Entry_C*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_DialogueItemInfo_C", "ExecuteUbergraph_wid_DialogueItemInfo");

	Params::UWid_DialogueItemInfo_C_ExecuteUbergraph_wid_DialogueItemInfo_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_FormatText_Output = CallFunc_FormatText_Output;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

}

}



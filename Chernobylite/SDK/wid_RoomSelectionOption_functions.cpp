#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_RoomSelectionOption.wid_RoomSelectionOption_C
// (None)

class UClass* UWid_RoomSelectionOption_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_RoomSelectionOption_C");

	return Clss;
}


// wid_RoomSelectionOption_C wid_RoomSelectionOption.Default__wid_RoomSelectionOption_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_RoomSelectionOption_C* UWid_RoomSelectionOption_C::GetDefaultObj()
{
	static class UWid_RoomSelectionOption_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_RoomSelectionOption_C*>(UWid_RoomSelectionOption_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_RoomSelectionOption.wid_RoomSelectionOption_C.UseUpResources
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StorageCount                                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UInventoryComponent2*        CallFunc_GetCGPlayerInventory_InventoryComponentNew              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSt_ItemByEnumAndCount      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// enum class EResourceType           CallFunc_MapEnumItemNamesToEResourceType_Value                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MapEnumItemNamesToEResourceType_Found                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Remove_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Count_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSelectionOption_C::UseUpResources(float StorageCount, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, class UInventoryComponent2* CallFunc_GetCGPlayerInventory_InventoryComponentNew, int32 CallFunc_Array_Length_ReturnValue, const struct FSt_ItemByEnumAndCount& CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, enum class EResourceType CallFunc_MapEnumItemNamesToEResourceType_Value, bool CallFunc_MapEnumItemNamesToEResourceType_Found, class FName CallFunc_Conv_StringToName_ReturnValue, float CallFunc_Remove_ReturnValue, float CallFunc_Count_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSelectionOption_C", "UseUpResources");

	Params::UWid_RoomSelectionOption_C_UseUpResources_Params Parms{};

	Parms.StorageCount = StorageCount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_GetCGPlayerInventory_InventoryComponentNew = CallFunc_GetCGPlayerInventory_InventoryComponentNew;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_MapEnumItemNamesToEResourceType_Value = CallFunc_MapEnumItemNamesToEResourceType_Value;
	Parms.CallFunc_MapEnumItemNamesToEResourceType_Found = CallFunc_MapEnumItemNamesToEResourceType_Found;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_Remove_ReturnValue = CallFunc_Remove_ReturnValue;
	Parms.CallFunc_Count_ReturnValue = CallFunc_Count_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSelectionOption.wid_RoomSelectionOption_C.CanBeBought
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Can                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_DoesThePlayerHaveItems_Has_enough_items                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSelectionOption_C::CanBeBought(bool* Can, bool CallFunc_DoesThePlayerHaveItems_Has_enough_items)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSelectionOption_C", "CanBeBought");

	Params::UWid_RoomSelectionOption_C_CanBeBought_Params Parms{};

	Parms.CallFunc_DoesThePlayerHaveItems_Has_enough_items = CallFunc_DoesThePlayerHaveItems_Has_enough_items;

	UObject::ProcessEvent(Func, &Parms);

	if (Can != nullptr)
		*Can = Parms.Can;

}


// Function wid_RoomSelectionOption.wid_RoomSelectionOption_C.GetColorAndOpacity_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FSlateColor                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_SelectColor_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateColor                 K2Node_MakeStruct_SlateColor                                     (UObjectWrapper)

struct FSlateColor UWid_RoomSelectionOption_C::GetColorAndOpacity_0(const struct FLinearColor& CallFunc_SelectColor_ReturnValue, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue_2, const struct FSlateColor& K2Node_MakeStruct_SlateColor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSelectionOption_C", "GetColorAndOpacity_0");

	Params::UWid_RoomSelectionOption_C_GetColorAndOpacity_0_Params Parms{};

	Parms.CallFunc_SelectColor_ReturnValue = CallFunc_SelectColor_ReturnValue;
	Parms.CallFunc_SelectColor_ReturnValue_1 = CallFunc_SelectColor_ReturnValue_1;
	Parms.CallFunc_SelectColor_ReturnValue_2 = CallFunc_SelectColor_ReturnValue_2;
	Parms.K2Node_MakeStruct_SlateColor = K2Node_MakeStruct_SlateColor;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_RoomSelectionOption.wid_RoomSelectionOption_C.GetText_0
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FText                        CallFunc_GetTextFromDictionary_Text                              (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)

class FText UWid_RoomSelectionOption_C::GetText_0(class FText CallFunc_GetTextFromDictionary_Text, const class FString& CallFunc_Conv_TextToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSelectionOption_C", "GetText_0");

	Params::UWid_RoomSelectionOption_C_GetText_0_Params Parms{};

	Parms.CallFunc_GetTextFromDictionary_Text = CallFunc_GetTextFromDictionary_Text;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_RoomSelectionOption.wid_RoomSelectionOption_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_RoomSelectionOption_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSelectionOption_C", "PreConstruct");

	Params::UWid_RoomSelectionOption_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_RoomSelectionOption.wid_RoomSelectionOption_C.ExecuteUbergraph_wid_RoomSelectionOption
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSt_RoomData                CallFunc_GetDataTableRowFromName_OutRow                          (ContainsInstancedReference, HasGetValueTypeHash)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_GetText_0_ReturnValue                                   (None)
// struct FSlateColor                 CallFunc_GetColorAndOpacity_0_ReturnValue                        (None)
// class FText                        CallFunc_GetTextFromDictionary_Text                              (None)

void UWid_RoomSelectionOption_C::ExecuteUbergraph_wid_RoomSelectionOption(int32 EntryPoint, bool K2Node_Event_IsDesignTime, const struct FSt_RoomData& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, class FText CallFunc_GetText_0_ReturnValue, const struct FSlateColor& CallFunc_GetColorAndOpacity_0_ReturnValue, class FText CallFunc_GetTextFromDictionary_Text)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_RoomSelectionOption_C", "ExecuteUbergraph_wid_RoomSelectionOption");

	Params::UWid_RoomSelectionOption_C_ExecuteUbergraph_wid_RoomSelectionOption_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_GetText_0_ReturnValue = CallFunc_GetText_0_ReturnValue;
	Parms.CallFunc_GetColorAndOpacity_0_ReturnValue = CallFunc_GetColorAndOpacity_0_ReturnValue;
	Parms.CallFunc_GetTextFromDictionary_Text = CallFunc_GetTextFromDictionary_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}



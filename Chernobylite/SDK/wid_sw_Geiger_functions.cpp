#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// WidgetBlueprintGeneratedClass wid_sw_Geiger.wid_sw_Geiger_C
// (None)

class UClass* UWid_sw_Geiger_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("wid_sw_Geiger_C");

	return Clss;
}


// wid_sw_Geiger_C wid_sw_Geiger.Default__wid_sw_Geiger_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UWid_sw_Geiger_C* UWid_sw_Geiger_C::GetDefaultObj()
{
	static class UWid_sw_Geiger_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UWid_sw_Geiger_C*>(UWid_sw_Geiger_C::StaticClass()->DefaultObject);

	return Default;
}


// Function wid_sw_Geiger.wid_sw_Geiger_C.RemovePickedUpItem
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class AActor*>              HighlightedActors                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARadarAfterImage*            K2Node_DynamicCast_AsRadar_After_Image                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_aa_pda_00_C*             CallFunc_GetPDA_PDA                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_aa_pda_00_C*             CallFunc_GetPDA_PDA_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_Geiger_C::RemovePickedUpItem(class AActor* Actor, const TArray<class AActor*>& HighlightedActors, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ARadarAfterImage* K2Node_DynamicCast_AsRadar_After_Image, bool K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class AActor* CallFunc_GetHeldActor_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class Aba_aa_pda_00_C* CallFunc_GetPDA_PDA, class Aba_aa_pda_00_C* CallFunc_GetPDA_PDA_1, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "RemovePickedUpItem");

	Params::UWid_sw_Geiger_C_RemovePickedUpItem_Params Parms{};

	Parms.Actor = Actor;
	Parms.HighlightedActors = HighlightedActors;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsRadar_After_Image = K2Node_DynamicCast_AsRadar_After_Image;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_GetHeldActor_ReturnValue = CallFunc_GetHeldActor_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetPDA_PDA = CallFunc_GetPDA_PDA;
	Parms.CallFunc_GetPDA_PDA_1 = CallFunc_GetPDA_PDA_1;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.GetPDA
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class Aba_aa_pda_00_C*             PDA                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGActiveItem*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_aa_pda_00_C*             K2Node_DynamicCast_AsBa_Aa_Pda_00                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_Geiger_C::GetPDA(class Aba_aa_pda_00_C** PDA, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_Array_Length_ReturnValue, class ACGActiveItem* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class Aba_aa_pda_00_C* K2Node_DynamicCast_AsBa_Aa_Pda_00, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "GetPDA");

	Params::UWid_sw_Geiger_C_GetPDA_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.K2Node_DynamicCast_AsBa_Aa_Pda_00 = K2Node_DynamicCast_AsBa_Aa_Pda_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PDA != nullptr)
		*PDA = Parms.PDA;

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.SetEnviroRandomly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              DeltaTime                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Temp                                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_FloatToText_ReturnValue                            (None)
// float                              CallFunc_RandomFloatInRangeFromStream_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_FloatFloat_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_Geiger_C::SetEnviroRandomly(float DeltaTime, float Temp, class FText CallFunc_Conv_FloatToText_ReturnValue, float CallFunc_RandomFloatInRangeFromStream_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, int32 CallFunc_FFloor_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "SetEnviroRandomly");

	Params::UWid_sw_Geiger_C_SetEnviroRandomly_Params Parms{};

	Parms.DeltaTime = DeltaTime;
	Parms.Temp = Temp;
	Parms.CallFunc_Conv_FloatToText_ReturnValue = CallFunc_Conv_FloatToText_ReturnValue;
	Parms.CallFunc_RandomFloatInRangeFromStream_ReturnValue = CallFunc_RandomFloatInRangeFromStream_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_GreaterEqual_FloatFloat_ReturnValue = CallFunc_GreaterEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.CheckIfItemMatchesCategory
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        ItemId                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchName_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_Geiger_C::CheckIfItemMatchesCategory(class FName ItemId, bool* Result, bool K2Node_SwitchName_CmpSuccess, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, bool CallFunc_EqualEqual_ByteByte_ReturnValue_5, bool CallFunc_EqualEqual_ByteByte_ReturnValue_6, bool CallFunc_EqualEqual_ByteByte_ReturnValue_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "CheckIfItemMatchesCategory");

	Params::UWid_sw_Geiger_C_CheckIfItemMatchesCategory_Params Parms{};

	Parms.ItemId = ItemId;
	Parms.K2Node_SwitchName_CmpSuccess = K2Node_SwitchName_CmpSuccess;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_5 = CallFunc_EqualEqual_ByteByte_ReturnValue_5;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_6 = CallFunc_EqualEqual_ByteByte_ReturnValue_6;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_7 = CallFunc_EqualEqual_ByteByte_ReturnValue_7;

	UObject::ProcessEvent(Func, &Parms);

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.SelectNext
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ETimelineDirection      Direction                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ScanCategory       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETimelineDirection      Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_MakeLiteralInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Percent_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_Conv_IntToByte_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class Enum_ScanCategory UWid_sw_Geiger_C::SelectNext(enum class ETimelineDirection Direction, enum class ETimelineDirection Temp_byte_Variable, int32 Temp_int_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "SelectNext");

	Params::UWid_sw_Geiger_C_SelectNext_Params Parms{};

	Parms.Direction = Direction;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_MakeLiteralInt_ReturnValue = CallFunc_MakeLiteralInt_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Percent_IntInt_ReturnValue = CallFunc_Percent_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToByte_ReturnValue = CallFunc_Conv_IntToByte_ReturnValue;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.GetItemName
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// class FString                      CallFunc_GetEnumeratorUserFriendlyName_ReturnValue               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_CullSpacesFromA_String_ReturnValue                      (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Conv_StringToName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FItemEntry                  CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)

class FText UWid_sw_Geiger_C::GetItemName(const class FString& CallFunc_GetEnumeratorUserFriendlyName_ReturnValue, const class FString& CallFunc_CullSpacesFromA_String_ReturnValue, class FName CallFunc_Conv_StringToName_ReturnValue, const struct FItemEntry& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "GetItemName");

	Params::UWid_sw_Geiger_C_GetItemName_Params Parms{};

	Parms.CallFunc_GetEnumeratorUserFriendlyName_ReturnValue = CallFunc_GetEnumeratorUserFriendlyName_ReturnValue;
	Parms.CallFunc_CullSpacesFromA_String_ReturnValue = CallFunc_CullSpacesFromA_String_ReturnValue;
	Parms.CallFunc_Conv_StringToName_ReturnValue = CallFunc_Conv_StringToName_ReturnValue;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.Update Resources
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               FoundItemOfClass                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class AActor*>              HighlightedActors                                                (Edit, BlueprintVisible, DisableEditOnTemplate)
// class ABP_PickableItem_00_C*       CurrentClosestItem                                               (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_00_C*       CurrentItem                                                      (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EResourceType>   ResArray                                                         (Edit, BlueprintVisible)
// TArray<class FName>                Array                                                            (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckIfItemMatchesCategory_Result                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_aa_pda_00_C*             CallFunc_GetPDA_PDA                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// bool                               CallFunc_CheckIfItemMatchesCategory_Result_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_True_if_break_was_hit_Variable                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ARadarAfterImage*            K2Node_DynamicCast_AsRadar_After_Image                           (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetHeldActor_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_00_C*       K2Node_DynamicCast_AsBP_Pickable_Item_00                         (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_VSizeSquared_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_VSizeSquared_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_FloatFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_Geiger_C::Update_Resources(bool* FoundItemOfClass, const TArray<class AActor*>& HighlightedActors, class ABP_PickableItem_00_C* CurrentClosestItem, class ABP_PickableItem_00_C* CurrentItem, const TArray<enum class EResourceType>& ResArray, const TArray<class FName>& Array, int32 Temp_int_Array_Index_Variable, bool CallFunc_CheckIfItemMatchesCategory_Result, class Aba_aa_pda_00_C* CallFunc_GetPDA_PDA, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_CheckIfItemMatchesCategory_Result_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class ARadarAfterImage* K2Node_DynamicCast_AsRadar_After_Image, bool K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetHeldActor_ReturnValue, class ABP_PickableItem_00_C* K2Node_DynamicCast_AsBP_Pickable_Item_00, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_2, float CallFunc_VSizeSquared_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_3, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_VSizeSquared_ReturnValue_1, bool CallFunc_Less_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "Update Resources");

	Params::UWid_sw_Geiger_C_Update_Resources_Params Parms{};

	Parms.HighlightedActors = HighlightedActors;
	Parms.CurrentClosestItem = CurrentClosestItem;
	Parms.CurrentItem = CurrentItem;
	Parms.ResArray = ResArray;
	Parms.Array = Array;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_CheckIfItemMatchesCategory_Result = CallFunc_CheckIfItemMatchesCategory_Result;
	Parms.CallFunc_GetPDA_PDA = CallFunc_GetPDA_PDA;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_CheckIfItemMatchesCategory_Result_1 = CallFunc_CheckIfItemMatchesCategory_Result_1;
	Parms.Temp_bool_True_if_break_was_hit_Variable = Temp_bool_True_if_break_was_hit_Variable;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_DynamicCast_AsRadar_After_Image = K2Node_DynamicCast_AsRadar_After_Image;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetHeldActor_ReturnValue = CallFunc_GetHeldActor_ReturnValue;
	Parms.K2Node_DynamicCast_AsBP_Pickable_Item_00 = K2Node_DynamicCast_AsBP_Pickable_Item_00;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_1 = CallFunc_Multiply_VectorVector_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_2 = CallFunc_K2_GetActorLocation_ReturnValue_2;
	Parms.CallFunc_VSizeSquared_ReturnValue = CallFunc_VSizeSquared_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_2 = CallFunc_Multiply_VectorVector_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_3 = CallFunc_K2_GetActorLocation_ReturnValue_3;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue_3 = CallFunc_Multiply_VectorVector_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_VSizeSquared_ReturnValue_1 = CallFunc_VSizeSquared_ReturnValue_1;
	Parms.CallFunc_Less_FloatFloat_ReturnValue = CallFunc_Less_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (FoundItemOfClass != nullptr)
		*FoundItemOfClass = Parms.FoundItemOfClass;

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.GiveAngle
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              StartAngle                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CurrentRadiation                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MinRadiation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              MaxRadiation                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MakeLiteralFloat_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UWid_sw_Geiger_C::GiveAngle(float StartAngle, float CurrentRadiation, float MinRadiation, float MaxRadiation, float CallFunc_MakeLiteralFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_MakeLiteralFloat_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue_1, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue_2, float CallFunc_Add_FloatFloat_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "GiveAngle");

	Params::UWid_sw_Geiger_C_GiveAngle_Params Parms{};

	Parms.StartAngle = StartAngle;
	Parms.CurrentRadiation = CurrentRadiation;
	Parms.MinRadiation = MinRadiation;
	Parms.MaxRadiation = MaxRadiation;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue = CallFunc_MakeLiteralFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_MakeLiteralFloat_ReturnValue_1 = CallFunc_MakeLiteralFloat_ReturnValue_1;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_1 = CallFunc_Multiply_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue_1 = CallFunc_Subtract_FloatFloat_ReturnValue_1;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue_2 = CallFunc_Multiply_FloatFloat_ReturnValue_2;
	Parms.CallFunc_Add_FloatFloat_ReturnValue_1 = CallFunc_Add_FloatFloat_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.SetEnviro
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Radiation                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              InaccurateRadiation                                              (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_Geiger_C::SetEnviro(float Radiation, float InaccurateRadiation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "SetEnviro");

	Params::UWid_sw_Geiger_C_SetEnviro_Params Parms{};

	Parms.Radiation = Radiation;
	Parms.InaccurateRadiation = InaccurateRadiation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::Construct()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "Construct");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.CalculateNewGeigerInaccuracy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::CalculateNewGeigerInaccuracy()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "CalculateNewGeigerInaccuracy");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.ScanWasFired
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::ScanWasFired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "ScanWasFired");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.GoLeft
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::GoLeft()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "GoLeft");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.GoRight
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::GoRight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "GoRight");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.Tick
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// float                              InDeltaTime                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_Geiger_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "Tick");

	Params::UWid_sw_Geiger_C_Tick_Params Parms{};

	Parms.MyGeometry = MyGeometry;
	Parms.InDeltaTime = InDeltaTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.Unlock
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::Unlock()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "Unlock");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.ClosestItemCollected
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ABP_PickableItem_00_C*       Actor_reference                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_Geiger_C::ClosestItemCollected(class ABP_PickableItem_00_C* Actor_reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "ClosestItemCollected");

	Params::UWid_sw_Geiger_C_ClosestItemCollected_Params Parms{};

	Parms.Actor_reference = Actor_reference;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.UnbindClosestItemCollected
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::UnbindClosestItemCollected()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "UnbindClosestItemCollected");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.CooldownEnd
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::CooldownEnd()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "CooldownEnd");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_Geiger_C::PreConstruct(bool IsDesignTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "PreConstruct");

	Params::UWid_sw_Geiger_C_PreConstruct_Params Parms{};

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.Connecting Update
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Alpha                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              Linear                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ConnectingText                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWid_sw_Geiger_C::Connecting_Update(float Alpha, float Linear, float ConnectingText)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "Connecting Update");

	Params::UWid_sw_Geiger_C_Connecting_Update_Params Parms{};

	Parms.Alpha = Alpha;
	Parms.Linear = Linear;
	Parms.ConnectingText = ConnectingText;

	UObject::ProcessEvent(Func, &Parms);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.ConnectingPopLoading
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::ConnectingPopLoading()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "ConnectingPopLoading");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.ConnectingPopText
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::ConnectingPopText()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "ConnectingPopText");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.ConnectingPopPercentage
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::ConnectingPopPercentage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "ConnectingPopPercentage");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.ConnectingPopProgressBarBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::ConnectingPopProgressBarBG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "ConnectingPopProgressBarBG");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.ConnectingPopProgressBar
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::ConnectingPopProgressBar()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "ConnectingPopProgressBar");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.ConnectingFinished
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::ConnectingFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "ConnectingFinished");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.CustomEvent_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::CustomEvent_0()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "CustomEvent_0");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.InitCurrentRes
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::InitCurrentRes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "InitCurrentRes");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.PostCooldown
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UWid_sw_Geiger_C::PostCooldown()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "PostCooldown");



	UObject::ProcessEvent(Func, nullptr);

}


// Function wid_sw_Geiger.wid_sw_Geiger_C.ExecuteUbergraph_wid_sw_Geiger
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue                               (IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_1                             (IsPlainOldData, NoDestructor)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTime_Time                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTime_Time_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Update_Resources_FoundItemOfClass                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// struct FGeometry                   K2Node_Event_MyGeometry                                          (IsPlainOldData, NoDestructor)
// float                              K2Node_Event_InDeltaTime                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetDesiredSize_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Divide_FloatFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCanvasPanelSlot*            CallFunc_SlotAsCanvasSlot_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_GetPosition_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_X_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakVector2D_Y_2                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_2                             (IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACGActiveItem*               CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class Aba_aa_pda_00_C*             K2Node_DynamicCast_AsBa_Aa_Pda_00                                (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      CallFunc_GetObjectClass_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ClassClass_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetTime_Time_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABP_PickableItem_00_C*       K2Node_CustomEvent_Actor_reference                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Update_Resources_FoundItemOfClass_1                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsTimerActiveHandle_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_IsValidTimerHandle_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_MapRangeClamped_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ScanCategory       CallFunc_SelectNext_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_ScanCategory       CallFunc_SelectNext_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Update_Resources_FoundItemOfClass_2                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Update_Resources_FoundItemOfClass_3                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Alpha                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_Linear                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_ConnectingText                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_2                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NearlyEqual_FloatFloat_ReturnValue_3                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Lerp_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_MakeTransform_ReturnValue_3                             (IsPlainOldData, NoDestructor)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class Aba_WidgetCurveAnimation_Parent_C*CallFunc_FinishSpawningActor_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FLinearColor                K2Node_MakeStruct_LinearColor                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetTime_Time_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_MakeLiteralString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// enum class ESlateVisibility        Temp_byte_Variable_2                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_3                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor)
// class FText                        CallFunc_GetItemName_ReturnValue                                 (None)
// class FText                        CallFunc_GetItemName_ReturnValue_1                               (None)
// class FText                        CallFunc_GetItemName_ReturnValue_2                               (None)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ACh_Hero_00_C*               CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsPDAToggleActivated_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPS4GamepadConnected_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)

void UWid_sw_Geiger_C::ExecuteUbergraph_wid_sw_Geiger(int32 EntryPoint, const struct FTransform& CallFunc_MakeTransform_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue, const struct FTransform& CallFunc_MakeTransform_ReturnValue_1, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetTime_Time, float CallFunc_GetTime_Time_1, float CallFunc_RandomFloatInRange_ReturnValue, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Update_Resources_FoundItemOfClass, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, const struct FVector2D& CallFunc_GetDesiredSize_ReturnValue_1, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_BreakVector2D_X_1, float CallFunc_BreakVector2D_Y_1, float CallFunc_Divide_FloatFloat_ReturnValue_1, class UCanvasPanelSlot* CallFunc_SlotAsCanvasSlot_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, const struct FVector2D& CallFunc_GetPosition_ReturnValue, float CallFunc_BreakVector2D_X_2, float CallFunc_BreakVector2D_Y_2, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, enum class ESlateVisibility Temp_byte_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, enum class ESlateVisibility Temp_byte_Variable_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_2, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2, int32 Temp_int_Array_Index_Variable, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_2, class ACGActiveItem* CallFunc_Array_Get_Item, bool CallFunc_IsValid_ReturnValue_2, class Aba_aa_pda_00_C* K2Node_DynamicCast_AsBa_Aa_Pda_00, bool K2Node_DynamicCast_bSuccess, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, float CallFunc_GetTime_Time_2, class ABP_PickableItem_00_C* K2Node_CustomEvent_Actor_reference, bool CallFunc_Update_Resources_FoundItemOfClass_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, float CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, float CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_MapRangeClamped_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool K2Node_Event_IsDesignTime, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, enum class Enum_ScanCategory CallFunc_SelectNext_ReturnValue, enum class Enum_ScanCategory CallFunc_SelectNext_ReturnValue_1, bool CallFunc_Update_Resources_FoundItemOfClass_2, bool CallFunc_Update_Resources_FoundItemOfClass_3, bool Temp_bool_Variable, float K2Node_CustomEvent_Alpha, float K2Node_CustomEvent_Linear, float K2Node_CustomEvent_ConnectingText, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_2, bool CallFunc_NearlyEqual_FloatFloat_ReturnValue_3, float CallFunc_Lerp_ReturnValue, float CallFunc_Lerp_ReturnValue_1, const struct FTransform& CallFunc_MakeTransform_ReturnValue_3, int32 CallFunc_FFloor_ReturnValue, class AActor* CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3, const class FString& CallFunc_Conv_IntToString_ReturnValue, class Aba_WidgetCurveAnimation_Parent_C* CallFunc_FinishSpawningActor_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_3, const struct FLinearColor& K2Node_MakeStruct_LinearColor, float CallFunc_GetTime_Time_3, const class FString& CallFunc_MakeLiteralString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_2, enum class ESlateVisibility Temp_byte_Variable_3, bool Temp_bool_Variable_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class FText CallFunc_GetItemName_ReturnValue, class FText CallFunc_GetItemName_ReturnValue_1, class FText CallFunc_GetItemName_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, bool CallFunc_IsValid_ReturnValue_4, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2, class ACh_Hero_00_C* CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3, bool CallFunc_GetIsPDAToggleActivated_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, enum class ESlateVisibility K2Node_Select_Default_1, bool CallFunc_IsPS4GamepadConnected_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("wid_sw_Geiger_C", "ExecuteUbergraph_wid_sw_Geiger");

	Params::UWid_sw_Geiger_C_ExecuteUbergraph_wid_sw_Geiger_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeTransform_ReturnValue = CallFunc_MakeTransform_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue;
	Parms.CallFunc_MakeTransform_ReturnValue_1 = CallFunc_MakeTransform_ReturnValue_1;
	Parms.CallFunc_FinishSpawningActor_ReturnValue = CallFunc_FinishSpawningActor_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_1 = CallFunc_FinishSpawningActor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetTime_Time = CallFunc_GetTime_Time;
	Parms.CallFunc_GetTime_Time_1 = CallFunc_GetTime_Time_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Update_Resources_FoundItemOfClass = CallFunc_Update_Resources_FoundItemOfClass;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_Event_MyGeometry = K2Node_Event_MyGeometry;
	Parms.K2Node_Event_InDeltaTime = K2Node_Event_InDeltaTime;
	Parms.CallFunc_GetDesiredSize_ReturnValue = CallFunc_GetDesiredSize_ReturnValue;
	Parms.CallFunc_BreakVector2D_X = CallFunc_BreakVector2D_X;
	Parms.CallFunc_BreakVector2D_Y = CallFunc_BreakVector2D_Y;
	Parms.CallFunc_GetDesiredSize_ReturnValue_1 = CallFunc_GetDesiredSize_ReturnValue_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue = CallFunc_Divide_FloatFloat_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_1 = CallFunc_BreakVector2D_X_1;
	Parms.CallFunc_BreakVector2D_Y_1 = CallFunc_BreakVector2D_Y_1;
	Parms.CallFunc_Divide_FloatFloat_ReturnValue_1 = CallFunc_Divide_FloatFloat_ReturnValue_1;
	Parms.CallFunc_SlotAsCanvasSlot_ReturnValue = CallFunc_SlotAsCanvasSlot_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_GetPosition_ReturnValue = CallFunc_GetPosition_ReturnValue;
	Parms.CallFunc_BreakVector2D_X_2 = CallFunc_BreakVector2D_X_2;
	Parms.CallFunc_BreakVector2D_Y_2 = CallFunc_BreakVector2D_Y_2;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.CallFunc_MakeTransform_ReturnValue_2 = CallFunc_MakeTransform_ReturnValue_2;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_2 = CallFunc_FinishSpawningActor_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsBa_Aa_Pda_00 = K2Node_DynamicCast_AsBa_Aa_Pda_00;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetObjectClass_ReturnValue = CallFunc_GetObjectClass_ReturnValue;
	Parms.CallFunc_EqualEqual_ClassClass_ReturnValue = CallFunc_EqualEqual_ClassClass_ReturnValue;
	Parms.CallFunc_GetTime_Time_2 = CallFunc_GetTime_Time_2;
	Parms.K2Node_CustomEvent_Actor_reference = K2Node_CustomEvent_Actor_reference;
	Parms.CallFunc_Update_Resources_FoundItemOfClass_1 = CallFunc_Update_Resources_FoundItemOfClass_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_1;
	Parms.CallFunc_K2_IsTimerActiveHandle_ReturnValue = CallFunc_K2_IsTimerActiveHandle_ReturnValue;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue = CallFunc_K2_GetTimerRemainingTimeHandle_ReturnValue;
	Parms.CallFunc_K2_IsValidTimerHandle_ReturnValue = CallFunc_K2_IsValidTimerHandle_ReturnValue;
	Parms.CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue = CallFunc_K2_GetTimerElapsedTimeHandle_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_MapRangeClamped_ReturnValue = CallFunc_MapRangeClamped_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_SelectNext_ReturnValue = CallFunc_SelectNext_ReturnValue;
	Parms.CallFunc_SelectNext_ReturnValue_1 = CallFunc_SelectNext_ReturnValue_1;
	Parms.CallFunc_Update_Resources_FoundItemOfClass_2 = CallFunc_Update_Resources_FoundItemOfClass_2;
	Parms.CallFunc_Update_Resources_FoundItemOfClass_3 = CallFunc_Update_Resources_FoundItemOfClass_3;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CustomEvent_Alpha = K2Node_CustomEvent_Alpha;
	Parms.K2Node_CustomEvent_Linear = K2Node_CustomEvent_Linear;
	Parms.K2Node_CustomEvent_ConnectingText = K2Node_CustomEvent_ConnectingText;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue = CallFunc_NearlyEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_1 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_2 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_NearlyEqual_FloatFloat_ReturnValue_3 = CallFunc_NearlyEqual_FloatFloat_ReturnValue_3;
	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_Lerp_ReturnValue_1 = CallFunc_Lerp_ReturnValue_1;
	Parms.CallFunc_MakeTransform_ReturnValue_3 = CallFunc_MakeTransform_ReturnValue_3;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3 = CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue_3;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_FinishSpawningActor_ReturnValue_3 = CallFunc_FinishSpawningActor_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_MakeStruct_LinearColor = K2Node_MakeStruct_LinearColor;
	Parms.CallFunc_GetTime_Time_3 = CallFunc_GetTime_Time_3;
	Parms.CallFunc_MakeLiteralString_ReturnValue = CallFunc_MakeLiteralString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.Temp_byte_Variable_2 = Temp_byte_Variable_2;
	Parms.Temp_byte_Variable_3 = Temp_byte_Variable_3;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.CallFunc_GetItemName_ReturnValue = CallFunc_GetItemName_ReturnValue;
	Parms.CallFunc_GetItemName_ReturnValue_1 = CallFunc_GetItemName_ReturnValue_1;
	Parms.CallFunc_GetItemName_ReturnValue_2 = CallFunc_GetItemName_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_2;
	Parms.CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3 = CallFunc_GetCGPlayerCharacter_CGPlayerCharacter_3;
	Parms.CallFunc_GetIsPDAToggleActivated_ReturnValue = CallFunc_GetIsPDAToggleActivated_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_IsPS4GamepadConnected_ReturnValue = CallFunc_IsPS4GamepadConnected_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


